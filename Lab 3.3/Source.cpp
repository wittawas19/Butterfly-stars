#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int h, i, j, k;
	scanf("%d", &h);
	for (i = 1; i <= h - 1; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		for (k = 1; k <= 2 * (h - i); k++)
			printf(" ");
		printf("\b");
		for (j = i; j >= 1; j--)
			printf("*");
		printf("\n");

	}
	for (i = h; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		for (k = 1; k <= 2 * (h - i); k++)
			printf(" ");
		printf("\b");
		for (j = i; j >= 1; j--)
			printf("*");
		printf("\n");

	}
	return 0;

}