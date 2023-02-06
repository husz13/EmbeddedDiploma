/*
 ============================================================================
 Name        : EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char c;
	printf("Enter A Character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	printf("The ASCII Code is : %d",c);

}
