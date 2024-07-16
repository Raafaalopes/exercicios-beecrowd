#include <stdio.h>

int main() {
    double A, B, C, triangulo, circulo, trapezio, quadrado, retangulo;
    double pi = 3.14159;

    scanf("%lf%lf%lf", &A, &B, &C);

    triangulo = (A * C) / 2;
    circulo = pi * (C * C);
    trapezio = ((A + B) * C) / 2;
    quadrado = B * B;
    retangulo = B * A;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);

    return 0;

}