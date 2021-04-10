#include<stdio.h>
int main() 
{
	int a1 = 1;
	int a2 = 2;
	int a3 = 3;
	int sum = 4;

	scanf_s("%d%d%d", &a1, &a2, &a3);
	sum = a1 + a2;
	printf("sum=%d", sum);
	return 0;
}    