/*
 * Unit2_Assig2_Ex8.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Mazen
 */

#include <stdio.h>

int main()
{
	float x,y,sum=0,diff=0,product=0,Quotient=0;
	char operator;
	printf("Enter an operator either + or - or * or /:");
	fflush(stdout);fflush(stdin);
	scanf("%c",&operator);
	printf("Enter two operands:");
	fflush(stdout);fflush(stdin);
	scanf("%f %f", &x , &y );
	switch(operator)
	{
	case '+':
		sum=x+y ;
		printf("%f + %f= %f",x,y,sum);
		break;

	case '-':
		diff=x-y ;
		printf("%f - %f= %f",x,y,diff);
		break;

	case '*':
		product=x*y ;
		printf("%f * %f= %f",x,y,product);
		break;

	case '/':
		Quotient=x/y ;
		printf("%f / %f= %f",x,y,Quotient);
		break;

	default:
		printf("You entered a wrong operator");
		break;
	}
	return 0;
}
