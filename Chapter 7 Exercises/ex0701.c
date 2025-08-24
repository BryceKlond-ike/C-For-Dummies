#include <stdio.h>

/* Exerise 7-1, intro to getchar() function
int main() {

    int c;

    printf("I'm awaiting a character: ");
    c = getchar(); // takes char from stdin
    printf("Ah, yes, %c, I have waited so long!", c);
    return(0);
    
}
*/

/* Exercise 7-2, changing %c to %d and seeing what it does.
int main() {

    int c;

    printf("I'm waiting for another character: ");
    c = getchar();
    printf("Oh boy, finally! %d is the character I've been waiting for!", c);
    return(0);

}
*/

/* Exercise 7-3, replacing getchar() with getc() in 7-1 source code.
int main() {

    int c;

    printf("I'm waiting for another character: ");
    c = getc(stdin);
    printf("Oh boy, finally! %c is the character I've been waiting for!", c);
    return(0);

}
*/

/* 7-4, Write a program that prompts for three characters, getchar() not getc();
int main() {

    char a, b, c;

    printf("I'm waiting for three characters: ");
    a = getchar(); 
    getchar(); // using to pause program
    b = getchar();
    getchar(); // Like, using enter to make program continue.
    c = getchar();
    getchar(); // after the last one, spits results.
    
    printf("Ah, yes, the three characters are '%c', '%c', '%c'. ", a, b, c);
    return(0);
}
*/

/* 7-5, Listing 7-2. Build and run.
int main() {

    int ch;
    printf("Please, press Enter: ");
    getchar();
    ch = 'H';
    putchar(ch);
    ch = 'i';
    putchar(ch);
    putchar('!');
    putchar('\n'); // Exercise 7-6, putting in a new line after message display
    // printf("Did it work?"); Used to check \n functionality
    return(0);
    // When enter is pressed, displays message "Hi!";
}
*/

/* Exercise 7-7, Listing 7-3. Build and run.

int main() {

    char a, b, c, d;

    a = 'W';
    b = a + 24;
    c = b + 8;
    d = '\n';
    // made printf() statement more readable. 
    printf("Character variables are, a - '%c', b - '%c', c - '%c'. %c", a, b, c, d);
    return(0);
    // works as intended
}
*/

/* Exercise 7-8, modify L7-3 so that values are character literals. 

int main() {

    char a, b, c, d;

    a = 'L';
    b = 'o';
    c = 'l';
    d = '\n';
    // made printf() statement more readable. 
    printf("Character variables are, a - '%c', b - '%c', c - '%c'. %c", a, b, c, d);
    return(0);

}
*/

/* Exercise 7-9, Modify L7-3 to use putchar() instead of printf();

int main() {

    char a, b, c, d;

    a = 'L';
    b = 'o';
    c = 'l';
    d = '\n';
    
    printf("Character variables are, \n");
    putchar(a);
    putchar(b);
    putchar(c);
    putchar(d);
    return(0);
// very nice, putchar() does not have any spaces, whats the space conversion character?
}
*/

/* Listing 7-4, exercise 7-10 Strings and arrays

int main() {

    char prompt[] = "Press Enter to explode: ";

    printf("%s", prompt);
    getchar();
    return(0);

}
*/

/* Exercise 7-11, creating a single string containing two lines.

int main() {

    char prompt[] = "This is a program to destroy the world \nPlease, press Enter to detonate:\n";

    printf("%s", prompt);
    getchar();
    return(0);

}
*/

/* Listing 7-5, Exercise 7-12. Using scanf();

int main() {

    char firstName[15]; // initializing char array, 14 character limit. 

    printf("Please, type your first name:\n");
    scanf("%s", firstName);
    printf("Good day, %s", firstName);
    getchar();
    return(0);

}
*/

// Exercise 7-13. First, and last name, get intput via scanf(), display output, first+last.

int main() {

    char firstName[15], lastName[15];

    printf("Howdy partner, please enter your first name: \n");
    scanf("%s", firstName);
    getchar();

    printf("Now, please enter your last name: \n");
    scanf("%s", lastName);
    getchar();

    printf("Thank you! Good to meet you %s %s \n", firstName, lastName);
    getchar();
    return(0);

}