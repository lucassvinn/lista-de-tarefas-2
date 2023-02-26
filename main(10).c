#include <stdio.h>
    // Fazer um programa que leia somente numeros naturais!
int main()
{
    int value;
    
    printf("Digite um numero natural: ");
    scanf("%d", &value);
    
    if (value < 0)
        printf("Só aceito numeros naturais!");
    else if (value >= 0)
        printf("Seu numero natural: %d", x);
    
    return 0;
}
