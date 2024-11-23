/*
    Author : Pakshal Jain
    Date : 27/10/2022
    Program : To Accept Number From User And Print Number Line of Entered Number
*/

//Required Libraries
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Number Line
void Display(int No)
{
    int i = 0;

    //Logic
    
    printf("Printing Number Line : \n");
    for(i = -No;i <= No;i++)
    {
        printf("%d\t",i);
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;

    printf("Jay Ganesh....\n");
    
    //Taking Input From user
    printf("Enter One Number\n");
    scanf("%d",&No);

    //Call To Display Function
    Display(No);

    return 0;
}