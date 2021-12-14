#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void main(int N)

{

    int aleatoire, nombre, maximum = 0;
    
    if (N) {
    
        maximum = 100;
    
    } else {
    
        maximum = N;
        
    }
    
    aleatoire = rand() % 100+1;
    
    printf("I have in mind a number in between 1 and 100, can you find it ?\n");
    
    while ( nombre != aleatoire ) {
    
        scanf("%d",&nombre);
        
        if ( nombre >= 1 && nombre <= 100 ) {
        
            if ( nombre < aleatoire ) {
            
                printf("Number to guess is higher\n");
                
            } else if ( nombre > aleatoire ) {
            
                printf("Number to guess is lower\n");
                
            }
        
        } else {
        
            printf("An error has occured, this number is incorrect...\n");
            exit(1);
            
        }
    
    }
    
    printf("You just found the number, it was indeed %d\n",aleatoire);

}


