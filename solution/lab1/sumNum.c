#include<stdio.h>
int sumNum(int num) 
{
	int sum = 0;
	int l = 0;
	do
	{
		l = num % 10;
		sum = sum + l;
		num = num / 10;
	} while (num != 0);
	return(sum);
}