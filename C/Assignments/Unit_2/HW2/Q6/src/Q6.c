/*
 ============================================================================
 Name        : Q6.c
 Author      : Hussein
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void main() {
	float n ;
	printf("Enter a Number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&n);

	printf("Sum = %.0f",(n*(n+1)/2) );

}
