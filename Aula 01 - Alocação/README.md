# Exercícios

1. [Alocação de memória](allocation.c)

2. [Identificação de vazamento de memória usando a ferramenta Valgrind](memleak.c)

3. [Identificação de violação de memória usando a ferramenta Valgrind](memviolation.c)

## Utilitários

Instalação do Valgrind no Linux

```sh
    sudo apt-get update
    sudo apt-get install valgrind
```
Uso

```sh
    valgrind ./program
```
```sh
    valgrind --leak-check=full ./program
```
