/*
    Author : Pakshal Jain
    Date : 19/10/2022
    Program : To Count Frequecy of Digits in Entered Number
*/

//Required Libraries
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function TO Count
int CountEvenDigits(int No)
{
    int Digit = 0;
    int icnt = 0;

    //Logic
    while(No != 0)
    {
        Digit = No % 10;
        if(Digit % 2 == 0)
        {
            icnt++;
        }
        No = No / 10;
    }

    return icnt;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    int iret = 0;

    printf("Jay Ganesh....\n");
    
    printf("Enter One Number..\n");
    scanf("%d",&No);

    //Call To CountEvenDigits
    iret = CountEvenDigits(No);

    printf("Frequency of Even Digits is : %d\n",iret);

    return 0;
}