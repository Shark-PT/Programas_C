#include <stdio.h>

int main(void)
{
    int num;                                        //define uma variavel inteira com o nome numero
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num>10)                                     //usa a condicao IF para verificar se o numero que o utilizador adicionou � maior que 10
        printf("\n\nO numero e maior que 10");
    if (num==10)                                    //usa a condicao IF para verificar se o numero que o utilizador adicionou � igual a 10
    {
        printf("\n\nVoce acertou!\n");
        printf("o numero e igual a 10.");
    }
    if (num<10)                                     //usa a condi��o IF para verificar se o numero que o utilizador adicionou � menor que 10
        printf("\n\nO numero e menor que 10");
    return 0;
}
