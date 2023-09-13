#include <stdio.h>

int main() {

    double salario;
    

    printf("Bom dia, voce tera um aumento de 25%% em relacao ao seu salario, me informe seu salario:  ");
    scanf("%lf", &salario);

    double aumento = salario * 0.25;
    double novoSalario = salario + aumento;

    printf("O novo salario com aumento de 25%% e: $%.2lf\n", novoSalario);
    printf("Voce teve um aumento de : $%.2lf", aumento);

    return 0;
}
