/*
 ============================================================================
 Name        : HW4EX3.c
 Author      : Hussein
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void Reverse(void){
	char x ;
	fflush(stdout);
	scanf("%c",&x);
	if(x != '\n'){
		Reverse();
	printf("%c",x);
	}

}
void main(void) {
	printf("Enter a Sentence: ");
	Reverse();

	}

