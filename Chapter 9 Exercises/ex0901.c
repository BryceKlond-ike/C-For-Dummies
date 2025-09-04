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

/* Listing 9-5 A Nested Loop. Exercise 9-11, Build and run.

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

/* Exercise 9-12, 3 Letter acronym AAA to ZZZ.
int main() {

	char alpha, beta, zulu;

	for(alpha='A'; alpha<='Z'; alpha=alpha+1) {
		for(beta='A'; beta<='Z'; beta=beta+1) {
			for(zulu='A'; zulu<='Z'; zulu=zulu+1) {
				printf("%c%c%c\t", alpha,beta,zulu);
			}
		}
	}
	putchar('\n');
	return(0);
}
//*/

/* Listing 9-6, exercise 9-13 Intro to while() loop. 

int main() {

	int x;

	x=0;
	while(x<10) {
		puts("Sore Shoulder Surgery");
		x=x+1;
	}
	putchar('\n');
	return(0);

}
//*/

/* Exercise 9-14. changing value of x

int main() {

	int x;

	x=13;
	while(x<10) {
		puts("Sore shoulder surgery");
		x=x+1;
	}
	return(0);
	// Code will build, but there is no output because the value is already true before loop starts, therefore loop doesnt run. 
}
*/

/* Exercise 9-15, from -5 to 5, a while loop

int main() {
	float h;

	h=-5.0;
	while(h<5) {
		printf("%.1f\t", h); // [tab] for readability, naturally
		h=h+0.5;
	}
	putchar('\n');
	return(0);
}
*/

/* Exercise 9-16, Listing 9-7, do-while() loop intro.

int main() {

	int fibo, nacci;

	fibo=0;
	nacci=1;

	do{
		printf("%d ", fibo);
		fibo=fibo+nacci;

		printf("%d ", nacci);
		nacci=nacci+fibo;
	} while(nacci < 300);

	putchar('\n');
	return(0);
}
*/

/* Exercise 9-17, redo 9-14 as a do-while() loop. 

int main() {
	
	int x;

	x=0;
	do {
		puts("Sore shoulder surgery");
		x=x+1;
	} while(x<10);
	return(0);
}
*/

/* Exercise 9-18, Listing 9-8 Common endless loops.

int main() {

	int x;

	for(x=0;x=10;x=x+1) {
		puts("What are you looking at?");
	}
	return(0);
	// Endless loop
}
*/

/* Exercise 9-19, Listing 9-9. Breaking out of a loop!

int main() {

	int count;

	count = 0;
	while(1) {
		printf("%d, ", count);
		count=count+1;
		if(count>50)
			break;
	}
	putchar('\n');
	return(0);
}
*/

/* Exercise 9-20, rewrite Listing 9-9 using endless for() loop. 

int main() {

	int count;
	for(count=0;;count=count+1) {
		printf("%d, ", count);
		if(count>=50) {
			break;
		}
	}
	putchar('\n');
	return(0);
}
*/

/* Lisitng 9-10. Exercise 9-21, build and run. Adding multiple for() loop conditions

int main() {

	int a;
	char c;

	for(a=1, c='Z'; a < 5; a=a+1, c=c-1) {
		printf("%d%c\n", a,c);		//Creates Alpha numeric code
	}
	return(0);

}
*/

/* Exercise 9-22, listing 9-11. Stuffing a loop.

int main() {

	int x;

	for(x=0; x<10; x=x+1, printf("%d\n", x))
		;
	return(0);
	//While it definitely works, bad practice.
}
*/