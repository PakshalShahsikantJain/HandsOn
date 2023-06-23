/*
    Author : Pakshal Jain
    Date : 10/10/2022
    Program : To Check Entered Two numbers are Equal or Not
*/

//Requrired Libraries
#include<stdio.h>

//Defining 1 as True and 0 as False
#define TRUE 1
#define FALSE 0

//Converting Type int To Bool
typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check
BOOL Check(int No,int No2)
{
    //Logic To Check Entered Number is Equal or Not 
    if(No == No2)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    int No2 = 0;

    BOOL bret = FALSE;

    printf("Jay ganesh....\n");
    
    printf("Enter One Number...\n");
    scanf("%d",&No);

    printf("Enter Second Number...\n");
    scanf("%d",&No2);

    //Call To Check Function
    bret = Check(No,No2);

    if(bret == TRUE)
    {
        printf("Entered Numbers %d and %d are Equal\n",No,No2);
    }
    else 
    {
        printf("Entered Numbers %d and %d are Not Equal\n",No,No2);
    }
    
    return 0;
}