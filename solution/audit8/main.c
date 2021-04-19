#include <stdio.h>//1
#include <stdlib.h>
void main()
{
	int i = 0, u = 0, c = 0;
	int mass[10], mass2[10], mass3[10];
	FILE* input1;
	FILE* input2;
	FILE* output;
	int error1 = fopen_s(&input1, "C:\\Users\\ÿ\\Desktop\\a.txt", "r");
	int error2 = fopen_s(&input2, "C:\\Users\\ÿ\\Desktop\\b.txt", "r");
	int error3 = fopen_s(&output, "C:\\Users\\ÿ\\Desktop\\c.txt", "r+");
	if (error1 == 0 && error2 == 0 && error3 == 0)
	{
		for (i;i < 10;++i)
		{
			fscanf_s(input1, "%d", &mass[i]);
		}
		for (u;u < 10;++u)
		{
			fscanf_s(input2, "%d", &mass2[u]);
		}
		for (c, u = 0, i = 0;c < 10;++c)
		{
			mass3[c] = mass[i] + mass2[u];
			fprintf(output, "%d ", mass3[c]);
			++i;
			++u;

		}

	}
	system("pause");
}