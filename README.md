# Projeto de Conversor de Unidades em C

Este projeto é uma aplicação em C que realiza diversas conversões de unidades, incluindo comprimento, massa, volume, temperatura, velocidade, potência, área, tempo e dados. O projeto também inclui testes utilizando a biblioteca **CUnit** para validação das funcionalidades.

## Índice

- [Estrutura do Projeto](#estrutura-do-projeto)
- [Descrição dos Arquivos](#descrição-dos-arquivos)
- [Requisitos para Execução](#requisitos-para-execução)
- [Como Compilar e Executar o Projeto](#como-compilar-e-executar-o-projeto)
- [Executando os Testes](#executando-os-testes)
- [Limpeza dos Arquivos](#limpeza-dos-arquivos)

## Estrutura do Projeto

A estrutura do projeto está organizada da seguinte forma:

```
.
├── includes
│   ├── conversao_area.h
│   ├── conversao_distancia.h
│   ├── conversao_massa.h
│   ├── conversao_volume.h
│   ├── conversor_dados.h
│   ├── conversor_de_potencia.h
│   ├── conversor_de_tempo.h
│   ├── conversor_temperatura.h
│   ├── conversor_velocidade.h
├── src
│   ├── conversao_area.c
│   ├── conversao_distancia.c
│   ├── conversao_massa.c
│   ├── conversao_volume.c
│   ├── conversor_dados.c
│   ├── conversor_de_potencia.c
│   ├── conversor_de_tempo.c
│   ├── conversor_temperatura.c
│   ├── conversor_velocidade.c
│   ├── main.c
├── tests
│   ├── conversao_volume_test.c
├── Makefile
├── README.md
└── .gitignore
```

## Descrição dos Arquivos

- **includes/**: Contém os arquivos de cabeçalho com as declarações das funções de conversão.
- **src/**: Contém os arquivos fonte com a implementação das funções de conversão e o arquivo principal `main.c`.
- **tests/**: Contém os arquivos de teste usando a biblioteca **CUnit**.
- **Makefile**: Arquivo para automatizar a compilação do projeto e execução dos testes.
- **.gitignore**: Define os arquivos e pastas que devem ser ignorados pelo Git.

## Requisitos para Execução

- **Compilador GCC**
- **Biblioteca CUnit** para executar os testes
- Sistema operacional Linux ou compatível

### Instalação da CUnit

Execute o seguinte comando para instalar a biblioteca CUnit no Linux:

```bash
sudo apt-get install libcunit1 libcunit1-doc libcunit1-dev
```

## Como Compilar e Executar o Projeto

1. Clone o repositório ou copie os arquivos do projeto para seu sistema.

2. Navegue até o diretório raiz do projeto.

3. Compile o programa utilizando o comando:

```bash
make
```

4. Execute o programa com o comando:

```bash
./output/main
```

5. O programa exibirá um menu no terminal para que você escolha o tipo de conversão desejada.

## Executando os Testes

1. Para compilar e executar todos os testes, use o comando:

```bash
make test
```

2. Para compilar e executar um teste específico, use o comando:

```bash
make test_<nome_do_teste>
```
#### Exemplo: Se o arquivo de teste se chamar conversao_volume_test.c, você pode executar o seguinte comando:
```bash
make test_conversao_volume_test
```
Os resultados dos testes serão exibidos no terminal.

## Limpeza dos Arquivos

1. Para limpar todos os arquivos gerados no diretório `output`, utilize:

```bash
make clean
```

2. Para limpar apenas os arquivos de teste no diretório `output/tests`, utilize:

```bash
make clean_tests
```

Este comando remove exclusivamente os arquivos de teste gerados, mantendo os demais arquivos intactos.

