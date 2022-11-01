/*
    Author : Pakshal Jain
    Date : 17/10/2022
    Program : To Count Frequency of 2 in Entered Number
*/

//Required Libraries
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Count Frequency of 2
int Count(int No)
{
    int icnt = 0;
    int Digit = 0;

    //Logic To Check Frequency of 2 in Entered Number
    while(No != 0)
    {
        Digit = No % 10;
        if(Digit == 2)
        {
            icnt++;
        }
        No = No / 10;
    }

    return icnt;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    int iret = 0;

    printf("Jay Ganesh...\n");
    
    //Taking Input From User
    printf("Enter One Number\n");
    scanf("%d",&No);

    //Call To Count Function
    iret = Count(No);

    //Printing Frequency of Two
    printf("Frequency of 2 is : %d",iret);

    return 0;
}