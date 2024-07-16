//retorna o maior de tres numeros
#include <stdio.h>

int main(){
    int a, b, c, maiorAB, maior3;
    scanf("%d%d%d", &a, &b, &c);
    maiorAB = (a + b + abs(a-b)) / 2;
    if (maiorAB >= c) {
        printf("%d eh o maior\n", maiorAB);
    } else{
        printf("%d eh o maior\n", c);
    }

    return 0;
}