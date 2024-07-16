//calcula o menor numero de cedulas poissiveis para aquele valor
//considerando 100, 50, 20, 10, 5, 2, 1
// o valor lido esta no intervalo 0 < N < 1000000
#include <stdio.h>

int main(){
    int cem, cinq, vinte, dez, cinco, dois, um, n, n_parcial;
    scanf("%d", &n);
    n_parcial = n;

    cem = n_parcial / 100;
    n_parcial -= 100 * cem;

    cinq = n_parcial / 50;
    n_parcial -= 50 * cinq;

    vinte = n_parcial / 20;
    n_parcial -= 20 * vinte;

    dez = n_parcial / 10;
    n_parcial -= 10 * dez;

    cinco = n_parcial / 5;
    n_parcial -= 5 * cinco;

    dois = n_parcial / 2;
    n_parcial -= 2 * dois;

    um = n_parcial;
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00", n, cem, cinq, vinte, dez, cinco, dois, um);

    return 0;

}