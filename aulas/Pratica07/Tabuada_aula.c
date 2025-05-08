#include <stdio.h>

int main () {
    int numero = 0;

while (numero <1 || numero > 10)
{
    printf("Entre com um numero inteiro de 1 a 10 : ");
    scanf("%i", &numero); 
    while (getchar() != '\n');
}


    printf("Entre com um numero inteiro de 1 a 10 : ");
    scanf("%i", &numero);

    printf("a tabuada de %i : \n", numero);
    for(int i=1; i<=10; i = i+1 ){  //vai de 1 ate 10,salto de 1
         printf("%i x %i = %i\n", i, numero, i * numero);
     }
    // for(int i=10; i>=1; i--){
    //     printf("%i x %i = %i\n", i, numero, i * numero);
    
    // printf(" x %i = %i\n", numero, 1 * numero);
    // printf(" x %i = %i\n", numero, 2* numero);
    // printf(" x %i = %i\n", numero, 3* numero);
    // printf(" x %i = %i\n", numero, 4* numero);
    // printf(" x %i = %i\n", numero, 5* numero);
    // printf(" x %i = %i\n", numero, 6* numero);
    // printf(" x %i = %i\n", numero, 7* numero);
    // printf(" x %i = %i\n", numero, 8* numero);
    // printf(" x %i = %i\n", numero, 9* numero);
    // printf(" x %i = %i\n", numero, 10* numero);

    return 0;
}
