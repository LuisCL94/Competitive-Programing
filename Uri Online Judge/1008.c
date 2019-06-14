#include <stdio.h>

int main() {
    
    int numeroFuncionario, horasTrabalhadas;
    float recebePorHora;

    scanf("%d %d %f", &numeroFuncionario, &horasTrabalhadas, &recebePorHora);

    float salario = horasTrabalhadas * recebePorHora;

    printf("NUMBER = %d\n", numeroFuncionario);
    printf("SALARY = U$ %.2f\n", salario);
    
    return 0;
}
