/*Somar apenas os números pares*/

#include <stdio.h>

int main(void){
    int soma = 0, numero, teste = 0;
    do{
        printf("Informe um numero, para sair 0....");
        scanf("%i", &numero);
        teste = numero % 2;
        if(teste == 0){
            soma = soma + numero;
        }
    } while (numero != 0);

    printf("Soma: %i", soma);
    
    
    
}