CC = gcc
CFLAGS = -Wall -Wextra -g3
SRC_DIR = src
INC_DIR = includes
OUT_DIR = output
TEST_DIR = tests
TEST_OUT_DIR = $(OUT_DIR)/test
TARGET = $(OUT_DIR)/main
TEST_TARGET = $(TEST_OUT_DIR)/test

SOURCES = $(wildcard $(SRC_DIR)/*.c)
OBJECTS = $(filter-out $(OUT_DIR)/main.o, $(SOURCES:$(SRC_DIR)/%.c=$(OUT_DIR)/%.o))
MAIN_SOURCE = $(SRC_DIR)/main.c
MAIN_OBJECT = $(OUT_DIR)/main.o

# Coleta todos os arquivos de teste
TEST_SOURCES = $(wildcard $(TEST_DIR)/*.c)
TEST_OBJECTS = $(TEST_SOURCES:$(TEST_DIR)/%.c=$(TEST_OUT_DIR)/%.o)

# Regra para compilar o programa principal
all: $(TARGET)

$(TARGET): $(OBJECTS) $(MAIN_OBJECT)
	$(CC) -o $@ $^

# Compila os arquivos de origem
$(OUT_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

# Compila o arquivo main.c
$(MAIN_OBJECT): $(MAIN_SOURCE)
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

# Compila os arquivos de teste
$(TEST_OUT_DIR)/%.o: $(TEST_DIR)/%.c
	@mkdir -p $(TEST_OUT_DIR)
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

# Regra para compilar todos os testes
test: $(TEST_OBJECTS) $(OBJECTS)
	@mkdir -p $(TEST_OUT_DIR)
	$(CC) -o $(TEST_TARGET) $(TEST_OBJECTS) $(OBJECTS) -lcunit -lm
	@echo "Running all tests..."
	./$(TEST_TARGET)

# Regra para compilar e executar um teste específico
test_%: $(TEST_OUT_DIR)/test_%.o $(OBJECTS)
	@mkdir -p $(TEST_OUT_DIR)
	$(CC) -o $(TEST_TARGET) $< $(OBJECTS) -lcunit -lm
	@echo "Running test $<..."
	./$(TEST_TARGET)

# Limpeza dos arquivos gerados
clean:
	rm -rf $(OUT_DIR)/*
