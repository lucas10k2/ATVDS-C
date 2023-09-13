#include <stdio.h>

int main() {
    double peso, novoPesoEngordar, novoPesoEmagrecer;

    printf("Informe o peso da pessoa: ");
    scanf("%lf", &peso);

    novoPesoEngordar = peso * 1.15;

    novoPesoEmagrecer = peso * 0.8;

    printf("Se a pessoa engordar 15%%, o novo peso sera: %.2lf\n", novoPesoEngordar);
    printf("Se a pessoa emagrecer 20%%, o novo peso sera: %.2lf\n", novoPesoEmagrecer);

    return 0;
}
