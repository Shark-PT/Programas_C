#include<stdio.h>

int main(void)
{
    char string[100];
    printf("Digite uma string: ");
    gets(string);
    printf("\n\nVoce digitou %s", string);
    return 0;
}
