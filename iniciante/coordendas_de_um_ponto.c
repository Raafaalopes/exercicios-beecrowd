//dizer em qual quadrante esta um ponto
//++ Q1
//-+ Q2
//-- Q3
//+- Q4
// 0+- Eixo X
// +-0 Eixo Y
#include <stdio.h>

int main(){
    double x, y;

    scanf("%lf%lf", &x, &y);

    if(x > 0) {
        if(y > 0){
            printf("Q1\n");
        } else if(y < 0){
            printf("Q4\n");
        } else{
            printf("Eixo X\n");
        }
    } else if(x < 0) {
        if(y > 0){
            printf("Q2\n");
        } else if(y < 0){
            printf("Q3\n");
        } else{
            printf("Eixo X\n");
        }
    } else{
        if (y == 0) {
            printf("Origem\n");
        } else{
            printf("Eixo Y\n");
        }
    }

    return 0;
}