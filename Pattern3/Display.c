/*
    Author : Pakshal Jain
    Date : 27/10/2022
    Program : To Accept number from user and print that number of $ & * on screen.
*/

//Required Libraries
#include<stdio.h>

//Function To Display Pattern
void Display(int No)
{
    int i = 0;

    printf("Displaying Below Pattern\n");
    for(i = 0;i < No;i++)
    {
        printf("$\t*\t");
    }
}

//Main Function
int main() 
{
    int No = 0;

    printf("Ganapati Bappa Morya...\n");

    //Taking input From user
    printf("Enter One Number..\n");
    scanf("%d",&No);

    //Call To Display Function
    Display(No);

    return 0;
}