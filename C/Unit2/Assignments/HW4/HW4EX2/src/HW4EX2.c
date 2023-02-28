/*
 ============================================================================
 Name        : HW4EX2.c
 Author      : Hussein
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int fact(int x){
	if(x == 1)
		return 1 ;
	return x * fact(x-1);
}
int main(void) {
	int x;
printf("Enter a positive integer : ");
fflush(stdin);fflush(stdout);
scanf("%d",&x);
printf("Factorial 0f %d = %d ",x,fact(x));
}
