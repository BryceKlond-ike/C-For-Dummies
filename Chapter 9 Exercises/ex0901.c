#include <stdio.h>

/* Listiing 9-1, intro to for loop.
int main() {
	
	int x;
	
	for(x=0; x<10; x=x+1){
		puts("Sore shoulder surgery");
	}
	return(0);

}
*/

/* Exercise 9-2, switch 10 with 20, build and run.

int main() {
	
	int x;
	
	for(x=0; x<20; x=x+1){
		puts("Sore shoulder surgery");
	}
	return(0);
	
}
*/

/* Exercise 9-3, Listing 9-2, Build & run

int main() {

	int count;
	
	for(count=-5; count<6; count=count + 1){
		printf("%d\n", count);
	}
	return(0);
	
}
*/

/* Exercise 9-4, Display 11-19, separate by a tab, use <=, clean it up

int main() {
	
	int value;
	
	for(value = 11; value <= 19; value=value +1) {
		printf("%d\t", value);
	}
	putchar('\n');
	return(0);
}
*/

/* Exercise 9-5, Listing 9-3. Build and run;

int main() {
	
	int duo;
	
	for(duo=2; duo<=100; duo=duo+2) {
		printf("%d\t",duo); // 2 4 6 8...
	}
	putchar('\n'); // '' for characters
	return(0);
}
*/

/* Exercise 9-6, display multiples of 3, 

int main() {
	
	int myValue;
	
	printf("This program displays the multiples of 3, up until 100. Please press Enter to continue");
	putchar('\n');
	getchar();
	
	for(myValue=3; myValue<=100; myValue=myValue+3) {
		printf("%d\t", myValue);
	}
	
	putchar('\n');
	return(0);
	
}
*/

/* Exercise 9-7, A program that counts backwards from 25 to O.

int main() {
	int backwards;
	
	puts("This is a program that counts backwards, from 25 to 0. Press Enter to begin.");
	
	getchar();
	
	for(backwards=25; backwards>=0;backwards=backwards-1) {
		printf("%d\t", backwards);
	}
	
	putchar('\n');
	return(0);
}
*/

/* Exercise 9-8, Listing 9-4. Count by Letter source code. Build and run.

int main() {
	
	char alphabet;
	
	for(alphabet='A'; alphabet<='Z'; alphabet=alphabet+1) {
		printf("%c ", alphabet); // put a space in for readability
	}
	putchar('\n');
	return(0);
}
*/

/* Exercise 9-9, modify L9-8 to use an integer placeholder, should display ASCII codes 

int main() {
	
	char letter;
	
	for(letter='A'; letter<='Z'; letter=letter+1) {
		printf("%d\t", letter);
	}
	
	putchar('\n');
	return(0);
	
}
*/

/* Exercise 9-10, write a lowercase version of 9-4, that goes backwards.
int main() {

	char bLetter;

	for(bLetter='z'; bLetter>='a'; bLetter=bLetter-1) {
		printf("%c ", bLetter);
	}
	putchar('\n');
	return(0);
}
//*/

///* Listing 9-5 A Nested Loop. Exercise 9-11, Build and run.

int main() {
	
	int alpha, code;
	
	for(alpha='A'; alpha<='G'; alpha=alpha+1) {
		
		for(code=1; code<=7; code=code+1) {
				printf("%c%d ", alpha, code); // put a [space] instead of [tab] for readability
		}
	}
	putchar('\n');
	return(0);

}
//*/