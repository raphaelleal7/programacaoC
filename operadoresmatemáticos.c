#include <stdio.h>
 
int main() {
   
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

        //Entrada de dados
    printf("Entre com o numero 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o numero 2: \n");
    scanf("%d", &numero2);

        //operação soma
    soma = numero1 + numero2;
        //operação substração    
    subtracao = numero1 - numero2;
        //operação multiplicação (produto)
    multiplicacao = numero1 * numero2;
        //operação divisão (razão)   
    divisao = numero1 / numero2;

    printf("A Soma é: %d\n", soma);
    printf("A Substração é: %d\n", subtracao);
    printf("A Multiplicação é: %d\n", multiplicacao);
    printf("A Divisão é: %d\n", divisao);

    printf("\n");
    return 0;
}