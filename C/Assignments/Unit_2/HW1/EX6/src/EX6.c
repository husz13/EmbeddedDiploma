/*
 ============================================================================
 Name        : EX6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y,temp ;
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&y);
	temp = x ;
	x = y ;
	y = temp;
	printf("After swapping, value of a = %0.3f\nAfter swapping, value of b = %0.3f",x,y);


}
