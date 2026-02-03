#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int idade;
    char genero;
    char nome[100];
}Pessoa;


int main()
{
    Pessoa pessoa1;
    pessoa1.idade = 35;
    pessoa1.genero = 'f';
    strcpy(pessoa1.nome,"Maria");
    printf("Nome: %s\nIdade: %d\nGenero: %c", pessoa1.nome,pessoa1.idade,pessoa1.genero);
    return 0;
}
