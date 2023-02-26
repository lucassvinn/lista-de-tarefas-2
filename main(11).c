#include <stdio.h>
// Fazer um programa que leia somente numeros negativos!
int main()
{
    int x;
    
    printf("Digite um numero negativo: ");
    scanf("%d", &x);
    
    if (x >= 0)
        printf("Só aceito numeros negativos!");
    else if (x < 0)
        printf("Seu numero negativo: %d", x);
    
    return 0;
}
