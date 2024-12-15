#include <stdio.h>

int main(){
    int N, X, in = 0, out = 0;
    scanf("%d", &N);
    int V[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &X);
        V[i] = X;
    }

    for(int i = 0;i < N; i++){
        if(V[i] >= 10 && V[i] <= 20){
            in += 1;
        } else {
            out += 1;
        }
    }
    printf("%d in\n%d out\n", in, out);

    return 0;

}