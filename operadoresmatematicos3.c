#include <stdio.h>

int main() {

    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int numero1 = 1;

    printf("Antes incremento %d\n", numero1);
    
    //numero1 = numero1 +1 (este é o calculo na sua essência)
    //numero1 += 1; (esta é uma outra forma de utilizar o operador incremento)
    numero1++;
    printf("Após incremento %d\n", numero1);

    //numero1 = numero1 -1;(este é o calculo na sua essência)
    //numero1 -= 1; (esta é uma outra forma de utilizar o operador decremento)
    numero1--;
    printf("Após decremento %d\n", numero1);



    return 0;
}