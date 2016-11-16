#include <stdio.h>

void print_char_string(char* ptr, int length) 
{	
	for(int i = 0; i < length; i++)
	{
		printf("%c", ptr[i]);
	}
}

void print_int(int print_me)
{
	printf("The integer you sent was %d\n",print_me);
}
	
int addition(int a , int b)
{
	return a + b;
}

int main(int argc, char *argv[])
{
	//This is a comment

	int a = 2;
	double b = 1.940;
	char msg[] = "Hello, World!\n";
	int five = 5;
	int two = 2;

	/*
	this ia a comment
	over
	several lines
	*/

	//my first pointer
	int *ptr; 
	ptr = &a;
	printf("My first pointer is %d\n", ptr[0]); // 2
	a = addition(a,b); // 3
	printf("My first pointer is %d\n", ptr[0]); // 3
	print_int(a);
	
	
	//type cast
	double five_div_two = (double)five/two;
	printf("five_div_two = %.2f \n", five_div_two);

	
	//my second pointer
	char * msgptr; 
	msgptr = &msg[0];
	// what happens if we go outside the message length?
	print_char_string(msgptr, 14); 
	
	// print out all argument parameters received from the command line
	// the first argument will always be the name of the program we are executing
	for (int i = 0; i < argc; i++)
	{
		printf("%s \n", argv[i]);
	}

	return 0;
}//main

/*
HOW TO COMPILE:
$ gcc -o myfirstc myfirstc.c

HOW TO RUN: 
$ ./myfirstc
*/
