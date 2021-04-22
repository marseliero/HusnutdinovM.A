#include<stdio.h>
int numB(int num)
{
	int mass[100];
	int n=0;
	int num2 = num;
	FILE* outfile;
	if (fopen_s(&outfile, "C:\\Users\\ÿ\\Desktop\\output.txt", "w") == 0)
	{
		for (int i = 0;num != 0;++i)
		{
			if ((num % 2) == 0)
			{
				mass[i] = 0;
			}
			else
			{
				mass[i] = 1;
			}
			num = num / 2;
			n = n + 1;
		}
		if (num2 > 0)
		{
			for (int i = n - 1;i > -1;--i)
			{
				printf("%d", mass[i]);
				fprintf(outfile, "%d", mass[i]);
			}
		}
		else
		{
			printf("%d", 1);
			fprintf(outfile,"%d",1);
			for (int i = n - 1;i > -1;--i)
			{
				if (mass[i] == 0)
				{
					mass[i] = 1;
				}
				else if (mass[i] == 1)
				{
					mass[i] = 0;
				}
				printf("%d",mass[i]);
				fprintf(outfile, "%d",mass[i]);
			}
		}
	}
}
