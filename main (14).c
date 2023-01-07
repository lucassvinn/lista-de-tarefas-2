#include <stdio.h>

int
main ()
{
  // Objetivo: Registro de clube (sócios)
  // Utilizei condicionais, switchs.
  
  char opcao;
  int salario, anos;

  printf("Bem-vindo ao registros de sócios do clube! Digite 's' se você for sócio e 'n' caso não for: ");
  scanf ("%c", &opcao);

  switch (opcao) {
    case 's':
      printf ("Se você é sócio, quantos anos nesse cargo? Digite: ");
      scanf ("%d", &anos);

      printf ("Digite seu salário: ");
      scanf ("%d", &salario);
      
    if ((anos <= 10) && (salario <= 3000))
        printf("Você está na categoria padrão!");
    else {
        if ((anos >= 10) && (anos <=20) && (salario >= 3000))
            printf ("Você está na categoria bronze!");
        else {
            if ((anos >= 5) && (anos <=20) && (salario >= 5000))
                printf ("Você está na categoria prata!");
            else {
                if ((anos >= 20) && (salario >= 7000))
                    printf ("Você está na categoria ouro!");
            }
        }
    }
    
    if ((anos == 0) && (salario >= 15000))
        printf("Você está na categoria diamante!");
    break;
    case 'n':
      printf ("Você quer se tornar um sócio? Informe seu salário: ");
      scanf ("%d", &salario);
      
    if (salario >= 15000) 
        printf("Pronto! Você está na categoria diamante!");
    else {
        if (salario < 15000) 
            printf("Pronto! Você está na categoria padrão!");
    }

  }
  return 0;
}
