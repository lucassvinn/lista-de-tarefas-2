#include <stdio.h>

int main()
{
    char sexo;
    
    printf("Informe seu sexo, digite 'm' ou 'f': ");
    scanf("%c", &sexo);
    
    switch (sexo) 
    {
        case 'm':
            printf("Masculino");
            break;
        case 'f': 
            printf("Feminino");
            break;
        default:
            printf("Valor não informado ao sistema");
    }
    
    return 0;
}
