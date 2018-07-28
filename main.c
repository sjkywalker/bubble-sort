/* ----------------------------------------------------------- */
/* Program bubble-sorts random-generated array w/ 10 elements  */
/* ----------------------------------------------------------- */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	//int arr[10] = {7, 2, 4, 8, 1, 9, 3, 5, 6, 10};
	int arr[10];
	int change = 0;
	int tmp;

	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 50;
	}

	printf("[Original array with 10 elements]\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%2d ", arr[i]);
	}
	printf("\n\n");

	for (int i = 0; i < 9; i++)
	{
		change = 0;
		for (int j = 0; j < 9; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				change++;
			}
		}
		if (change == 0)
		{
			break;
		}
	}

	printf("[After bubble sort]\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%2d ", arr[i]);
	}
	printf("\n\n");

	return 0;
}

