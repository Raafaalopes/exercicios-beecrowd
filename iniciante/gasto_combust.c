//calcula quantos litros um carro que faz 12km/l gasta em uma viagem
//sabendo o tempo que demorou e quantos km/h ele foi
#include <stdio.h>

int main(){

    int tempo, velocidade, distancia;
    float litros;

    scanf("%d%d", &tempo, &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / 12.0;
    printf("%.3f\n", litros);

    return 0;
}