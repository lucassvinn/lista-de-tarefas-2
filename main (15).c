#include <stdio.h>

int main()
{
    int maca, total;
    float preco;

    
    printf("Deseja comprar quantas maçãs? Digite: ");
    scanf("%d", &maca);
    
    preco = maca * 1.30;
    total = maca * 1;
    
    
    printf("O preço total das maças vai ser de: %f", preco);
    
    if (maca == 12)
        printf("Você irá pagar: %d", total);

    return 0;
}
