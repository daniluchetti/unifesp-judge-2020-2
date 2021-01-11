#include <stdio.h>

int main()
{
    int d1, m1, a1;
    int d2, m2, a2;
    scanf("%d/%d/%d ", &d1, &m1, &a1);
    scanf("%d/%d/%d", &d2, &m2, &a2);
    
    if(a1>a2) {
        printf("A segunda data ocorreu antes da primeira.");
        
    } 
        else if(a1==a2 && m1>m2) {
            printf("A primeira data ocorreu antes da segunda");
        
    }
        else if(a1==a2 && m1==m2 && d1>d2) {
            printf("A segunda data ocorreu antes da primeira.");
        
    }
        else {
            printf("A primeira data ocorreu antes da segunda");
        }
return 0;
}
