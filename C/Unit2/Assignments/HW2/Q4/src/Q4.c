#include<stdio.h>
int main()
{
	float x;
	printf("Enter a Number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	if(x==0)
		printf("You Entered a Zero");
	else if(x>0)
		printf("%.2f is Positive",x);
	else
		printf("%.2f is Negative",x);


}
