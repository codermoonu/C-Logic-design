#include <stdio.h>
int main() {
    //Finding the given no is armstrong using while
    //Program for three digit no
    int a,b,r,rev=0;
    printf("Enter a three digit number to check whether it is armstrong or not:");
    scanf("%d",&a);
    b=a;
    while (a!=0) {
        r=a%10;
        rev=rev+(r*r*r);
        a=a/10;
    }
    if(rev==b)
    {
        printf("The given number %d is a armstrong number",b);
    }
    else
    {
        printf("The given number %d is not armstrong number",b);
    }
    return 0;

}