#include <stdio.h>

int main(void)
{
    char name[10];
    int rollNo;

    printf("Enter Your Name: ");
    scanf("%s",name);
        
    printf("Enter Your Roll No: ");
    scanf("%d",&rollNo);

    printf("\nWelcome Back! %s, Roll No %d",name,rollNo);

}