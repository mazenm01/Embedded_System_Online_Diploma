/*
 * Unit2_L5_Assig_Ex3.c
 *
 *  Created on: Aug 20, 2023
 *      Author: Mazen
 */

#include <stdio.h>
int f=1  ;

int factorial(int n)
{

	if (n!=0)
	{
		f*=n;
		n--;
		factorial(n);
	}

return f;
}


int main()
{
    int n;
	printf("Enter a positive integer : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	factorial(n);
	printf("factorial of %d is : %d",n,f);
return 0;
}
