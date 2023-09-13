#include <stdio.h>

int main() {
    double diagonalMaior, diagonalMenor, area;

    printf("Informe a diagonal maior do losango: ");
    scanf("%lf", &diagonalMaior);

    printf("Informe a diagonal menor do losango: ");
    scanf("%lf", &diagonalMenor);

    area = (diagonalMaior * diagonalMenor) / 2.0;

    printf("A area do losango é: %.2lf\n", area);

    return 0;
}
