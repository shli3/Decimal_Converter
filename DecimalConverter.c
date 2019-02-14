#include <stdio.h>

/*
Mini program that allows user to input a value into decimal representation and converts that value to either hexadecimal representation or octal representation.
Program made and copywritten by Steven Shlimoon. Made on November 11, 2018. Revised on February 14, 2019.
*/
int main(void)
{
	
	/*
	INT:
	op will be the menu option the user chooses, which will determine whether he wants to convert to hexadecimal, octal, or exit the program.
	LONG:
	num will be the number the user inputs, which will be displayed into either hexadecimal form or octal. This is taking int account very large numbers, and
	that's why num is a long. Since the program doesn't cooperate well when a negative number is entered, we will force the user to keep it positive :).
	*/
	int op;
	long num;
	
	//printf("%o", 123); for testing
	//printf("%X", 123); for testing
	
	while(1)
	{
		
		printf("What is the number we are converting today? (MUST BE 0 OR GREATER)! \n");
		scanf("%ld", &num);
		
		if(num < 0)										//Program does not cooperate with negative values.
		{
			
			printf("Number cannot be negative! \n");
			continue;									//Will prompt user to input another number.
		}
		
		printf("What are we converting to? \n [1] hexadecimal \n [2] octal \n any other value to exit exit the program \n");
		scanf("%d", &op);
		
		switch(op)
		{
				
			case 1:
			printf("%X \n", num);				//%X prints the number in hexadecimal.
			break;
			case 2:
			printf("%o \n", num);				//%o prints the number in octal.
			break;
			default:							
			printf("Good bye!");
			return 0;
			break;
				
		}
		
	}
		
}