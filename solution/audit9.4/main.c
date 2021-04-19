#include <stdio.h>//4
#include <stdlib.h>
int main(void)
{
	int str[200];
	int i = 0;
	int n = 0;
	int k = 0;
	int ch = 0;
	FILE* infile;
	if (fopen_s(&infile, "C:\\Users\\ÿ\\Desktop\\input.txt", "r") == 0);
	for (i;!feof(infile);i++)
	{
		str[i] = fgetc(infile);
		if (str[i] == 32)
		{
			n = i - 1;
			k = i - ch;
			ch = -1;
			if (str[k] == str[n])
			{
				for (k;k < n + 1;k++)
					putchar(str[k]);
				printf(" ");
			}
		}
		ch = ch + 1;
	}
}

