#include<stdio.h>//3
#include<locale.h>
#include<stdlib.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	FILE* infile;
	int c;
	if (fopen_s(&infile, "R://Рабочий стол//input.txt", "r+") == 0)
	{
		while ((c = fgetc(infile)) != EOF)
		{
			c = c - 32;
			putchar(c);
		}

	}
}