#include <stdio.h>//5
#include <stdlib.h>
#include <locale.h>
int main(void)
{
	int n = 0;
	setlocale(LC_ALL, "Rus");
	char name[100];
	int age;
	printf("--->������� ��� ���:\n<---");
	gets_s(name, 99);
	printf("--->������� ���� �������:\n<---");
	scanf_s("%d", &age);
	printf("�� %s \n��� �������� %d", name, age);
}