#include<stdio.h>
#include <math.h>

int IsPrime(int x){
	int i =2;
	if(x == 1 || x ==2)
		return 1;

	for(i=2;i<x;i++){
		if(x%i ==0 )
			return 0;
	}
	return 1 ;
}

void main(void){
	int arr[100],counter=0,l,r;
	printf("Enter Two Intervals: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&l,&r);
	int i ;
	for(i=l;i<=r;i++){
		if(IsPrime(i)){
			arr[counter] = i;
			counter++;
		}
	}
	printf("Prime Numbers Between %d and %d are : ",l,r);
	for(i=0 ; i<=counter-1;i++){
		printf("%d ",arr[i]);
	}



}


