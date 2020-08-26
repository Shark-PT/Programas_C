#include <stdio.h>

int main(void)
{
    char Ch;
    printf("insira um caracter: \n");
    scanf(" %c", &Ch);
    printf(" o caracter inserido foi %c\n",Ch);
    printf(" e o codigo ASCII e: %d\n", Ch);
    return 0;
}
