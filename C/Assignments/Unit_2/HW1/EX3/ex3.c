/*
 * ex3.c
 *
 *  Created on: 4 Feb 2023
 *      Author: compu market
 */

#include "stdio.h"
void main (){
	int x,y ;
	printf("Enter Two Integers : ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("The Sum Of %d and %d is %d",x,y, x+y);
}
