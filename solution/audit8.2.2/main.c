#include <stdio.h>//2
#include <stdlib.h>
void main()
{
	int mass[10] = { 6,3,4,7,6,0,4,9,2,2 };
	int n = 9;
	int i = 0;
	for (i;mass[1] != 0;i++)
	{
		if (i == n)
		{
			i = 0;
		}
		if (n < i)
		{
			i = 0;
		}
		mass[i] = mass[i] + mass[n];
		mass[n] = 0;
		n = n - 1;

	}
	for (i = 0;i < 10;i++)
	{
		printf("%d ", mass[i]);
	}
	system("pause");
}
