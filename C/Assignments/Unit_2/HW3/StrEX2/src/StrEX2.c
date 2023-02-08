/*
 ============================================================================
 Name        : StrEX2.c
 Author      : Hussein
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

 main() {
	 char s[100];
	 int i =0 ,len=0;
	 printf("Enter The String:" );
	 fflush(stdin);fflush(stdout);
	 gets(s);
	 while(1){
		 if(s[i]==0)
			 break;
		 else
			 len++;
		 i++;
	 }
	printf("The Length is %d",len);
 }
