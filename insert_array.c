#include <stdio.h>

/**
* main - implementation of the insertion program
* where we add data at the end of the array
* Return: Always 0 (Success)
*
* Algorithm to insert data into an array
* Get the element to be inserted into the array
* Get the position on which to insert the element in the array
* Check if the position is valid or not
* If valid, shift all the elements from the last index to position index by 1 posotion to the right.
* insert the new element in the position
* Otherwise, invalid position
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

	n = n + 1;

	while (j >= k)
	{
		LA[j + 1] = LA[j];
		j = j - 1;
	}

	LA[k] = item;

	printf("The array elements after insertion: \n");

	for (i = 0; i < n; i++)
	{
		printf("LA[%d] = %d \n", i, LA[i]);
	}
	return (0);
}