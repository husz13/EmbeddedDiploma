/*
 ============================================================================
 Name        : Q2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void main() {
	char c ;
	printf("Enter an Alphabet : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
		printf("%c is a Vowel",c);
	else
		printf("%c is a Constant",c);


}
