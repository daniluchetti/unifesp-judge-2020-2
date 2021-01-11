#include <stdio.h>

int main(){

    float a,b,c;
    float r1,r2,d;
    
    scanf("%f",&a);
        scanf(" %f",&b);
            scanf(" %f",&c);

    d = (b*b) - 4*a*c;

    if(d > 0 && a > 0){
        r1 = (-b + sqrt(d))/2*a;
        r2 = (-b - sqrt(d))/2*a;
            printf("Raiz 1: %.2f Raiz 2: %.2f",r1,r2);
    }
    
    else if(a == 0){
        r1 = (-c)/b;
            printf("Raiz: %.2f",r1);
    }
    
    else if(a > 0 && d < 0){
        printf("Nao existem raizes reais");
    }
    

    return 0;
}
