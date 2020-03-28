/*Desenvolva um programa que receber as dos quatros bimestres
de um aluno e informe se ele está na 5º prova ou não, caso esteja
o programa deve informar qual a nota necessária para o aulo passar
*/

#include <stdio.h>

int main(void){
    float media = 0, nota = 0, a = 0;
    
    for(int i = 1; i <= 4; i++){
        printf("Informe sua nota %i\n", i);
        scanf("%f", &nota);
        
        media = (media + nota);;
    }
    media = media/4;
    printf("Media: %f\n", media);
    if(media >= 6){
            printf("Aluno aprovado com media %f\n", media);
    }
    if(media < 6){
        a = 6 - media;
        printf("Faltam %f\n", a);
        printf(" para o aluno ser aprovado.");
        printf("Aluno aprovado com media %f", media);
    }
}
