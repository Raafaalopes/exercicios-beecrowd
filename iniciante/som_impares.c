#include <stdio.h>

int main(){
    int X, Y, soma = 0, i;
    scanf("%d%d", &X, &Y);

    if(X > Y) {
        int aux;
        aux = X;
        X = Y;
        Y = aux;
    } else if(X == Y){
        printf("%d\n", soma);
        return 0;
    }

    if(X % 2 == 0) {
        i = X + 1;
    } else {
        i = X + 2;
    }

    for(i; i < Y; i += 2){
        soma += i;
    }

    printf("%d\n", soma);

    return 0;
}