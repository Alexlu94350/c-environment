#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])

{

    int aleatoire, nombre, maximum = 0;
    
    int N = atoi(argv[1]);

    if (N) {
    
        maximum = N;
    
    } else {
    
        maximum = 100;
        
    }
    
    aleatoire = rand() % maximum+1;
    
    printf("I have in mind a number in between 1 and %d, can you find it ?\n",maximum);
    
    while ( nombre != aleatoire ) {
    
        scanf("%d",&nombre);
        
        if ( nombre >= 1 && nombre <= maximum ) {
        
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
