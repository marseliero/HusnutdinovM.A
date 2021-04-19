#include <stdio.h>//3
#include <stdlib.h>
int main()
{
	char mass[6];
	if (scanf_s("%s", mass, sizeof(mass)) == 1)
		if ((mass[0] == mass[4]) && (mass[1] == mass[3]))
			printf("Palindrome");
		else printf("Not Palindrome");
	return(0);
}