#include <stdio.h>
#include <math.h>


int main() {
    float valor;
    int cem, cinquenta, vinte, dez, cinco, dois;
    int um, cinquenta_cent, vintcinco, dez_cent, cinco_cent, um_cent;

    scanf("%f", &valor);
    int inteiro = (int)valor;
    int decimal = round((valor - inteiro) * 100);
    cem = inteiro / 100;
    inteiro -= cem * 100;
    
    cinquenta = inteiro / 50;
    inteiro -= cinquenta * 50;

    vinte = inteiro / 20;
    inteiro -= vinte * 20;

    dez = inteiro / 10;
    inteiro -= dez * 10;

    cinco = inteiro / 5;
    inteiro -= cinco * 5;

    dois = inteiro / 2;
    inteiro -= dois * 2;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinquenta);
    printf("%d nota(s) de R$ 20.00\n", vinte);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinco);
    printf("%d nota(s) de R$ 2.00\n", dois);

    um = inteiro / 1;

    cinquenta_cent = decimal / 50;
    decimal -= cinquenta_cent * 50;

    vintcinco = decimal / 25;
    decimal -= vintcinco * 25;

    dez_cent = decimal / 10;
    decimal -= dez_cent * 10;

    cinco_cent = decimal / 5;
    decimal -= cinco_cent * 5;
  
    um_cent = decimal / 1;
    

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", um);
    printf("%d moeda(s) de R$ 0.50\n", cinquenta_cent);
    printf("%d moeda(s) de R$ 0.25\n", vintcinco);
    printf("%d moeda(s) de R$ 0.10\n", dez_cent);
    printf("%d moeda(s) de R$ 0.05\n", cinco_cent);
    printf("%d moeda(s) de R$ 0.01\n", um_cent);

    return 0;
}