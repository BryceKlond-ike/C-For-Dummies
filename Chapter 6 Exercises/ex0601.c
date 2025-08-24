#include <stdio.h>

int main(){
    // Listing 6-1, 'First Variable' Exercise 1,
    /*
    int x;

    x = 5;
    printf("The value of variable x is %d.\n", x);
    return(0);
    */

    // Listing 6-2, Working with Variables, Exercise 2,
    /*
    char c;
    int i;
    float f;
    double d;

    c = 'a';
    i = 1;
    f = 19.0;
    d = 20000.009;

    printf("Variable c = %c\n", c);
    printf("Variable i = %d\n", i);
    printf("Variable f = %f\n", f);
    printf("Variable d = %f\n", d);
    return(0);
    */

    // Exercise 3, listing 6-2. single line print
    /*
    char c;
    int i;
    float f;
    double d;

    c = 'a';
    i = 1;
    f = 19.0;
    d = 20000.009;
    
    printf("In the following order are variables c, i, f, and d.\n %c\n %d\n %.1f\n %f\n", c, i, f, d);
    return(0);
    */

    // exercise 4, L6-2 Updating float f to 19.8
    /*
    char c;
    int i;
    float f;
    double d;

    c = 'a';
    i = 1;
    f = 19.8;
    d = 20000.009;

    printf("In the following order are variables c, i, f, and d.\n %c\n %d\n %.1f\n %f\n", c, i, f, d);
    return(0);
    */

    // Exercise 6-5 Write source code that declares an integer named blorf with value of 22
    // Use printf() to display variables value,
    // Use printf() to display blorf + 16
    // Use printf() to display blorf times itself. 

    /*
    int blorf;

    blorf = 22;

    printf("The value of blorf is %d\n", blorf);
    printf("blorf with 16 added to it is %d\n", blorf + 16);
    printf("blorf times itself is %d\n", blorf * blorf);
    return(0);
    */

    //Exercise 6-7, Create a program using 3 variables, Assign integer values to each one, display the result.
    /*
    int secCodeGarage;
    int secCodeBack;
    int secCodeFront;

    secCodeGarage = 1938;
    secCodeBack = 1938;
    secCodeFront = 5678;

    printf("The security code for the Garage is %d, the code for the back door is %d, and for the front door, it is %d", \
    secCodeGarage, secCodeBack, secCodeFront);
    return(0);
    */

    // Listing 6-5, Exercise 6-8. Assigning a value upon creation.
    /*
    int start = 0;
    
    printf("The starting value is %d. \n", start);
    return(0);
    */

    // Exercise 6-9 Modify source code for 6-7 to do same line specification and assingment.
    /*
    int secCodeGarage = 1938;
    int secCodeBack = 1938;
    int secCodeFront = 5678;

    printf("The security code for the Garage is %d, the code for the back door is %d, and for the front door, it is %d", \
    secCodeGarage, secCodeBack, secCodeFront);
    return(0);
    */

    // Exercise 6-10, Recylcing variables.
    /*
    int secCode;

    secCode = 1938;
    printf("The code for the garage is %d. \n", secCode);
    secCode = 1929;
    printf("The code for the back door is %d. \n", secCode);
    secCode = 5678;
    printf("The code for the front door is %d. \n", secCode);
    return(0);
    */

    // Exercise 6-11, listing 6-7
    /*
    int a, b, c;

    a = 12;
    b = 30;
    c = a + b;

    printf("The value of c is an addition of a and b. c is %d. \n", c);
    return(0);
    */

    // Exercise 6-12, Using 6-7 source code, declare 3 floats and assign values to two of them. 
    // the the third value is a division of the first two. Output the result. 

    /*
    float waterLevelA, waterLevelB, waterLevelC;

    waterLevelA = 12.5;
    waterLevelB = 4.9;
    waterLevelC = waterLevelA / waterLevelB;

    printf("The level for tube C is %.2f. \n", waterLevelC);
    return(0);
    */

    // Exercise 6-17. Modify source code from 6-7, so that a and b are constants. 

    /*
    // const int a, b = 12; gave value 1093496896 for a writing like this???
    const int a = 12; // fixed it!
    const int b = 8;
    int c;

    c = a + b;

    printf("The value of a is %d, the value of b is %d, and the value of c is %d.", a, b, c);
    return(0);
    */
   
}