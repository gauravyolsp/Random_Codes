#include <stdio.h>

int main()
{
	int iAns;
	int iNo1 = 0;
	int iNo2 = 1;
	int iNo3 = 2;

	iAns = iNo1 && ++iNo2 && iNo3++;

	printf("%d\t%d\t%d\t%d\n", iNo1, iNo2, iNo3, iAns);
	return 0;
}
