// 1 cachorro quente R$ 4.00
// 2 X salada        R$ 4.50
// 3 X-bacon         R$ 5.00
// 4 torrada simples R$ 2.00
// 5 refrigerante    R$ 1.50

#include <stdio.h>

int main(){
    int codigo, quantidade;
    float total;

    scanf("%d%d", &codigo, &quantidade);

    switch (codigo)
    {
    case 1:
        total = 4.00 * quantidade;
        break;
    case 2:
        total = 4.50 * quantidade;
        break;
    case 3:
        total = 5.00 * quantidade;
        break;
    case 4:
        total = 2.00 * quantidade;
        break;
    case 5:
        total = 1.50 * quantidade;
        break;
    }

    printf("Total: R$ %.2f\n", total);
}