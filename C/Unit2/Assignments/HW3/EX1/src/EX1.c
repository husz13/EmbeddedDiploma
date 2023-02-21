/*
 ============================================================================
 Name        : EX1.c
 Author      : Hussein
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void main() {
	float a[2][2],b[2][2];
	printf("Enter 1st Matrix elements: \n");
	for(int i =0 ; i <2 ;i++){
		for(int j = 0 ;j<2 ;j++){
			printf("Enter a(%d,%d) : ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter 2nd Matrix elements: \n");
		for(int i =0 ; i <2 ;i++){
			for(int j = 0 ;j<2 ;j++){
				printf("Enter b(%d,%d) : ",i+1,j+1);
				fflush(stdin);fflush(stdout);
				scanf("%f",&b[i][j]);
			}
		}
		for(int i =0 ; i <2 ;i++){
			for(int j = 0 ;j<2 ;j++){
			printf("%.2f\t",a[i][j]+b[i][j]);
			}
			printf("\n");
}
}
