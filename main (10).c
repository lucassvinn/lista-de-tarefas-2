#include <stdio.h>

int main()
{
    int velocidade;
    
    printf("Informe a velocidade do motorista: ");
    scanf("%d", &velocidade);
    
    if (velocidade > 80)
        printf("Você será multado! Ultrapassou a velocidade máxima: ");
    else {
        if (velocidade < 80)
            printf("Você está dentro do limite máximo!");
    }
    
    return 0;
}
