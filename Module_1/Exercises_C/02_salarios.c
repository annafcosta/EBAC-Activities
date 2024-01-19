#include <stdio.h>
#include <stdlib.h>

void calcularQtdSalarios (float salarioM, float salarioP, float *qtdSalarios) {

    *qtdSalarios = salarioP / salarioM;
}

int main(){

    float salarioMin, salarioPessoa;

    printf("Digite o valor atual do salário mínimo: ");
    scanf("%f", &salarioMin);

    printf("Digite o valor de seu salário: ");
    scanf("%f", &salarioPessoa);

    float qtdSalario;

    calcularQtdSalarios(salarioMin,salarioPessoa, &qtdSalario);

    printf("Quantidade de salários mínimos é: %.2f\n", qtdSalario);
   
   return 0;
}



