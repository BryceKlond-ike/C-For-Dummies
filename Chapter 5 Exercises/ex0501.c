#include <stdio.h>

int main()
{
    /*
        printf("The value %d is an integer. \n", 986); // Introduces %d; conversion charachter for integer
        printf("The value %f is a float. \n", 986.0005); // Introduces %f; conversion charachter for float
        return(0);
    */

    // Exercise 5-2 dispalying values
    /*
        printf("%d is an integer \n", 127);
        printf("%f is a float, and also Pi. \n", 3.1415926535);
        printf("%d is another integer. \n", 122013);
        printf("%f is another really small float. \n", 0.00008);
        return(0);
    */

    // Exercise 5-3 Formating numbers with conversion numbers
    /*
        printf("The value of pi is %2.1f \n", 3.1415926535);
        printf("This value is another example of conversion characters, with arguments, %1.1f \n",0.000008);
        return(0);
    */

    //Listing 5-2 source code; Exercise 5-4; Basic math operators
    /*
    puts("Values of 8 and 2: ");
    printf("Addition is %d \n", 8+2);
    printf("Subtraction is %d \n", 8-2);
    printf("Multiplication is %d \n", 8*2);
    printf("Division is %d \n", 8/2);
    return(0);
    */

    // Exercise 5-5; creating a program that adds 456.98 + 213.4, print result.
    /*
    printf("456.98 + 213.4 =\n %3.2f",456.98+213.4); // kept writing arg as 0.00 instead of 3.2 in %f
    return(0)
    */

    //Exercise 5-6; Create program displaying result of *'ing 8, 14, 25.
    /*
    printf("8 multiplied by 14 and 25 =\n %d", 8*14*25);
    return(0);
    */

    //Exerciise 5-7; answering a facebook; 
    /*
    printf("Solve this facebook riddle: \n");
    printf("0 + 50 * 1 - 60 - 60 * 0 + 10\n");
    printf("The solution is: %d", 0+50*1-60-60*0+10); // PEMDAS?
    return(0);

     
       50*1 = 50
       60*0 = 0
       50+0 = 50
       50-60 = -10
       -10 + 10 = 0
    */
   
    // Exercise 5-8; listing 5-3 source code
    /*
    printf("The total is %d\n", 16+17);
    return(0);
    */

    // Exercise 5-9; modifying one value to a float
    /* ran as intended, we need a float conversion though.
    printf("The total is %f\n", 16.0+17);
    return(0);
    */

    // Exercise 5-10; Rewrite 5-3 src code and change all to floats; single digit after decimal
    /* runs as intended.
    printf("The total is %.1f\n", 16.0+17.0);
    return(0);
    */

    // Exercise 5-11; src code listing 5-4; save, build, run.
    /* ran as intended; returned result 0;
    printf("%d/%d = %d\n",2,5,2/5);
    return(0);
    */

    // Exercise 5-12; change the %d from 5-4 to floats.
    /*
    printf("%.0f/%.0f=%.1f", 2.0,5.0,2.0/5.0);
    return(0);
    */

    // Code also works for 5-13. Catch me in chapter 6!
}