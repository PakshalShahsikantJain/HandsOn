/*
    Author : Pakshal Jain
    Date : 19/10/2022
    Program : To Cout Frequency of Digits Between 3 and 7 in Entered Number
*/

//Requried Libraries
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Count Frequency
int Frequency(int No) 
{
    int Digit = 0;
    int icnt = 0;

    //Logic    
    while(No != 0)
    {
        Digit = No % 10;
        if((Digit > 3)&&(Digit < 7))
        {
            icnt++;
        }
        No = No / 10;
    }

    return icnt;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int iret = 0;

    printf("Jay Ganesh...\n");

    //Taking Input From User
    printf("Enter One Number\n");
    scanf("%d",&No);

    //Call To Frequency Function
    iret = Frequency(No);

    printf("Count Frequency of Digits Between 3 and 7 is : %d",iret);

    return 0;
}