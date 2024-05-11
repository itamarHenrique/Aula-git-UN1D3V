#include <stdio.h>

int main(){ 
    char nome[30];

    printf("Informe o seu nome: ");
    scanf("%s", nome);

    printf("Olá %s \n", nome);

    return 0;
}