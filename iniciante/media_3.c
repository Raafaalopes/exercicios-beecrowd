//basicamente calcula a media de 4 notas(pesos: 2, 3, 4, 1)
// maior q 7 aprovado, menor que 5 reprovado, entre 5 e 6.9 exame
// caso tenha ficado de exame pegar a nota tirada no exame e recalcular a media
// maior igual que 5 aprovado, menor que 4.9 ou menos
//mostrar a media final de qualquer forma

#include <stdio.h>

int main() {
    double N1, N2, N3, N4, media, Nex;
    scanf("%lf%lf%lf%lf", &N1, &N2, &N3, &N4);

    media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10.0;
    printf("Media: %.1lf\n", media);

    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if(media < 5.0){
        printf("Aluno reprovado.\n");
    } else if(media >= 5.0 && media <=6.9){
        printf("Aluno em exame.\n");
        scanf("%lf", &Nex);
        printf("Nota do exame: %.1lf\n", Nex);
        media = (media + Nex) / 2;
        if (media >= 5.0) {
            printf("Aluno aprovado.\n");
        } else if (media <= 4.9) {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", media);
    }

}