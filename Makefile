# Variáveis
CC = gcc
CFLAGS = -Wall -Wextra -g3 -I$(INC_DIR) -I$(CUNIT_DIR)
SRC_DIR = src
INC_DIR = includes
OUT_DIR = output
TEST_DIR = tests
TARGET = $(OUT_DIR)/main
TEST_TARGET = $(OUT_DIR)/test

# Caminho para a biblioteca CUnit (VERIFIQUE ESTE CAMINHO NOVAMENTE!)
CUNIT_DIR = C:/msys64/mingw64/include
CUNIT_LIB_DIR = C:/msys64/mingw64/lib

# Fontes e objetos (DEFINIÇÃO CLARA E SEPARADA)
SOURCES = $(wildcard $(SRC_DIR)/*.c)
OBJECTS = $(SOURCES:$(SRC_DIR)/%.c=$(OUT_DIR)/%.o)

# Fontes de teste e objetos
TEST_SOURCES = $(wildcard $(TEST_DIR)/*.c)
TEST_OBJECTS = $(TEST_SOURCES:$(TEST_DIR)/%.c=$(OUT_DIR)/%.o)

# Regra principal (executável do programa)
all: create_output $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# Regras para compilar os objetos de implementação
$(OUT_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regras para compilar os objetos de teste
$(OUT_DIR)/%.o: $(TEST_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regra para compilar e rodar os testes
test: create_output $(TEST_TARGET)

$(TEST_TARGET): $(TEST_OBJECTS) $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TEST_TARGET) $(TEST_OBJECTS) $(OBJECTS) -L$(CUNIT_LIB_DIR) -lcunit

# Cria a pasta output se ela não existir
create_output:
	@mkdir -p $(OUT_DIR)

# Limpeza dos arquivos gerados
clean:
	rm -rf $(OUT_DIR)
