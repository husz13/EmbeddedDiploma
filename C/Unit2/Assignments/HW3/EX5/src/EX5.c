/*
 ============================================================================
 Name        : EX5.c
 Author      : Hussein
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
void main() {
	int n ,x ,i ,arr[100] ,flag= 0;
	printf("Enter number of Elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("Enter number To search for : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(arr[i]==x){
			flag = 1 ;
			break;
		}
	}
	if(flag)
		printf("Number Found at location %d",i+1);
	else
		printf("Number Not Found");


}
