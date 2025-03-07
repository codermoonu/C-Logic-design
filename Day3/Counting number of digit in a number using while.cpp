#include<stdio.h>
int main() {
    //counting no of digit using while
    int no,count=0,a;
    printf("Enter the Number:");
    scanf("%d",&no);
    m=no;
    while (no!=0) {
        no=no/10;
        count++;
    }
    printf("The number %d is a %d digit number",m,count);
    return 0;
}