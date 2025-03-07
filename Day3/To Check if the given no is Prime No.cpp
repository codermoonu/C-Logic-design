#include <stdio.h>
int main()
   {
  int n,c=0;
  printf("Enter a number: ");
  scanf("%d",&n);
  for(int i=2;i<=n/2;i++)
    {
    if(n%i==0)
      {
      c++;
      break;
      }

    }
  if(c==0) {
    printf("Not a Prime Number");
  }
 else {
   printf("%d is a Prime Number",n);
 }

      }