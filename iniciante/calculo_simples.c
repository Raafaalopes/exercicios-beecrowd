#include <stdio.h>

int main(){
    int cod1, numP1, cod2, numP2;
    float valor1, valor2, total;

    scanf("%d%d%f %d%d%f", &cod1, &numP1, &valor1, &cod2, &numP2, &valor2);

    total = (numP1 * valor1) + (numP2 * valor2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}