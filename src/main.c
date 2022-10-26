#include <stdio.h>
#include "espl_lib.h"

int main()
{
    int number;
    int exit = 0;
    
    while(exit == 0) {
        
        printf("Please enter a number between 0 and 9: ");
        scanf("%d", &number);
        printf("You entered the number %s. \n", num_to_words(number));
        
    
        printf("Type 0 if you want to continue this program: ");
        scanf("%d", &exit);
    }
    
    return 0;
}