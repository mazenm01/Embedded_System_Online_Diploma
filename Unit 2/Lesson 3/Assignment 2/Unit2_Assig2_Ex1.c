/*
 * Unit2_Assig2_Ex1.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Mazen
 */

#include <stdio.h>

int main ()
{
	int x;
	printf("Enter an integer you want to check:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&x);
	if (x%2==0)
	{
		printf("%d is even",x);
	}
	else
	{
		printf("%d is odd",x);
	}
	return 0;
}

