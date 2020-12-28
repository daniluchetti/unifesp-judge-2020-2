#include <stdio.h>

int main()
{
    float p1;
    float p2;
    float p3;
    float p4;
    float p5;
    
    
    scanf("%f", &p1);
    scanf("%f", &p2);
    scanf("%f", &p3);
    scanf("%f", &p4);
    scanf("%f", &p5);
    
    float media = (p1 + p2 + p3 + p4 + p5) / 5 ;
    
    printf("p1= %.1f", &p1);
    printf(" p2= %.1f", &p2);
    printf(" p3= %.1f", &p3);
    printf(" p4= %.1f", &p4);
    printf(" p5= %.1f", &p5);
    printf(" media= %.1f", &media);
    return 0;
}
