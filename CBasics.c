#include<stdio.h> //this is the most common library that is used in C


/*
if you're new you can ignore this method for now
it's here so I can demonstrate methods too
*/
int exampleMethod()
{
	/*
	this example method is going to take an int as
	user input and print every number from 1 to
	the number given by the user
	*/
}

int main() //the main method is the starting point of the program
{
	//BASIC PRINTING
	//Let's start simple with printing out "Hello, World!" to the console
	
	printf("Print Hello, World:\n");//IGNORE
	printf("Hello, World!\n");//we use \n to tell the program we want a new line
	
	/*
	with the printf command we tell the program to
	print something to the console (in this case we 
	want to print out the String "Hello, World!")
	but we can also print out numbers
	*/
	
	printf("Print a number:\n");
	printf("%d\n", 3);//we use %d to indicate we want a digit to be placed
	
	//you can also use expressions:
	printf("Using expressions in printing:\n");
	printf("3 + 2 = %d\n", 3 + 2);//expected result is 5
	
	//VARIABLES
	/*
	you can think of variables as boxes that store information
	of different types like int(integer), char(character)
	variables need a type, name and value
	example of a variable: int var = 5;
	*/
	
	int a = 5;//we are going to use this variable for the examples
	int b = 0;//0 is just a default value we are going to use
	
	//using variables in printing
	printf("Using variables in printing:\n");
	printf("Value of var a: %d\n", a);
	
	//USER INPUT
	//when you need to take input from the 
	//user use scanf("%type", variable of that type);
	printf("Please insert a value for var b: ");
	scanf("%d", &b);//make sure you dont miss the "&" symbol
	//scanf adds a new line after itself
	printf("Value of var b is: %d\n", b);
	
	//IF STATEMENTS
	/*
	if statemets are checkers for if something is true
	if the given thing is true, the code inside the statement
	is executed, if not it continues
	you can add else and else if statements
	*/
	
	//we are going to use the value you gave to b
	printf("ID STATEMENT RESULT:\n");
	if(b == 5)
	{
		printf("You have 5 fingers\n");
	}
	else if(b == 2)
	{
		printf("You have 2 eyes\n");
	}
	esle
	{
		printf("You weren't lucky :/\n");
	}
	
	//SWITCH STATEMENTS
	/*
	switch statements work similarly to the if statements
	but switch statements are genrally faster and more
	convinient in some cases
	*/
	
	//this is what a switch statement looks like:
	printf("SWITCH RESULT:\n");
	switch(b)//we are gonna check the value of b
	{
		case 3:
			printf("I have 3 litres of Cola\n");
			break;
		case 4:
			printf("I have 4 dollars\n");
			break;
		default://if none of the cases above are true, the default is executed
			//it is not necessary
			printf("Default case executed\n")
			break;
	}
	
	return 0;//just make sure you have this
}
