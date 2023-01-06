#include <stdio.h>

int main()
{
    int salario;
    int desconto;
    int desconto1;
    
    printf("Informe seu salário: ");
    scanf("%d", &salario);
    
    desconto = salario - (salario * 11 / 100);
    desconto1 = salario - (salario * 5 / 100);
    
    
    if (salario <= 1200)
        printf("Seu salário com desconto aplicado é de: %d", desconto);
    else {
        if (salario >= 1200)
            printf("Seu salário com desconto aplicado é de: %d", desconto1);
    }
    
        
    
    return 0;
}
