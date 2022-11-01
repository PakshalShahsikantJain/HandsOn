/*
    Author : Pakshal Jain
    Date : 17/09/2022
    Program : To Print Hello if Entered Number is Less 10 or else Print Demo
*/

//Required Libraries
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Expected Output
void Display(int No) 
{
    if(No < 10)
    {
        printf("Hello\n");
    }
    else 
    {
        printf("Demo\n");
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;

    printf("Jay Ganesh....\n");

    printf("Enter One Number.....\n");
    scanf("%d",&No);

    Display(No);
    
    return 0;
}