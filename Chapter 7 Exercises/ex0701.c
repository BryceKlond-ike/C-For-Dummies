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

/* Exercise 7-13. First, and last name, get intput via scanf(), display output, first+last.
                // Bruno saw this code. cool moment. 08/24/2025
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
*/

/* Exercise 7-14, Listing 7-6. scanf() eats an integer. Build, run, test. 

int main() {

    int fav;
    
    printf("What is your favorite number? \n");
    scanf("%d", &fav); // need & (address-of operator) with any variable (array execption) and scanf().
    
    printf("%d is my favorite number, too! \n", fav);
    return(0);

    // works as intended with integers, duh, floats lose their tails, any other character returns 32758. 
}
*/

/* Exercise 7-15, Modify L7-6 to use floating point numbers, mind conversion. 
int main() {

    float fav;
    
    printf("What is your favorite number? \n");
    scanf("%f", &fav); // need & (address-of operator) with any variable (array execption) and scanf().
    
    printf("%f is my favorite number, too! \n", fav);
    return(0);
    // w/o limitations, returns in 8-digit format. Works though.
}
*/

/* Listing 7-7, Exercise 7-16 introducing fgets(string,size,stdin).

int main () {

    char name[15]; // name = string 

    printf("What do they call you? \n");
    fgets(name, 15, stdin);

    printf("The bell rings for you, %s Muah haha haah \n", name); // almost halloween. 
    return(0);
    // seems to read white space as spaces, so can shift formatting if not spot one to what its expecting. 

}
*/

/* Exercise 7-17. Change array size to a const value. Set const to only allow three characters input. 
// added my own spin from modern memery ;)
int main() {

    char name[3]; // doesn't accept variables lmao;

    printf("\"What's ya name?\", The man across the street yells out to you. \n");
    
    fgets(name, 3, stdin);
    printf("\"%s\", you yell back, unsure and slightly perturbed.\n", name);
    getchar();

    printf("What? \n");
    getchar();

    printf("He doesn't to hear your last attempt to communicate outside his pizza shop, over the busy NYC traffic.\n");
    getchar();

    printf("Aww well, to #$!@ with you anyways, %s.", name);
    getchar();
    return(0);

    // fgets size limitation is always -1. I wonder how to format the white space though?
}
*/

// Exercise 7-18, redo 7-13 with fgets() instead of scanf() to read in the two strings. 
/*
int main() {

    char firstName[15], lastName[15];

    printf("Howdy partner, please enter your first name: \n");
    fgets(firstName, 15, stdin);
    

    printf("Now, please enter your last name: \n");
    fgets(lastName, 15, stdin);
    

    printf("Thank you! Good to meet you %s %s \n", firstName, lastName);
    getchar();
    return(0);
    // Works as intended, though whitespace formatting is annoying with fgets()
}
*/

// Carry on in chapter 8!