// Online C compiler to run C program online

#include <stdio.h>

int main() {
    int a;
    int T[5];
    int min;
    
    printf("entre valeur \n");
    
    
    for (a=0;a<5;a++){
        T[5]=0;
        printf("T[%i]= ",a);
        scanf("%i",&T[a]);
      
    }
     min=T[0]; 
    for (a=0;a<5;a++){
        
        
        if (min>T[a]){
            min=T[a];
        }
        
        
    }
    printf("le minimal valeur: %i \n",min);




return 0;
}