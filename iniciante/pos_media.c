#include <stdio.h>

int main(){
    double num, media = 0.00, soma = 0.00;
    int contador = 0;

    for(int i = 1; i <= 6; i++) {
        scanf("%lf", &num);
        if(num > 0.00) {
            contador++;
            soma += num;
        }
    }
    media = soma / contador;

    printf("%d valores positivos\n", contador);
    printf("%.1lf\n", media);

    return 0;
}