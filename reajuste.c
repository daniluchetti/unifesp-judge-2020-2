#include <stdio.h>
int main() 
{
    float salario, salarionovo;
    int percentual;
    
    scanf("%f",&salario);
    scanf("%d", &percentual);
    
   
    salarionovo=(salario+(salario*percentual/100));
    
    printf("O reajuste salarial de %d%s é: R$%.2f",percentual,"%",salarionovo);
    
return 0;
}
