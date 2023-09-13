#include <stdio.h>

int main() {
    int anoNascimento, anoAtual, idadeAtual, idade2050;

    printf("Informe o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Informe o ano atual: ");
    scanf("%d", &anoAtual);

    idadeAtual = anoAtual - anoNascimento;

    idade2050 = 2050 - anoNascimento;

    printf("Idade da pessoa no ano atual: %d anos\n", idadeAtual);
    printf("Idade que a pessoa tera em 2050: %d anos\n", idade2050);

    return 0;
}
