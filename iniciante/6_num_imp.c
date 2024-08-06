#include <stdio.h>

int main(){
    int X, i;
    scanf("%d", &X);
    if (X % 2 == 0){
        i = X + 1;
    } else {
        i = X;
    }
    for(int j = 0; j < 6; j++){
        printf("%d\n", i);
        i += 2;
    }
    return 0;
}