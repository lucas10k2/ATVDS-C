#include <stdio.h> //printf(), scanf().
int main() {
    double num1, num2, num3;

    printf("Informe a primeira nota: ");
    scanf("%lf", &num1);
    printf("Informe a segunda nota: ");
    scanf("%lf", &num2);
    printf("Informe a terceira nota: ");
    scanf("%lf", &num3);

    double media;

    media = (num1 + num2 + num3) / 3.0;

    printf("A media e: %.2lf\n", media);

    return 0;
}
