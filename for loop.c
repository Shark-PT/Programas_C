#include<stdio.h>

int main(void)
{
    int count;                              //inicializa a variavel int com o nome count
    for (count=100; count>=0; count++)      //no loop, é iniciado a variavel count com o numero 0, e enquanto a variavel for menor que 100, o loop continua
                                            //e a cada iteração aumenta um valor a variavel
        printf("%d", count);
    return 0;
}
