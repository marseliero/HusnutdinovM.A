#include <stdio.h>//4
#include <stdlib.h>
int main(void)
{
	int n = 0;
	int c;
	char a[100];
	FILE* infile;
	if (fopen_s(&infile, "C:\\Users\\ÿ\\Desktop\\input.txt", "r") == 0);
	{
		fscanf_s(infile, "%d\n", &n);
		fgets(a, 100, infile);
		printf("%d\n%s\n", n, a);
		int k = n - 1;
		for (int i = 0;i < (n / 2);i++)
		{
			if (a[i] == a[k])
			{
				k = k - 1;
				c = 0;
			}
			else
			{
				c = 1;
				printf("not palindrome");
				break;
			}
		}
		if (c == 0) printf("palindrome");
		fclose(infile);
	}
}
