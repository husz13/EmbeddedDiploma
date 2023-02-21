/*
 ============================================================================
 Name        : EX4.c
 Author      : Hussein Ahmed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void main() {
	float x,y;
	printf("Enter two numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x,&y);
	printf("Product is : %f ",x*y);
}
