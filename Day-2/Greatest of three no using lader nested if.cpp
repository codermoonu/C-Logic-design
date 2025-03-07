#include<stdio.h>
main(void)
{
	int a,b,c;
	printf("Enter three no for a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	 {
	 	if(a>c)
	 	 {
	 	 	printf("%d in variable a is greatest",a);
		  }
		else
		 {
		 	printf("%d in variable c is greatest",c);
		 }
	 }
	else
	 {
	 	if(b>c)
	 	 {
	 	 	printf("%d in variable b is greatest",b);
		  }
		else
		 {
		 	printf("%d in variable c is greatest",c);
		 }
	 }
}