#include <stdio.h>
#include <math.h>

int main() {
    double n = 3.14159;
    double raio;
    scanf("%lf", &raio);
    double A = n * pow(raio, 2);

    printf("A=%.4lf\n", A);
    
    return 0;
}