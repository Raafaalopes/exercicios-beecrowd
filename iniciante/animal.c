#include <stdio.h>
#include <string.h>

int main(){
    char filo[15], classe[15], ordem[15], animal[15];
    scanf("%s %s %s", filo, classe, ordem);


// strcmp para comparar strings e strcpy para atribuir à string
    if(strcmp(filo, "vertebrado") == 0) {
        if(strcmp(classe, "ave") == 0) {
            if(strcmp(ordem, "carnivoro") == 0) {
                strcpy(animal, "aguia");
            }else if(strcmp(ordem, "onivoro") == 0) {
                strcpy(animal, "pomba");
            }
        }else if(strcmp(classe, "mamifero") == 0) {
            if(strcmp(ordem, "onivoro") == 0){
                strcpy(animal, "homem");
            }else if(strcmp(ordem, "herbivoro") == 0){
                strcpy(animal, "vaca");
            }
        }
    } else if(strcmp(filo, "invertebrado") == 0){
        if(strcmp(classe, "inseto") == 0) {
            if(strcmp(ordem, "hematofago") == 0) {
                strcpy(animal, "pulga");
            }else if(strcmp(ordem, "herbivoro") == 0) {
                strcpy(animal, "lagarta");
            }
        }else if(strcmp(classe, "anelideo") == 0) {
            if(strcmp(ordem, "hematofago") == 0){
                strcpy(animal, "sanguessuga");
            }else if(strcmp(ordem, "onivoro") == 0){
                strcpy(animal, "minhoca");
            }
        }
    }

    printf("%s\n", animal);

    return 0;

}