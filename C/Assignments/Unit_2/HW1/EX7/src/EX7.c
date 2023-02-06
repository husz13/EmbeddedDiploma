/*
 ============================================================================
 Name        : EX7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	float x,y ;
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&y);
	x = x+y ;
	y = x-y;
	x = x-y ;
	printf("After swapping, value of a = %0.3f\nAfter swapping, value of b = %0.3f",x,y);



}
