#include <stdio.h>

int soma (int x)
{
    printf(" a soma e: %d", (x+x));
    return 0;
}

int main(void)
{
    int num;
    printf("insira um numero: ");
    scanf(" %d", &num);
    printf("\n\n");
    soma (num);
    return 0;
}
