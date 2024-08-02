#include <stdio.h>

int main(){
    int num, c_par = 0, c_imp = 0, c_pos = 0, c_neg = 0;

    for(int i = 1; i <= 5; i++) 
    {
        scanf("%d", &num);
        if(num % 2 == 0) {
            c_par++;
        } else{
            c_imp++;
        }
        if(num > 0){
            c_pos++;
        } else if(num < 0){
            c_neg++;
        }
    }
    printf("%d valor(es) par(es)\n", c_par);
    printf("%d valor(es) impar(es)\n", c_imp);
    printf("%d valor(es) positivo(s)\n", c_pos);
    printf("%d valor(es) negativo(s)\n", c_neg);

    return 0;
}