#include <stdio.h>

void add(int, int, int *p, int *q);
 
int main()
{
	int i, j, sum, dif;

	printf("enter values of i and j: \t");
	scanf("%d%d", &i, &j);

	add(i, j, &sum, &dif);

	printf("value of sum is : %d\n", sum);
	printf("value of diff is : %d\n", dif);

	return 0;	
}

void add(int i, int j, int *p, int *q)
{
	*p = i + j;
	*q = i - j;
}
