/*
    Author : Pakshal Jain
    Date : 10/09/2022
    Program : To Print Marvellous Entered Number of Times
*/

//Including Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////

//Function to Print Marvellous 
void Display(int No) 
{
    int i = 0;

    printf("Printing Marvellous %d Times...\n",No);
    for(i = 0;i < No;i++)
    {
        printf("Marvellous\n");
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    printf("Ganpati Bappa Morya.....\n");
    
    int No = 0;

    printf("Enter Number......\n");
    scanf("%d",&No);

    Display(No);
    
    return 0;
}