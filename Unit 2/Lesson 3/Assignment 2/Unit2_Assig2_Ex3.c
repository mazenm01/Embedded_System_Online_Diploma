/*
 * Unit2_Assig2_Ex3.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Mazen
 */


#include <stdio.h>

int main()
{
	float a,b,c ;
	printf("enter three values:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&a , &b , &c);


	if(a>b)
	{
		if(a>c)
		{
			printf("the largest value is %f",a);
		}
		else
		{
			printf("the largest value is %f",c);
		}
	}
	if(a<b)
		{
			if(b>c)
			{
				printf("the largest value is %f",b);
			}
			else
			{
				printf("the largest value is %f",c);
			}
		}


 return 0;
}
