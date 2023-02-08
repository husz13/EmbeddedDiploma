/*
 ============================================================================
 Name        : EX2.c
 Author      : Hussein
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void main() {
	float arr[100],sum=0.0;
	int x ;
	printf("Enter the number of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	for(int i = 0 ; i < x ; i++){
		printf("%d Enter Number: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&arr[i]);
	}
	for(int i = 0 ; i < x ; i++){
		sum += arr[i];
	}
	printf("Average = %.2f",sum/x);

}
