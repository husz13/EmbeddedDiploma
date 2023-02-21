#include <stdio.h>
void main(){
	int n , x , temp,loc;
	int arr[10] ;
	printf("Enter numbers of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(int i = 0;i<n;i++)
	{
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("Enter number to be Inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("Enter Location:  ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&loc);
	for(int i = loc-1;i<n+1;i++)
	{
		temp = arr[i];
		arr[i] = x;
		x = temp ;
	}
	for (int j=0;j<n+1;j++)
	{
		printf("%d\n",arr[j]);
	}

}
