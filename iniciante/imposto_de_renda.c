#include <stdio.h>

int main(){
    double renda, valor_total;
    scanf("%lf",&renda);

    if(renda >= 0.00 && renda <= 2000.00){
        printf("Isento\n");
    } else if(renda > 2000.00 && renda <= 3000.00){
        renda -= 2000.00;
        valor_total = renda * 0.08;
        printf("R$ %.2lf\n", valor_total);
    } else if(renda > 3000.00 && renda <= 4500.00){
        renda -= 3000;
        valor_total = 80 + (renda * 0.18);
        printf("R$ %.2lf\n", valor_total);
    } else if(renda > 4500.00){
        renda -= 4500;
        valor_total = 80 + 270 + (renda * 0.28);
        printf("R$ %.2lf\n", valor_total);
    }
        
    return 0;
}