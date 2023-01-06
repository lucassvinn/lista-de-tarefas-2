#include <stdio.h>

int main()
{
    int horai;
    int horaf;
    
    int tempo;
    
    printf("Informe que horas irá iniciar: ");
    scanf("%d", &horai);
    
    printf("Informe que horas acabou: ");
    scanf("%d", &horaf);
    
    tempo = horaf - horai;
    
    if (tempo < 24)
        printf("O tempo de duração da partida foi de: %d horas!", tempo);
    else {
        if (tempo > 24)
            printf("O tempo de jogo está incorreto!");
    }

    return 0;
}
