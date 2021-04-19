#include<stdio.h>//2
int main(void)
{
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 1;i != n + 1;i++)
	{
		for (int k = 1;k != i + 1;k++)
		{
			printf("%d", i);
		}
		printf(" ");
	}
}