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

/* Exercise 8-15, Modify 8-7 source code to use logical OR operator. 
int main(){

    
    int coordinate;

    printf("Input target coordinate: \n");
    scanf("%d", &coordinate);

    if(coordinate < -5 || coordinate > 5) { // either less than or equal to -5, or greater than or equal to 5
            puts("Close enough! \n");
            
    }
    else {
        puts("Sorry, target is out of range!");
    }
    return(0);
    // Tricky. Got it though. 

}
*/

/* Exercise 8-16. Create Do you want to continue?" program. process single character input, tesing for Y\N, and responding when neither are input. 

int main() {

    char response; //iniialize response variable. 
   
    printf("Do you want to Continue? \n Y/N\n");
    scanf("%c", &response);  //Single Character input, check!


    // cannot use logical operators to compare strings, which are character arrays. 
    
    if(response == 'Y' || response == 'y') {
        puts("Continuing, one second...");
    }
    else if(response == 'N' || response == 'n') {       
        puts("Self-Destru... I mean, adios.");    
    }
    else {
        printf("That is neither option, friend.\n");
    }
    return(0);

    // Kept using double quotes on y/Y and n/N, kept getting a bug. had to look up actually, but learned important lesson. 
}
*/

/* Exercise 8-17. Intro to switch-case, Listing 8-8 Source Code. 

int main() {

    int code;

    printf("Enter the error code (1-3): ");
    scanf("%d", &code);

    switch(code) {

        case 1:
            puts("Drive Fault, not your fault.");
            break;
        case 2:
            puts("Illegal format, please call a lawyer");
            break;
        case 3:
            puts("Bad filename, spank it!");
            break;
        default:
            puts("Thats not 1, 2, or 3!");
    }
    return(0);
}
*/

/* Exercise 8-18, modifying 8-17 to take char input
int main() {

    char code;

    printf("Enter the error code (a, b, c): ");
    scanf("%c", &code);

    switch(code) {

        case 'A':
            puts("Drive Fault, not your fault.");
            break;
        case 'B':
            puts("Illegal format, please call a lawyer");
            break;
        case 'C':
            puts("Bad filename, spank it!");
            break;
        case 'a':                                                   // Added funtionality that checks for Upper/Lower case;
            puts("Drive Fault, not your fault.");
            break;
        case 'b':
            puts("Illegal format, please call a lawyer");
            break;
        case 'c':
            puts("Bad filename, spank it!");
            break;
        default:
            puts("Thats not A, B, or C!");
    }
    return(0);
}
*/

/* Listing 8-9, exercise 8-19, type it in, build and run. Running a switch-case with no breaks;

int main() {

    char choice; 

    puts("Meal Plans: \n");
    puts("A - Breakfast, Lunch and Dinner");
    puts("B - Lunch and dinner only");
    puts("C - Dinner Only");
    printf("Your choice: ");
    scanf("%c", &choice);

    printf("You've opted for ");
    switch(choice) {

        case 'A':
            printf("breakfast, lunch and dinner ");
            break;
        case 'B':
            printf("lunch and dinner only ");
            break;
        case 'C':
            printf("dinner only ");
            break;
        default :
            printf("nothing ");
            break;
    }
    printf("as your meal plan.");

    return(0);
    // When written, cascades through the cases. 
}
*/

/* Exercise 8-20, Adding lowercase functionaliy

int main() {

    char choice; 

    puts("Meal Plans: \n");
    puts("A - Breakfast, Lunch and Dinner");
    puts("B - Lunch and dinner only");
    puts("C - Dinner Only");
    printf("Your choice: ");
    scanf("%c", &choice);

    printf("You've opted for ");
    switch(choice) {

        case 'A':
            printf("breakfast, lunch and dinner ");
            break;
        case 'B':
            printf("lunch and dinner only ");
            break;
        case 'C':
            printf("dinner only ");
            break;
        case 'a':
            printf("breakfast, lunch and dinner ");
            break;
        case 'b':
            printf("lunch and dinner only ");
            break;
        case 'c':
            printf("dinner only ");
            break;
        default :
            printf("nothing ");
            break;
    }
    printf("as your meal plan.");

    return(0);
    // When written, cascades through the cases. 
}
*/

/* Listing 8-10, Exercise 8-21 introducing ternary operator ?:

int main() {

    int a,b,larger;

    printf("Enter value a: ");
    scanf("%d", &a);

    printf("Enter value b: ");
    scanf("%d", &b);

    larger = (a > b) ? a : b; // result = expression ? if_true , if_false

    printf("Value %d is larger.", larger);
    return(0);
}
*/

/*Exercise 8-22, replace ternary operation with if-else function,

int main() {

    int a,b,larger;

    printf("Enter value a: ");
    scanf("%d", &a);

    printf("Enter value b: ");
    scanf("%d", &b);

    if(a > b) {
        larger = a; 
    } 
    else {
        larger = b;
    }
    

    printf("Value %d is larger.", larger);
    return(0);

    // Nailed it on the first try!
}
*/