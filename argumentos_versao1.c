#include <stdio.h>

//na funcao square dizemos que ira receber um argumento inteiro de X e esse argumento ira ser multiplicado por ele proprio para calcular o quadrado
int square (int x)  //Calcula o quadrado de X
{
    printf("O quadrado e %d", (x*x));
    return 0;
}


//na funcao main é inserido o argumento de X, que sera calculado na funcao Square e apresentado no ecra
int main (void)
{
    int num;
    printf("Entre com um numero: ");
    scanf(" %d", &num);
    printf("\n\n");
    square(num);
    return 0;
}
