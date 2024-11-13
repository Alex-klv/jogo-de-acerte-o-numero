#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int tentativas = 10, palpite, num;
    int historico[10];
    int i;

    srand(time(0));
    num = rand() % 100 + 1; // gera um número aleatorio de 1 a 100

    printf("______________________________\n");
    printf("ADIVINHE O NUMERO DE 1 A 100\n");
    printf("         10 CHANCES              \n");
    printf("______________________________\n");  

    printf("\nDe um palpite: ");
    scanf("%d", &palpite);

    i = 0;
    historico[i] = palpite;
    tentativas--;

    for(i = 1; i <= tentativas || palpite == num; i++){

        if(palpite == num){

            printf("\n PARABENS VOCE ACERTOU \n");

            break;
        }

        else if(palpite > num){

            printf("----Tentativa %d----", i+1);

            printf("\nO numero e menor que %d: \n", palpite);
            scanf("%d", &palpite);

            historico[i] = palpite;
        }
        else{

            printf("----Tentativa %d----", i+1);

            printf("\nO numero e maior que %d: \n", palpite);
            scanf("%d", &palpite);

            historico[i] = palpite;
        }
    }

    if(palpite != num){
    printf("\nVoce errou. O valor era %d\n", num);

    i=0;

    printf("\nHISTORICO DE TENTATIVAS\n");

    while(i <= tentativas && historico[i] != 0){

        printf("Tentativa %d: %d\n", i+1, historico[i]);

        i++;
    }
    }
}