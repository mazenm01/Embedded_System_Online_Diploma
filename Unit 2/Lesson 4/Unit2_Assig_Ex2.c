/*
 * Unit2_Assig_Ex2.c
 *
 *  Created on: Aug 15, 2023
 *      Author: Mazen
 */


#include <stdio.h>

int main ()
{
	int n;
	float sum , Average;
	printf("Enter the number of data");
	fflush(stdin);fflush(stdout);
	scanf("%d" , &n);
	float x[n];
	for(int i=0 ; i<n ; i++){
		printf("Enter value %d: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f" , &x[i]);
	}
	for(int i=0 ; i<n ; i++){
		sum+=x[i];
	}
	Average=sum/n;
	printf ("Average =%.1f :", Average);
	return 0;
}
