#include <stdio.h>


//Funcao de multiplicação. Multiplica 3 numeros decimais "floats"

int mult(float a, float b, float c)
{
    printf(" %f", a*b*c);
    return 0;
}

//Funcao principal(main). Será nesta funcao que os numeros irão ser inseridos para a função mult poder actuar.
//Neste caso, os numeros estão hard-coded na função

int main(void)
{
    float x,y;
    x = 23.5;
    y = 12.9;
    mult (x,y,3.87);
    return 0;
}
