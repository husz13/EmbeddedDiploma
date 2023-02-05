/*
 ============================================================================
 Name        : Q5.c
 Author      : Hussein
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void main() {
	char c ;
	printf("Enter a Character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	if((c>=65&&c<=90)||(c>=97&&c<=122))
		printf("%c is an Alphabet",c);
	else
		printf("%c is NOT an Alphabet",c);
}
