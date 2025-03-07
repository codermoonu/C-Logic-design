#include <stdio.h>
int main() {
    //Reversing a no using while
    int a,b,r,rev=0;
    printf("Enter a number to reverse:");
    scanf("%d",&a);
    b=a;
    while (a!=0) {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    printf("The reverse of number %d is %d",b,rev);
    return 0;
}