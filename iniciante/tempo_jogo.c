//calcular a duracao do jogo tendo a hora que começou e a hora que terminou
//o jogo pode durar 24 horas

#include <stdio.h>

int main(){
    int inicio, fim, duracao;

    scanf("%d%d", &inicio, &fim);

    if (inicio < fim) {
        duracao = fim - inicio;
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    } else if (inicio > fim) {
        duracao = 24 - inicio + fim;
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    } else {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }

    return 0;
}