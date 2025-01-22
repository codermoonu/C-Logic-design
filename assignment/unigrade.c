#include <stdio.h>
int main()
{
    printf("ADAMAS UNIVERSITY GRADING SYSTEM");
    printf("\nEnter the details of the student below:\n\n");
    char name[50],roll[50],reg[50],prog[50];
    int sem, ses[20];
    printf("\nName: \t"); scanf("%s",name);
    printf("\nRoll Number: \t"); scanf("%s",roll);
    printf("\nRegistration Number: \t"); scanf("%s",reg);
    printf("\nProgram: \t"); scanf("%s",prog);
    printf("\nSemester: \t"); scanf("%d",&sem);
    printf("\nSession: \t"); scanf("%s",&ses);
    printf("\n\t\tUse 'tab' in the gap to scan the following");
    printf("Grade points:\n95-100 marks = 10.0 grade points = O grade\n90-94 marks = 9.0 grade points = A+ Grade\n80-89 marks = 8.0 grade points = A Grade\n70-79 marks = 7.0 grade points = B+ Grade\n60-69 marks = 6.0 grade points = B Grade\n50-59 marks = 5.0 grade points = C Grade\n40-49 marks = 4.0 grade points = P Grade\n0-39 marks= 0.0 points = F Grade\nAbsent=0.0 points = AB Grade\nDebarred=0.0 points = DB Grade");
    printf("\nEnter the subject name and the marks obtained.");
    printf("\nSubject\t Internal \tExternal \tCredit obtained\n");
    char sub[100];int i1,i2,i3,i4,i5,e1,e2,e3,e4,e5,c1,c2,c3,c4,c5;
    scanf("%s\t%d\t%d\t%d",sub,&i1,&e1,&c1);printf("\n");
    scanf("%s\t%d\t%d\t%d",sub,&i2,&e2,&c2);printf("\n");
    scanf("%s\t%d\t%d\t%d",sub,&i3,&e3,&c3);printf("\n");
    scanf("%s\t%d\t%d\t%d",sub,&i4,&e4,&c4);printf("\n");
    scanf("%s\t%d\t%d\t%d",sub,&i5,&e5,&c5);printf("\n");
    
    int marks=i1+i2+i3+i4+i5+e1+e2+e3+e4+e5;
    printf("Total Marks Obtained out of 500:\t %d",marks);
    printf("Total Grade points obtained  by the Student %s",name);



}