/*
    Author : Pakshal Jain
    Date : 24/09/2022
    Program : To Display Factors of Entered Number
*/

//Required Libraries
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//function to Display Factors of Number
void Display(int No)
{
    int i = 0;

    //Filter To Convert Negative number to Positive
    if(No < 0)
    {
        No = -No;
    }

    printf("Factors of Entered Number is As Follows....\n");
    for(i = 1;i <= No;i++)
    {
        if(No % i == 0)
        {
            printf("%d\t",i);
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;

    printf("Ganapti Bappa Morya...\n");
 
    printf("Enter One Number...\n");
    scanf("%d",&No);

    //Call To Display Function
    Display(No);

    return 0;
}