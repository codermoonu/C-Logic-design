#include <stdio.h>
int main() {
    //Reversing a no using while and checking if it is palindrome
    int a,b,r,rev=0;
    printf("Enter a number to check if it is a palindrome\n:");
    scanf("%d",&a);
    b=a;
    while (a!=0) {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    if(rev==b)
      {
         printf("The given number %d is a palindrome",b);
         }
         else
           {
           printf("The given number %d is not a palindrome",b);
           }
           return 0;

}