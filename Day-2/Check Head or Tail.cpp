#include<stdio.h>
main(void)
{
	char a;
	printf("Enter \n H for Head \n T for Tail:");
	scanf("%ch",&a);
	if(a=='H'|| a=='h')
	 {
	 	printf("Its Head");
	 }
	else 
	 {
	 	printf("Its Tail");
	 }
}