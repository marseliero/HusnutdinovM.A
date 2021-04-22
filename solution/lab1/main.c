#include"scanNum.h"
#include"sumNum.h"
#include"numB.h"
#include<stdio.h>
int main()
{
	int num = scanNum();
	printf("%d\n",sumNum(num));
	numB(num);
}