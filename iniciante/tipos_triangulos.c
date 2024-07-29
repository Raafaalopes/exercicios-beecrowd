// se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
// se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
// se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
// se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
// se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
// se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
// A variavel A tem que ser o maior valor dos 3

#include <stdio.h>
#include <math.h>

int main(){
    double A, B, C, aux;
    scanf("%lf%lf%lf", &A, &B, &C);

    if (B > A) {
        if (B > C) {
            aux = B;
            B = A;
            A = aux;
        } else {
            aux = C;
            C = A;
            A = aux;
        }
    } else if (C > A) {
        if (C > B) {
            aux = C;
            C = A;
            A = aux;
        } else {
            aux = B;
            B = A;
            A = aux;
        }
    }

    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (pow(A, 2) == pow(B, 2) + pow(C, 2)){
            printf("TRIANGULO RETANGULO\n");
        }
        if (pow(A, 2) > pow(B, 2) + pow(C, 2)){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (pow(A, 2) < pow(B, 2) + pow(C, 2)){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (A == B && B == C) {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((A == B && B != C) || (A == C && C != B) || (B == C && C != A)) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}