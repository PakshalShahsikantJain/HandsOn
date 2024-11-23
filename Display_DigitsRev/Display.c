/*
    Author : Pakshal Jain
    Date : 15/10/2022
    Program : To Print Digits of Entered in Reverse order
*/

//Required Libraries
#include<stdio.h>

//Function To Display Digits in Reverse
void Display(int No)
{
    int Digit = 0;

    printf("Printing  Digits of Entered Number in Reverse Order : \n");
    //Logic To Print Digits
    while(No != 0)
    {
        Digit = No % 10;
        printf("%d\n",Digit);
        No = No / 10;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;

    printf("Jay Ganesh....\n");
    
    printf("Enter One Number\n");
    scanf("%d",&No);

    //Call To Display Function
    Display(No);

    return 0;
}