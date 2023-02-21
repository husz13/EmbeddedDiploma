/*
 ============================================================================
 Name        : StrEx3.c
 Author      : Hussein
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
#include "string.h"


void main() {
	int len,i ;
	char s[100],arr[100];
	printf("Enter String : ");
	fflush(stdin);fflush(stdout);
	scanf("%s",s);

	len = strlen(s);
	for(i= 0 ; i < len ;i++){
		arr[i] = s[len-i-1];
	}
	arr[len]=0;
	printf("Reversed String : %s ",arr);
}
