#include <stdio.h>
// Fazer um programa que leia somente numeros naturais!
int main()
{
    int x;
    
    printf("Digite um numero natural: ");
    scanf("%d", &x);
    
    if (x < 0)
        printf("Só aceito numeros naturais!");
    else if (x >= 0)
        printf("Seu numero natural: %d", x);
    
    return 0;
}
