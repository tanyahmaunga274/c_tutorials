#include <stdio.h>

/**
* Fizzbuzz program
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