

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, i, aux;
    scanf("%d%d%d", &a, &b, &c);
    int vet_orig[3] = {a, b, c};
    int vet[3] = {a, b, c};
    
    for(int j = 0; j < 3; j++){
        for(i = 0; i < 2; i++){
            if(vet[i] > vet[i + 1]){
                aux = vet[i + 1];
                vet[i + 1] = vet[i];
                vet[i] = aux;
            }
        }
    }
    printf("%d\n%d\n%d\n", vet[0], vet[1], vet[2]);
    printf("\n%d\n%d\n%d\n", vet_orig[0], vet_orig[1], vet_orig[2]);

}