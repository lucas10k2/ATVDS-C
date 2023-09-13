#include <stdio.h>

int main() {

    double cotacao_dolar, user_dolar;

    printf("Informe a cotacao do dolar atual : \n");
    scanf("%lf", &cotacao_dolar);

    printf("Informe a quatidade dolar para convercao: \n");
    scanf("%lf",&user_dolar);

    double calculo = (cotacao_dolar * user_dolar);

    printf("seu valor em real sera de: \n%lf", calculo);
    

    return 0;
}
