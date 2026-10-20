#include<stdio.h>

int main(){
    // Vetor de nomes
    char nomes[8][30];
    float notas[8][2];
    float media[8];
    float acmMedia=0.0;

    int i;
    for(i=0;i<8;i++){
        printf("Nome : ");
        //fgets(nomes[i],30,stdin);
        scanf(" %s",&nomes[i]);
        printf("Nota1 : ");
        scanf("%f",&notas[i][0]);
        printf("Nota2 : ");
        scanf("%f",&notas[i][1]);
        media[i]=(notas[i][0]+notas[i][1])/2;
        acmMedia+=media[i];
    }
    float mediaTur=acmMedia/8;
    // Impressao dos dados
    printf("Nome \t Nota 1 \t Nota2 \t  Media\n");
    for(i=0;i<8;i++){
        printf("%s\t ",nomes[i]);
        printf("%5.2f\t",notas[i][0]);
        printf("%5.2f\t",notas[i][1]);
        printf("%5.2f\n",media[i]);
    }

}


