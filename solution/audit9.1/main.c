#include<stdio.h>//1
int main(void)
{
	char mass[7];
	scanf_s("%s", mass, sizeof(mass));
	if ((mass[0] + mass[1] + mass[2]) == (mass[3] + mass[4] + mass[5]))
		printf("Lucky");
	else printf("Unlucky");
	system("pause");
}