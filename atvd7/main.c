#include <stdio.h>

int main() {
    double salarioMinimo, salarioFuncionario, quantidadeSalarios;

    printf("Informe o valor do salarios minimos: ");
    scanf("%lf", &salarioMinimo);

    printf("Informe o salarios do funcionario: ");
    scanf("%lf", &salarioFuncionario);

    quantidadeSalarios = salarioFuncionario / salarioMinimo;

    printf("O funcionario recebe %.2lf salarios minimos.\n", quantidadeSalarios);

    return 0;
}
