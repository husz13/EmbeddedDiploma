/*
 ============================================================================
 Name        : Q7.c
 Author      : Hussein
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void main() {
	int x ,fact =1;
	printf("Enter an Integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x<0)
		printf("Error Entered a Negative number");
	else {
		while(x){
			fact = fact *x ;
			x--;
		}
		printf("Factorial is %d",fact);
	}
}
