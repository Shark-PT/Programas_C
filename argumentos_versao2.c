#include <stdio.h>


//Funcao de multiplica��o. Multiplica 3 numeros decimais "floats"

int mult(float a, float b, float c)
{
    printf(" %f", a*b*c);
    return 0;
}

//Funcao principal(main). Ser� nesta funcao que os numeros ir�o ser inseridos para a fun��o mult poder actuar.
//Neste caso, os numeros est�o hard-coded na fun��o

int main(void)
{
    float x,y;
    x = 23.5;
    y = 12.9;
    mult (x,y,3.87);
    return 0;
}
