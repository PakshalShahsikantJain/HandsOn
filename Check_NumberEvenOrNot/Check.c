/*
    Author : Pakshal Jain
    Date : 18/09/2022
    Program : To Check Whether Entered Number is Even or Not
*/

//Required Libraries
#include<stdio.h>

#define TRUE 1
#define FALSE 0

//Converting Type integer To Bollean
typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//User Defined Function To Check Number is Even or Not
BOOL Check(int No)
{
    if(No % 2 == 0)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;
    
    BOOL bret = FALSE;

    printf("Jay Ganesh....\n");
    
    printf("Enter One Number...\n");
    scanf("%d",&No);

    //Call To Check Function
    bret = Check(No);

    if(bret == TRUE)
    {
        printf("Entered Number is Even....\n");
    }  
    else 
    {
        printf("Entered Number is ODD....\n");
    }

    return 0;
}