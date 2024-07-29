//se os 3 valores formam um triangulo calcular o perímetro
//senao calcular a area do trapezio com bases A B e altura C
// para 3 valores formarem um triangulo, um terceiro valor tem que ser sempre menor que a soma dos outros dois

#include <stdio.h>

int main(){
    double A, B, C, perimetro, area;
    scanf("%lf%lf%lf", &A, &B, &C);

    if((C < A + B) && (B < A + C) && (A < B + C)){
        perimetro = A + B + C;
        printf("Perimetro = %.1lf\n", perimetro);
    } else {
        area = ((A + B) * C) / 2;
        printf("Area = %.1lf\n", area);
    }

    return 0;
}