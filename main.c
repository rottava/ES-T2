#include <stdio.h>
#include <stdlib.h>
#define MIN 0
#define MAX 100
int main(){
    // 1
    int calcular = 1;
    int auxiliar;
    int loop;
    int tamanhoVetor;
    int resultado;

    do{
        //1
        loop = 0;
        resultado = 0;
        printf("Tamanho do vetor: ");
        scanf("%d", &tamanhoVetor);
        //2
        if(tamanhoVetor > 1){
            //3
            printf("Insira os valores separados por ENTER \n");
            while(loop < tamanhoVetor){
                //4
                scanf("%d", &auxiliar);
                //5
                if(auxiliar <= MAX){
                    //6
                    if(auxiliar >= MIN){
                        //7
                        resultado += auxiliar;
                        loop++;
                    }
                    else{
                        printf("Valor inserido menor que MINIMO (0)");
                    }
                }
                else{
                    printf("Valor inserido maior que o MAXIMO(100)");
                }
            }
            //8
            printf("A media dos %d valores inseridos e: %d", tamanhoVetor, resultado / tamanhoVetor);
        }
        else{
            printf("Sao necessarios pelo menos dois numeros para fazer a media!\n");
        }
        //9
        printf("Digite 1 para continuar: ");
        scanf("%d", &calcular);
    }
    //10
    while(calcular == 1);

    return 0;
}
