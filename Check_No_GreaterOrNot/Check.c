/*
    Auhthor : Pakshal Jain
    Date : 09/10/2022
    Program : To Accept Number From User And Check Whether Entered Number is Greater than 100 or not
*/

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define True 1 
#define False 0

//Converting integer datatype to Bool
typedef int Bool;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Bool check(int No)
{
    if(No > 100)
    {
        return True;
    }
    else 
    {
        return False;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;
    Bool bret = False;

    printf("Jay Ganesh....\n");
    
    printf("Enter One Number To Check Whether Number is Greater Than 100 or Not\n");
    scanf("%d",&No);

    //Call To Check Function
    bret = check(No);

    if(bret == True)
    {
        printf("Entered Number %d is Greater than 100\n",No);
    }
    else 
    {
        printf("Entered Number %d is Smaller Than 100\n",No);
    }

    return 0;
}