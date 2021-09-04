#include <stdio.h>

void add(int i, int j);
 
int main()
{
	int i, j;

	printf("enter values of i and j: \t");
	scanf("%d%d", &i, &j);

	add(&i, &j);

	printf("value of sum is : %d\n", i);
	printf("value of diff is : %d\n", j);

	return 0;	
}

void add(int i, int j)
{
	i = i + j;
	j = i - j;
}
