#include <stdio.h>
#include <stdlib.h>

int main(){

    int numA, numB;

    printf("Digite um valor para A: ");
    scanf("%d", &numA);

    printf("Digite um valor para B: ");
    scanf("%d", &numB);

    if(numA > numB){
        if(numA % numB == 0){
            printf("\nO valor de A é divisível por B!\n");
        } else {
            printf("O valor de A não é divisível or B.\n");
        }
    } else {
        printf("A não é maior que B!\n");
    }

   return 0;
}



