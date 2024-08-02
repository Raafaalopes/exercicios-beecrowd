#include <stdio.h>

int main(){
    double salario = 0.00, novo_salario = 0.00, reajuste = 0.00;
    int percentual = 0;
    scanf("%lf", &salario);
    if(salario >= 0 && salario <= 400.00){
        reajuste = salario * 0.15;
        percentual = 15;
    } else if(salario > 400.00 && salario <= 800.00) {
        reajuste = salario * 0.12;
        percentual = 12;
    } else if(salario > 800.00 && salario <= 1200.00) {
        reajuste = salario * 0.10;
        percentual = 10;
    } else if(salario > 1200.00 && salario <=2000.00) {
        reajuste = salario * 0.07;
        percentual = 7;
    } else if(salario > 2000.00) {
        reajuste = salario * 0.04;
        percentual = 4;
    }

    novo_salario = salario + reajuste;
    printf("Novo salario: %.2lf\n", novo_salario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %%\n", percentual);

    return 0;
}