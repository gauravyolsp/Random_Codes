////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////

#define LT 1
#define LE 2
#define EQ 4
#define GT 8
#define GE 16

/////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////

void BitwiseCompare(int, int, char *);

///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1;
	int iNo2;	
	char chChar;

	printf("Enter two numbers:\t");
	scanf("%d%d", &iNo1, &iNo2);

	BitwiseCompare(iNo1, iNo2, &chChar);

	if(((chChar & EQ) != EQ) && ((chChar & LE) == LE) || ((chChar & LT) == LT))
	{
		printf("\n%d IS LESS THAN %d\n\n", iNo1, iNo2);
		printf("%d IS LESS THAN OR EQUAL TO %d\n\n", iNo1, iNo2);
		printf("%d is NOT EQUAL TO %d\n\n", iNo1, iNo2);
		printf("%d IS NOT GREATER THAN %d\n\n", iNo1, iNo2);
		printf("%d is NOT GREATER THAN OR EQUAL TO %d\n\n", iNo1, iNo2);
	}

	else if(((chChar & EQ) != EQ) && ((chChar & GE) == GE) || ((chChar & GT) == GT))
	{
		printf("\n%d IS GREATER THAN %d\n\n", iNo1, iNo2);
		printf("%d IS GREATER THAN OR EQUAL TO %d\n\n", iNo1, iNo2);
		printf("%d IS NOT EQUAL TO %d\n\n", iNo1, iNo2);
		printf("%d IS NOT LESS THAN %d\n\n", iNo1, iNo2);
		printf("%d IS NOT LESS THAN OR EQUAL TO %d\n\n", iNo1, iNo2);
	}

	else if((chChar & EQ) == EQ)
	{
		printf("\n%d IS EQUAL TO %d\n\n", iNo1, iNo2);
		printf("%d IS NOT LESS THAN %d\n\n", iNo1, iNo2);
		printf("%d IS LESS THAN OR EQUAL TO %d\n\n", iNo1, iNo2);
		printf("%d IS NOT GREATER THAN %d\n\n", iNo1, iNo2);
		printf("%d IS GREATER THAN OR EQUAL TO %d\n\n", iNo1, iNo2);
	}

	else
		printf("%d IS NOT EQUAL TO %d\n", iNo1, iNo2);

	return 0;
}

void BitwiseCompare(int iNo1, int iNo2, char *chpChar)
{
	*chpChar = *chpChar ^ *chpChar;

	if(iNo1 == iNo2)
	{
		*chpChar = *chpChar | EQ;
		*chpChar = *chpChar | LE;
		*chpChar = *chpChar | GE;
	}

	else if(iNo1 < iNo2)
	{
		*chpChar = *chpChar | LT;
		*chpChar = *chpChar | LE;
	}

	else
	{
		*chpChar = *chpChar | GT;
		*chpChar = *chpChar | GE;
	}
}
