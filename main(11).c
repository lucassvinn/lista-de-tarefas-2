#include <stdio.h>
    // Fazer um programa que leia somente numeros negativos!
int main()
{
    int numberN;
    
    printf("Digite um numero negativo: ");
    scanf("%d", &numberN);
    
    if (numberN >= 0)
        printf("Só aceito numeros negativos!");
    else if (numberN < 0)
        printf("Seu numero negativo: %d", numberN);
    
    return 0;
}
