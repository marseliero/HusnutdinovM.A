#include <stdio.h>//2
#include <stdlib.h>
void main()
{
	int mass[5] = { 1, 2, 3, 4, 5 };
	int k = 0;
	int i = 0;
	for (i;i < 5;i++)
	{
		k = 0;
		for (i;k != i;k++)
		{
			mass[i] = mass[i] + mass[k];
		}

	}
	for (i = 0;i < 5;i++)
	{
		printf("%d", mass[i]);
	}
	system("pause");
}