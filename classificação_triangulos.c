#include <stdio.h>
int main() {
    
    int a, b, c;
    
    scanf("%d%d%d", &a, &b, &c);
    
    if(a + b > c && a + c > b && b + c > a){
    
        if(a == b && a == c)
            printf("O triangulo e equilatero");
        else
            if(a == b || a == c || b == c)
                printf("O triangulo e isoceles");
            else
                printf("O triangulo e escaleno");
    }
    else
        printf("Nao e possivel formar um triangulo");
}
