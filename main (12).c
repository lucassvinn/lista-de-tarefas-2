#include <stdio.h>

int main()
{
    int valor;
    
    printf("Informe um valor: ");
    scanf("%d", &valor);
    
    if (valor >= 1)
        printf("Positivo!");
    else {
        if (valor < 0)
            printf("Negativo!");
        else {
            if (valor == 0)
                printf("Zero!");
        }
    }
    
    return 0;
}
