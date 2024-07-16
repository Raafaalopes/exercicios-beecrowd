//pega o tempo em segundos e divide em horas:minutos:segundos

#include <stdio.h>

int main(){
    int horas, minutos, segundos, tempo;

    scanf("%d", &tempo);
    horas = tempo / 3600;
    tempo -= horas * 3600;

    minutos = tempo / 60;
    tempo -= minutos * 60;

    segundos = tempo;

    printf("%d:%d:%d\n", horas, minutos, segundos);
    
    return 0;
}