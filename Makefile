# Variáveis
CC = gcc
CFLAGS = -Wall -Wextra -g3
SRC_DIR = src
INC_DIR = includes
OUT_DIR = output
TEST_DIR = tests
TEST_OUT_DIR = $(OUT_DIR)/tests
TARGET = $(OUT_DIR)/main
TEST_TARGET = $(TEST_OUT_DIR)/tests

# Coleta os arquivos de origem
SOURCES = $(wildcard $(SRC_DIR)/*.c)
OBJECTS = $(SOURCES:$(SRC_DIR)/%.c=$(OUT_DIR)/%.o)

# Arquivos de teste
TEST_SOURCES = $(wildcard $(TEST_DIR)/*.c)
TEST_OBJECTS = $(TEST_SOURCES:$(TEST_DIR)/%.c=$(TEST_OUT_DIR)/%.o)

# Regras
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) -o $@ $^

$(OUT_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OUT_DIR)
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

$(TEST_OUT_DIR)/%.o: $(TEST_DIR)/%.c
	@mkdir -p $(TEST_OUT_DIR)
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

test: $(TEST_OBJECTS) $(OBJECTS)
	@mkdir -p $(TEST_OUT_DIR)
	$(CC) $(CFLAGS) -DBUILD_TEST_MAIN $(filter-out $(OUT_DIR)/main.o, $(OBJECTS)) $(TEST_OBJECTS) -lcunit -lm -o $(TEST_OUT_DIR)/tests
	./$(TEST_OUT_DIR)/tests

# test_%: $(TEST_OUT_DIR)/%.o $(OBJECTS)
# 	@mkdir -p $(TEST_OUT_DIR)
# 	$(CC) -o $(TEST_TARGET)_$* $< $(OBJECTS) -lcunit -lm
# 	@echo "Running test $*..."
# 	./$(TEST_TARGET)_$*

test_%: $(TEST_DIR)/%.c $(OBJECTS)
	@mkdir -p $(TEST_OUT_DIR)
	$(CC) $(CFLAGS) -DBUILD_TEST_MAIN $(TEST_DIR)/$*.c $(filter-out $(OUT_DIR)/main.o, $(OBJECTS)) -lcunit -lm -o $(TEST_OUT_DIR)/$*
	@echo "Running test $*..."
	./$(TEST_OUT_DIR)/$*

clean:
	rm -rf $(OUT_DIR)

# Limpeza dos arquivos de testes
clean_tests:
	rm -rf output/tests/