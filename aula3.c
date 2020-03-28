/*Desenvolva um programa  que receba n números positivos
e quando  o usuário digitar -1 ser encerrado informando
qual o maior número e menor*/

#include <stdio.h>

int main(void){
    int numero, maior = 0, menor = 0, cont = 0;
    do{
        printf("Digite um numero inteiro positivo, digite -1 para sair.");
        scanf("%i", &numero);
        if(cont == 0){
            maior = numero;
            menor = numero;
            cont = 1;
        }
        if(numero > maior){
            maior = numero;
        }
        if(numero < menor & numero != -1){
            menor = numero;
        }
    }while (numero != -1);
    printf("O maior numero foi %i", maior);
    printf(" O menor numero foi %i", menor);
}