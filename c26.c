#include <stdio.h>
#include <stdlib.h>

int main(){

    int numeroa;
    int numerob;

    printf("numero A: ");
    scanf("%d", &numeroa);
    printf("Numero B: ");
    scanf("%d", &numerob);


    printf("Operacao \n");
    printf("1 - Soma \n");
    printf("2 - Subtracao \n");

    int soma = numeroa + numerob;
    int subtracao = numeroa - numerob;


    int opcao;
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
        printf("%d", soma);
        break;
        case 2:
        printf("%d", subtracao);
    }

    return 0;
}