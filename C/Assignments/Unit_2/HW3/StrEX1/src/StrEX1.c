/*
 ============================================================================
 Name        : SEX1.c
 Author      : Hussein
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
#include "string.h"
#include "ctype.h"

void main() {
	int i ,counter = 0 ;
	char s[100],c;
	printf("Enter The String:" );
	fflush(stdin);fflush(stdout);
	gets(s);
	strlwr(s);
	printf("Enter The Character to find Frequency: " );
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	c = tolower(c);
	for(i=0;i<strlen(s);i++){
		if(s[i]==c)
			counter++;
	}
	printf("Frequency of %c = %d",c,counter);

}
