/*
 ============================================================================
 Name        : HW4EX4.c
 Author      : Hussein
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int power(int x ,int pow){
	if(pow == 0)
		return 1;
	return x*power(x,pow-1);
}
int main(void) {
	int x , y;
	printf("Enter Base Number : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&x);
	printf("Enter Power Number : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&y);
	printf("%d^%d = %d",x,y,power(x,y));

}
