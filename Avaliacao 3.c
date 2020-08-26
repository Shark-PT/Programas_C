#include <stdio.h>

int main(void)

{
    char str[100];
    char string[100];

        printf("insira uma string: \n");
        gets (str);

        printf("insira outra string: \n");
        gets (string);
            printf("voce inseriu a string : %s", str);
            printf("\ne a string: %s\n", string);

            printf("a segunda letra da primeira string e: %c", str[1]);
            printf("\na segunda letra da segunda string e: %c", string[1]);

    return 0;
}
