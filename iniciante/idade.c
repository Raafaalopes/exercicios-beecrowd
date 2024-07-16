//pega a idade em dias e separa em anos meses e dias

//      REFAZER DEPOIS


#include <stdio.h>

int main(){
    int idade, anos, meses, dias;
    scanf("%d", &idade);

    anos = idade / 365;
    idade -= anos * 365;

    meses = idade / 30;
    idade -= meses * 30;

    dias = idade;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);

    return 0;
}