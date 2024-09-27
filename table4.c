// Online C compiler to run C program online

#include <stdio.h>

int main() {
    int a;
    int T[5];
    int max;
    
    printf("entre valeur \n");
    
    
    for (a=0;a<5;a++){
        T[5]=0;
        printf("T[%i]= ",a);
        scanf("%i",&T[a]);
      
    }
     max=T[0]; 
    for (a=0;a<5;a++){
        
        
        if (max<T[a]){
            max=T[a];
        }
        
        
    }
    printf("le maximal valeur: %i \n",max);




return 0;
}