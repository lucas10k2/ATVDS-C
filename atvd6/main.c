#include <stdio.h>

int main() {
    double temperaturaCelsius, temperaturaFahrenheit;

    printf("Informe a temperatura em graus Celsius: ");
    scanf("%lf", &temperaturaCelsius);

    temperaturaFahrenheit = (temperaturaCelsius * 1.8) + 32.0;

    printf("A temperatura em graus Fahrenheit e: %.2lf\n", temperaturaFahrenheit);

    return 0;
}
