/*
 ============================================================================
 Name        : EX2.c
 Author      : Hussein
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void main() {

	int a[5][5];
	int r,c ;
	printf("Enter Matrix Dimensions : ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&r,&c);
	printf("Enter Matrix\n");
	for(int i = 0 ; i < r;i++){
		for(int j = 0 ; j < c ; j++){
			printf("Enter element %d %d : ",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%d",&a[i][j]);
		}
	}
	for(int j = 0 ; j < c;j++){
		for(int i = 0 ; i < r ; i++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

}
