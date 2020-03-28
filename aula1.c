/*Desenvolva uma calculadora em linguagem C,
o programa deve ser executado quantas vezes 
for necessário  edeve contar com todas as 
operações básicas (+ - * /).
A precisão da calculadora deve ser de dois dígitos.
O programa deve perguntar ao usuário qual operação ele deseja realizar.
O programa deve execetar quantas vezes for necessário.*/

#include <stdio.h>

int main(void){
    float x = 0,y = 0, resultado = 0;
    int op; //qual tipo de calculado o usuário quer utilizar.
    do{
        printf("\n\t1 -SOMA\n\t2 -SUBTRAÇÃO\n\t3 -MULTIPLICAÇÃO\n\t4 -DIVISÃO");
        scanf("%i", &op);
        printf("\n Digite o primeiro número");
        scanf("%f", &x);
        printf("\n Digite o segundo número");
        scanf("%f", &y);
        switch (op){
            case 1: 
                resultado = x+y;
                break;
            case 2: 
                resultado = x-y;
                break;
            case 3: 
                resultado = x*y;
                break;
            case 4: 
                resultado = x/y;
                break;        
        default:
            printf("\n Digite uma opção válida \n");
            break;
        }
        printf("\n\t O resultado é: %0.2f", resultado);
        printf("\n Digite 1 para continuar");
        scanf("%i",  &op);
    }while(op==1);

}
