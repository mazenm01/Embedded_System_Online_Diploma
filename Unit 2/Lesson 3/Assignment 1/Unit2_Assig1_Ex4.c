/*
 * Unit2_Assig1_Ex4.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Mazen
 */
#include <stdio.h>

int main ()
{
	float x,y;
	printf("Enter two numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f", &x , &y);
	printf("Product:%f",x*y);
	return 0;
}
