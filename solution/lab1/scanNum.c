#include<stdio.h>
int scanNum()
{
	int num=0;
	FILE* infile;
	if (fopen_s(&infile, "C:\\Users\\ÿ\\Desktop\\input.txt", "r") == 0)
	{
		fscanf_s(infile, "%d", &num);
	}
	fclose(infile);
	return(num);
}