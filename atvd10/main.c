#include <stdio.h>
#include <math.h>

int main() {
    double raio, comprimento, area, volume;
    const double pi = 3.14159265359;

    printf("Informe o raio da esfera: ");
    scanf("%lf", &raio);

    comprimento = 2.0 * pi * raio;
    
    area = pi * raio * raio;

    volume = (3.0 / 4.0) * pi * pow(raio, 3);

    printf("Comprimento da esfera: %.2lf\n", comprimento);
    printf("area da esfera: %.2lf\n", area);
    printf("Volume da esfera: %.2lf\n", volume);

    return 0;
}
