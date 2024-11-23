/*
    Author : Pakshal Jain
    Date : 13/09/2022
    Program : To Find Entered Number is Divisible By 5 Or Not
*/

//Required Imports
#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL Check(int No)
{
    if(No % 5 == 0)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;
    BOOL bret = FALSE;

    printf("Jay Ganesh.....\n");

    printf("Enter One Number...\n");
    scanf("%d",&No);

    bret = Check(No);

    if(bret == TRUE)
    {
        printf("Number is Divisible By 5\n");
    }
    else 
    {
        printf("Number is Not Divisible By 5\n");
    }

    return 0;
}