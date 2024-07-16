// Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. 
// Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, 
// caso haja uma divisão por 0 ou raiz de numero negativo.

#include <stdio.h>
#include <math.h>

int main(){
    double A, B, C, delta, R1 ,R2;
    scanf("%lf%lf%lf", &A, &B, &C);

    delta = pow(B, 2) + (-4 * A * C);

    if(delta < 0 || A == 0) {
        printf("Impossivel calcular\n");
    } else {
        R1 = ((B * (-1)) + sqrt(delta)) / (2 * A);
        R2 = ((B * (-1)) - sqrt(delta)) / (2 * A);
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }

    return 0;



}

