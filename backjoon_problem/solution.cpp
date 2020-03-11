#include<stdio.h>
#include<iostream>

void star()
{
	printf("* ");
}

void empty()
{
	printf("  ");
}

int main()
{
	int arr[5];
	int max = 0;

	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] >= max)
			max = arr[i];
	}

	//printf("* ");		star
	//printf("  ");		empty

	for (int i = 0; i < max; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (max - i <= arr[j])
			{
				star();
				arr[j]--;
			}

			else if (max - i > arr[j])
				empty();
		}
		printf("\n");
	}
	printf("O O O O O");


	//2 4 6 8 10
}