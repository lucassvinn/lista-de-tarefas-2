#include <stdio.h>
    // Fazer um programa que leia somente numeros negativos!
int function(int x)
{
    if (x >= 0)
        printf("Só aceito numeros negativos!");
    else if (x < 0)
        printf("Seu numero negativo: %d", x);
}

int main()
{
    int numberN, redirect;
    
    printf("Digite um numero negativo: ");
    scanf("%d", &numberN);
    
    redirect = function(numberN);
    return 0;
}
