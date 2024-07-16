//calcula quanto tempo um carro demora pra se distaciar aquela tal distancia do outro carro
//sabendo que ele se afasta um km a cada 2 min
#include <stdio.h>

int main(){
    int km, tempo;

    scanf("%d", &km);

    tempo = km * 2;

    printf("%d minutos\n", tempo);

    return 0;
}