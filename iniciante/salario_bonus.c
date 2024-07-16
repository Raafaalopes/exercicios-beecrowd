#include <stdio.h>

int main(){
    char nome[10];
    double salario, vendas, bonus;
    scanf("%s%lf%lf", &nome, &salario, &vendas);
    bonus = vendas * 0.15;
    salario += bonus;
    printf("TOTAL = R$ %.2f\n", salario);
}