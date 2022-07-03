#include <stdio.h>

/**
* main - the program traverse and prints
* the elements of an array
* Return: Always 0 (Success)
*/
int main(void)
{
	int LA[] = {1, 3, 5, 7, 8};
	int item = 10;
	int k = 3;
	int n = 5;

	int i = 0;
	int j = n;

	printf("The original array elements are: \n");
	for (i = 0; i < n; i++)
	{
		printf("LA[%d] = %d \n", i, LA[i]);
	}
	return (0);
}