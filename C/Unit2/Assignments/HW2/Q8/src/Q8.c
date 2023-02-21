/*
 ============================================================================
 Name        : Q8.c
 Author      : Hussein
===============================================
 */
#include <stdio.h>

void main() {
	float x,y;
	char c ;
	printf("Enter an Operator : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	printf("Enter Two Operands: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x,&y);
	switch(c){
	case '*':
		printf("%.2f * %.2f = %.3f",x,y,x*y);
		break;
	case '/':
		printf("%.2f / %.2f = %.3f",x,y,x/y);
		break;
	case '+':
		printf("%.2f + %.2f = %.3f",x,y,x+y);
		break;
	case '-':
		printf("%.2f - %.2f = %.3f",x,y,x-y);
		break;
	default:
		printf("Wrong Operator");
	}
}
