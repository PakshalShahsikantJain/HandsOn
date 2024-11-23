/*
    Author : Pakshal Jain
    Date : 20/09/2022
    Program : Accept one number from user and print that number of even numbers on screen
*/

//Required Libraries
#include<stdio.h>

//Function To Dispaly Even numbers
void Display(int No)
{
    int i = 0;
    int res = 0;

    printf("Printing %d Even Numbers : \n",No);
    for(i = 1;i <= No;i++)
    {
        res = i * 2;
        printf("%d\t",res);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;

    printf("Ganpati Bappa Morya\n");

    printf("Enter Any Number You Want.....\n");
    scanf("%d",&No);

    //Call To Display Function
    Display(No);

    return 0;
}