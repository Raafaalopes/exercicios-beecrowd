// Você deve fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos seguintes intervalos
// ([0,25], (25,50], (50,75], (75,100]) este valor se encontra. 
//Obviamente se o valor não estiver em nenhum destes intervalos,  deverá ser impressa a mensagem “Fora de intervalo”.

#include <stdio.h>

int main(){
    double numero;
    scanf("%lf", &numero);

    if (numero >=0 && numero <=25){
        printf("Intervalo [0,25]\n");
    } else if (numero > 25 && numero <=50){
        printf("Intervalo (25,50]\n");
    } else if (numero > 50 && numero <=75) {
        printf("Intervalo (50,75]\n");
    } else if (numero > 75 && numero <= 100){
        printf("Intervalo (75,100]\n");
    } else {
        printf("Fora de intervalo\n");
    }

    return 0;
}