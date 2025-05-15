#include <stdio.h>

int main (){
int numeros [10];

numeros[0] = 1;
numeros[1] = 2;
numeros[2] = 3;
numeros[3] = 4;
numeros[4] = 5;
numeros[5] = 6;
numeros[6] = 7;
numeros[7] = 8;
numeros[8] = 9;
numeros[9] = 10;

int maior_numeor = -99999;
int menor_numero =  99999;

for (int i=0; i<10; i++) {
    printf("Entre com o numero %i:", i+1);
    scanf("%i", &numeros[i]);
    
    if (numeros[i] > maior_numeor){
        maior_numeor = numeros[i];
    }
    if (numeros[i] < menor_numero){
        menor_numero = numeros[i]
    }

}
printf ("Seus numeros foram/n");
for (int i = 0; < 10; i++)
{
    printf("%i ," numeros{i});
}
printf("/n")
printf("O maior numero foi %i /n", maior_numeor);
printf("o menor numero foi %i /n", menor_numero);
    return 0 ;
}