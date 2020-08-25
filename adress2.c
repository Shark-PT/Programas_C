//prints and integer via its adress

#include <stdio.h>

int main (void)
{
    int n = 50;
    printf("%i\n", *&n);
}
