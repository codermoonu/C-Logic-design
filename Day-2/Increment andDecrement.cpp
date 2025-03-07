#include<stdio.h>
main(void)
{
	int a;
	printf("Enter a Integer for a:");
	scanf("%d",&a);
	printf("a=%d\n ++a=%d\n a++=%d",a,++a,a++);
	printf("Enter a Integer for a:");
	scanf("%d",&a);
	printf("a++=%d\n ++a=%d\n a=%d",a++,++a,a);

}
	
	