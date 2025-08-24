#include <stdio.h>

int main(){

    // Listing 6-3, Exercise 6-6
    // unsigned int ono;
    long int ono;

    ono = -10;
    printf("The value of ono is %ld. \n", ono);
    return(0);
    
    /*Should not use unsigned if int variable can hold negative numbers. When in doubt use long.*/
}