#include <stdio.h>

int main(void)

{
    int Dias;                                       /*declaracao de variaveis*/
    float Anos;
    printf("Insira o numero de dias: \n");          /*Entrada de Dados*/
    scanf(" %d", &Dias);
    Anos = Dias/365.25;                             /*Conversão Dias -> Anos*/
    printf("\n\n%d dias equivalem a %.2f anos. \n", Dias, Anos);
    return 0;
}
