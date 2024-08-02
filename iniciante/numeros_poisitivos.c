#include <stdio.h>

int main(){
    double num;
    int contador;

    for(int i = 1; i <= 6; i++) {
        scanf("%lf", &num);
        if(num > 0) {
            contador++;
        }
    }

    printf("%d valores positivos\n", contador);
    
    return 0;
}