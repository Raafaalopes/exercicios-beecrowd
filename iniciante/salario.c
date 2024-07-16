/*
Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas,
o valor que recebe por hora e calcula o salário desse funcionário.
A seguir, mostre o número e o salário do funcionário, com duas casas decimais.
*/

#include <stdio.h>

int main() {
    int n_func, horas_t;
    double valor_h;
    scanf("%d%d%lf", &n_func, &horas_t, &valor_h);
    float salario = horas_t * valor_h;
    printf("NUMBER = %d\n", n_func);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;

}