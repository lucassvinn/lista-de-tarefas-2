#include <stdio.h>

int main()
{
    char consumidor;
    int consumo;
    
    int calccr;
    int calcci;
    int calccc;
    
    printf("Informe seu tipo de consumidor: ");
    scanf("%c", &consumidor);
    
    printf("Informe seu consumo de água: ");
    scanf("%d", &consumo);
    
    calccr = (5 * 0.05) + consumo;
    calcci = (800 * 0.04) + consumo;
    calccc = (500 * 0.03) + consumo;

    switch (consumidor) {
        case 'r':
            printf("Residencial: %d", calccr);
            break;
        case 'i':
            if (consumo <= 100) 
                printf("Industrial: %d", calcci);
            break;
        case 'c':
            if (consumo <= 80) 
                printf("Industrial: %d", calccc);
            break;
        default:
            printf("Valor informado incorretamente!");
    }
    
    return 0;
}
