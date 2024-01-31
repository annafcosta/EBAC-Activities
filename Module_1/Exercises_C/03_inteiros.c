#include <stdio.h>

void sequenciaNumeros(int tam){

    int i;

    for (i = 1; i <= tam; i++)
    {
        printf("%d ", i);
    }
} 

int main(){

    int tamSequencia;

    printf("Digite o tamanho da sequência de números inteiros: ");
    scanf("%d", &tamSequencia);

    printf("A sequência dos %d primeiros números é: \n", tamSequencia);
    sequenciaNumeros(tamSequencia);

    return 0;
}