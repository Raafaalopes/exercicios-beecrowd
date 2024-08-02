#include <stdio.h>

int main(){
    int num, contador;

    for(int i = 1; i <= 5; i++) {
        scanf("%d", &num);
        if(num % 2 == 0) {
            contador++;
        }
    }
    printf("%d valores pares\n", contador);
    
    return 0;
}