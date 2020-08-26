#include <stdio.h>

int main (void)
{
    char str[10] = "Joao";                              //Define a String "Joao"
    printf("\n\nString: %s", str);                      //apresenta a String "Joao"
    printf("\nSegunda letra: %c", str[1]);              //Apresenta a segunda letra da String "JOAO" que e 'o'
    str[1] = 'U';                                       //Substitui a segunda letra da string "Joao" que e 'o' por um 'U'
    printf("\nAgora a segunda letra e: %c", str[1]);    //Apresenta a segunda letra da nova string "JUao" que e um 'U'
    printf("\n\nString resultante: %s", str);           //Apresenta a nova String "JUao"
    return 0;
}
