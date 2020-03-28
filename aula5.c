/*Desenvolva um programa que resolva a seguinte formula:
Vm = S / T;
S = Vm * T;

O programa deve encontrar tanto a velocidade quanto o espaço
e ser executado quantas vezes for necessário*/

#include <stdio.h>
int main(void){
    int op;
    float Vm = 0, T = 0, S = 0;
    do{
        
        
        printf("\n 1-Velocidade media \n 2-Espaco \n 0-Sair");
        scanf("%i", &op);
        if(op == 1){
            printf("Informe o espaco.");
            scanf("%f", &S);
            printf("Informe o tempo.");
            scanf("%f", &T);
            Vm = S / T;
            printf("Resultado: %f", Vm);
        }
        if(op == 2){
            printf("Informe a velocidade media.");
            scanf("%f", &Vm);
            printf("Informe o tempo.");
            scanf("%f", &T);
            S = Vm * T;
            printf("Resultado: %f", S);
        }
    } while(op != 0);
}