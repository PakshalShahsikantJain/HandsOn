/*
    Author : Pakshal Jain
    Date : 27/10/2022
    Program : To accept number from user and print numbers till that number
*/

//Required Libraries
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Required Output
void Display(int No)
{
    int i = 0;

    if(No < 0)
    {
        No = -No;
    }

    for(i = 1;i <= No;i++)
    {
        printf("%d\t",i);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;

    printf("Jay Ganesh..\n");
    
    //Taking Input From User
    printf("Enter One Number...\n");
    scanf("%d",&No);

    //Call To Display Function
    Display(No);

    return 0;
}