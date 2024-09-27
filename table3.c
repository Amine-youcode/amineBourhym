#include <stdio.h>

int main() {
    int a;
    int T[5];
    int s;
    
    printf("entre nombre la taile \n");
    
    
    for (a=0;a<5;a++){
        T[5]=0;
        printf("T[%i]= ",a);
        scanf("%i",&T[a]);
       s=0; 
    }
    for (a=0;a<5;a++){
        
        s=s+T[a];
        
        
    }
    printf("la somme: %i \n",s);




return 0;
}