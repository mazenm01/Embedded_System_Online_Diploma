/*
 * Unit2_Assig_Ex1.c
 *
 *  Created on: Aug 19, 2023
 *      Author: Mazen
 */
#include <stdio.h>

void findprime(int x,int y)
{
	for(int n=x ; n<=y ; n++)
	{
			if(n==0 || n==1)
			{
				printf("%d  ",n);
			}
			else if(n%2!=0 && n%3!=0 && n%5!=0)
			{
				printf("%d  ",n);
			}

	}
}

int main()
{int x,y;
printf("Enter two numbers(intervals) :  ");
fflush(stdin);fflush(stdout);
scanf("%d %d",&x,&y);
printf("prime numbers between %d and %d are : ",x,y);
findprime(x,y);
return 0;
}

