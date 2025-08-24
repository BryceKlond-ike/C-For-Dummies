#include <stdio.h>

int main()
{
    // Example 04.01-04.03
/*    puts("Hickory, dickory, dock"); //puts() 1; first line of text
    puts("The mouse ran up the clock"); // puts() 2; Second line of text
    return(0);
*/

    // Exercise 04.04 complete the nursery rhyme; Change 4th line of input to rhyme

/*
    puts("Hickory, dickory, dock");
    puts("The mouse ran up the clock");
    puts("The clock struck one,");
    puts("The mouse had fun"); // ORIGINAL: "The Mouse ran down"
    puts("Hickory, dickory, dock");
    // puts() streams a string per line, new puts() = new line
*/ 

/*
// 4-12; exchanging puts() for printf()
    printf("Hickory, dickory, dock The Mouse ran up the clock The clock struck one, The mouse had fun Hickory, dickory, dock");
    return(0);
*/

// 4-13; using new line "\n" with printf()

    printf("Hickory, Dickory, Dock \n");
    printf("The Mouse ran up the clock \n");
    printf("The clock struck one, \n");
    printf("The Mouse had fun, \n");
    printf("Hickory, Dickory, Dock \n");
    return(0); 
}

