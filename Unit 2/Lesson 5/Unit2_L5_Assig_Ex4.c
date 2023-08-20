/*
 * Unit2_L5_Assig_Ex4.c
 *
 *  Created on: Aug 20, 2023
 *      Author: Mazen
 */

#include <stdio.h>
int p=1;
int power (int b , int a)
{
	if(a!=0)
	{
    p*=b;
    a--;
    power(b,a);
	}
	return p;
}

int main()
{
	int a , b ;
	printf("Enter a base number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d" , &b);
	printf("Enter power number (positive integer) : ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &a);
	power(b,a);
	printf("%d ^ %d = %d " , b , a , p);
}
