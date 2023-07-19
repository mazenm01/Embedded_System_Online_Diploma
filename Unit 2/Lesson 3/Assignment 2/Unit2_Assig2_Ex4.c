/*
 * Unit2_Assig2_Ex4.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Mazen
 */

#include <stdio.h>

int main()
{
	float x;
	printf("Enter a number:");
	fflush(stdout);fflush(stdin);
	scanf("%f",&x);
	if(x==0)
	{
		printf("You entered zero");
	}
	else if (x>0)
	{
		printf("%f is positive",x);
	}
	else
	{
		printf("%f is negative",x);
	}
	return 0;
}
