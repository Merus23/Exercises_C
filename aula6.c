/*Faça um programa que converta Celsius em Fahrenheit*/
#include <stdio.h>

int main(void){
    float celsius, fahrenheit = 0, aux = 1.8;
    do{
        fahrenheit = 0;
        printf("\n Informe a temperatura em ºC, digite 0 para sair. ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * aux);
        fahrenheit = fahrenheit + 32;
        printf("\n Fahrenheit: %f", fahrenheit);
    } while (celsius != 0);
}