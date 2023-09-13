#include <stdio.h>
#include <math.h>

int main() {
    double catetoA, catetoB, hipotenusa;

    printf("Informe o valor do primeiro cateto: ");
    scanf("%lf", &catetoA);

    printf("Informe o valor do segundo cateto: ");
    scanf("%lf", &catetoB);

  
    hipotenusa = sqrt((catetoA * catetoA) + (catetoB * catetoB));

    printf("A hipotenusa do triangulo e: %.2lf\n", hipotenusa);

    return 0;
}
