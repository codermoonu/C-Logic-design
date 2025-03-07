#include<stdio.h>
int main()
   {
  int n,s=0,a=0,b=1,i;
  printf("Enter the number for the fibonacci series : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
    s=a+b;
    a=b;
    b=s;
      printf("%d\t",s);
    }
    return 0;
    }

