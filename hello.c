#include <stdio.h>

/**
* Fizzbuzz program
* This is a program that prints Fizz when a number is divisible by 3
* prints Buzz when a number is divisible by 5
* and prints FizzBuzz when the number is divisible by both
*/
int i;
int main(void)
{
	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz\n");
		else if (i % 5 == 0)
			printf("Buzz\n");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz\n");
	};
}