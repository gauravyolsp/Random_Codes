#include <stdio.h>
#include <stdarg.h>

int Gprintf(const char *, ...);
int Addition(const char *, ...);

int main(void)
{
	int iNo1[10];
	int iCount;
	int iCounter;

	for(iCounter = 0; iCounter < 10; iCounter++)	
	{	
		Gprintf("Enter the numbers iNo[%d] :\t", iCounter);
		scanf("%d", iNo1[iCounter]);
	}
	
	//Gprintf("\niNo1 = %d\niNo2 = %d\n", iNo1, iNo2);

	//Gprintf("\niNo1 = %d\niNo2 = %d\nNAME : %s\n", iNo1, iNo2, "GAURAV");

	for(iCounter = 0; iCounter < 10; iCounter++)	
		iCount = Addition(10, iNo1[iCounter]);

	Gprintf("iCount = %d\n", iCount);
	
	return 0;
}

int Addition(const char *pTotalCount, ...)
{
	int iSum = 0;
	int iCounter;

	va_list pArg = NULL;

	va_start(pArg, pTotalCount);

	for(iCounter = 0; iCounter < pTotalCount; iCounter++)
		iSum = iSum + va_arg(pArg, int);
	
	va_end(pArg);
	
	return iSum;
}

int Gprintf(const char *pszStr, ...)
{
	int iRet;

	va_list pArg = NULL;

	va_start(pArg, pszStr);

	iRet = vprintf(pszStr, pArg);

	va_end(pArg);
	
	return iRet;
}
