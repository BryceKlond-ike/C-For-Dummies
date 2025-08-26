#include <stdio.h>


/* Exercise 8-1, Listing 8-1 Source code. A simple comparison, introducing if() statements.

int main() {

    int a, b;

    a = 6;
    b = a - 2;

    if(a > b) {

        printf("%d is greater than %d\n", a,b);
    }
    return(0);
    
}
*/

/* Exercise 8-2, changing from subtraction to addition to see the outcome

int main() {

    int a,b;

    a = 6;

    b = a + 2; // changed to addition.

    if(a>b)
       // { Exercise 8-3, removing the brackets. 
            printf("%d is greater than %d.\n", a,b);
       // }
    return(0);
}
*/

/* Listing 8-2, Exercise 8-4. Build and run. 

int main() {

    int first, second;

    printf("Input first value: \n");
    scanf("%d", &first);

    printf("Input the second value: \n");
    scanf("%d", &second);

    puts("Evaluating...");

    if(first<second)
    {
        printf("%d is less than %d\n", first, second);
    }
    if(first>second)
    {
        printf("%d is greater than %d\n", first, second);
    }
    return(0);
}
*/

/* Exercise 8-5, Modify if() to use an == statement. 

int main(){

    int first, second;

    printf("Input first value: \n");
    scanf("%d", &first);

    printf("Input the second value: \n");
    scanf("%d", &second);

    puts("Evaluating...");

    if(first<second)
    {
        printf("%d is less than %d\n", first, second);
    }
    if(first>second)
    {
        printf("%d is greater than %d\n", first, second);
    }
    if(first==second) // addition of ==
    {
        printf("These two values are the same!");
    }
    return(0);
    // Works as Intended!
}
*/

/* Exercise 8-6, Listing 8-3, buid and run. 

int main() {

    const int secret = 17;
    int guess;

    printf("I'm thinking of a number, can you guess what it is? ");
    scanf("%d", &guess);

    if(guess==secret)
    {
        printf("You got it!");
        return(0);
    }
    if(guess!=secret)
    {
        printf("Sorry, thats just not right.");
        return(1);
    }

}
*/

/* exercise 8-10, Listing 8-6. Cue in If-else statement

int main() {

    int a,b;

    a = 6;
    b = a - 2;

    if(a>b) {

        printf("%d is greater than %d\n", a,b);
    }
    else {

            printf("%d is not greater than %d\n", a,b);
    }
    return(0);

}
*/

/* Exercise 8-11, Modify L8-6 to have user input b value. 

int main() {

    int a,b;

    a = 6;

    printf("We have two variables, A has a value, but we need a value for b, what will it be?\n");
    scanf("%d", &b);

    printf("Thank you, one moment please...\n");
    getchar();

    if(a>b) {

        printf("I have evaluated that a, %d, is in fact, greater than b, %d.", a,b);
    }
    else {

        printf("I have evaluated that a, %d, is in fact, not greater than b, %d.", a,b);
    }
    return(0);

}
*/

/* Exercise 8-12 modify source code 8-3 to use if-else statment. 

int main() {

    const int secret = 17;
    int guess;

    printf("I'm thinking of a number, can you guess what it is? ");
    scanf("%d", &guess);

    if(guess==secret)
    {
        printf("You got it!");
        return(0);
    }
    else
    {
        printf("Sorry, thats just not right.");
        return(1);
    }

}
*/

/* Using 8-2 source code, write an if-if-else-else statement w/ 3 conditions. 

int main() {

    int first, second;

    printf("Input first value: \n");
    scanf("%d", &first);

    printf("Input the second value: \n");
    scanf("%d", &second);

    puts("Evaluating...");

    if(first<second)
    {
        printf("%d is less than %d\n", first, second);
    }
    else if(first>second)
    {
        printf("%d is greater than %d\n", first, second);
    }
    else if(first==second) {

        printf("%d is equal to %d\n", first,second); // forgot the variables on first build, kept getting -4. 
    }
    else {
        printf("Howd we get here, son? \n");
    }

    return(0);
    // Works as intended.
}
*/

/* Exercise 8-14, Listing 8-7 Introducing Logic comparison operators.

int main() {

    int coordinate;

    printf("Input target coordinate: \n");
    scanf("%d", &coordinate);

    if(coordinate >= -5 && coordinate <= 5) {
            puts("Close enough! \n");
            getchar(); 
    }
    else {
        puts("Sorry, target is out of range!");
    }
    return(0);
    // works as intended
}
*/

