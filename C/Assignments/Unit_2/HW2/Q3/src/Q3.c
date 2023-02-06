/*
 ============================================================================
 Name        : Q3.c
 Author      : Hussein
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
	float x,y,z ;
	printf("Enter three numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	if(x>=y){
		if(x>=z)
			printf("%0.2f is the largest",x);
		else
			printf("%0.2f is the largest",z);
	}
	else {
		if(y>=z)
			printf("%0.2f is the largest",y);
		else
			printf("%0.2f is the largest",z);
	}
}
