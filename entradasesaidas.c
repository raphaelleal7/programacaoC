#include <stdio.h>

int main() {
    
    int idade;
    int matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("\n");

    printf("Nome do aluno: %s\n", nome);
    printf("Matricula: %d\n", matricula);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);

    return 0;

};