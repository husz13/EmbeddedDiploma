/*
 ============================================================================
 Name        : c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void main() {
	int x  ;
	printf("Enter an Integer : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x == 0)
		printf("Number is Zero");
	else if(x%2 == 0)
		printf("%d is Even",x);
	else if(x%2 != 0)
			printf("%d is Odd",x);

}
