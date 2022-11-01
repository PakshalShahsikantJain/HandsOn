/*
    Author : Pakshal Jain
    Date : 14/09/2022
    Program : Accept One Number And Print That Number of * on Screen 
*/

//Required Libraries
#include<stdio.h>

//function To Display *
void Display(int No)
{
    int i = 0;

    printf("Printing * %d times : \n",No);
    for(i = 0;i < No;i++)
    {
        printf("*\t");
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int No = 0;

    printf("Ganpati Bappa Morya......\n");
    
    printf("Enter One Number.....\n");
    scanf("%d",&No);

    Display(No);

    return 0;
}