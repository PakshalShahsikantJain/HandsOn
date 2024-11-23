/*
    Author : Pakshal Jain
    Date : 20/10/2022
    Program : To Calculate Differecnce Between Summation of Even and Odd Digits of Entered Number
*/

//Required Libraries
#include<stdio.h>

//Function To Calucalte Difference
int Difference(int No)
{
    int Diff = 0;
    int Digits = 0;
    int Sum = 0;
    int Sum2 = 0;

    //Logic TO Calculate Difference
    while(No != 0)
    {
        Digits = No % 10;
        if(Digits % 2 == 0)
        {
            Sum = Sum + Digits;
        }
        else if(Digits % 2 != 0)
        {
            Sum2 = Sum2 + Digits;
        }
        No = No / 10;
    }

    Diff = Sum - Sum2;

    return Diff;
}

//Main Function
int main() 
{
    int No = 0;
    int iret = 0;

    printf("Jay Ganesh...\n");

    //Taking Input From User    
    printf("Enter One Number\n");
    scanf("%d",&No);

    //Call To Difference Function
    iret = Difference(No);

    //Printing Difference Calculated
    printf("Difference Between Summation of Even and Odd Digits is : %d",iret);

    return 0;
}