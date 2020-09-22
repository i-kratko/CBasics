#include<stdio.h> //this is the most common library that is used in C

int main() //the main method is the starting point of the program
{
	//BASIC PRINTING
	//Let's start simple with printing out "Hello, World!" to the console
	
	printf("Print Hello, World:\n");//IGNORE
	printf("Hello, World!\n");//we use \n to tell the program we want a new line
	
	/*with the printf command we tell the program to
	print something to the console (in this case we 
	want to print out the String "Hello, World!")
	but we can also print out numbers
	*/
	
	printf("Print a number:\n");
	printf("%d\n", 3);//we use %d to indicate we want a digit to be placed
	
	//you can also use expressions:
	printf("%d\n", 3 + 2);//expected result is 5
	
	//VARIABLES
	/*
	*/
	
	return 0;
}
