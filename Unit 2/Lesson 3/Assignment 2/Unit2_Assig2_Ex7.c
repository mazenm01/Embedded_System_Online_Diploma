/*
 * Unit2_Assig2_Ex7.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Mazen
 */


#include <stdio.h>

int main()
{
	int x,factorial=1;
	printf("Enter an integer:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&x);
	if(x>0)
	{
		for(int i=1; i<=x;i++)
		{
			factorial*=i;
		}
		printf("factorial of %d =%d",x , factorial);
	}
	else if(x==0)
	{
		printf("factorial of 0 = 1");
	}
	else
	{
		printf("Error!!! negative numbers has no factorial");
	}
	return 0;
}
