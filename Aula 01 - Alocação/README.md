# Exercícios

1. [Alocação de memória](allocation.c)

2. [Identificação de vazamento de memória usando a ferramenta Valgrind](memleak.c)

3. [Identificação de violação de memória usando a ferramenta Valgrind](memviolation.c)

## Observações

- Sobre o Valgrind relatar mais allocs que o esperado

> O Valgrind mantém registro de todas as alocações de memória que ocorrem em sua aplicação, incluindo as feitas internamente pela biblioteca do C. Não é (e não pode) ser limitada às alocações que você faz explicitamente, pois a biblioteca C pode retornar apontadores à memória que ela alocou internamente. 
>
> Muitas implementações padrão de E/S alocarão buffers para uso por printf() e/ou scanf().
>
> *[Fonte](https://stackoverflow.com/questions/44271967/valgrind-shows-more-memory-allocated-than-actually-is)* 
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
