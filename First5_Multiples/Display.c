/*
    Author : Pakshal Jain
    Date : 28/10/2022
    Program : To Calculate First Five Multiples of Entered Number
*/

//Required Libraries
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Multiples
void Display(int No)
{
    int i = 0;
    int Mult = 0;

    //Logic To Print Multiples
    printf("Printing First Five Multiple of Entered Number : \n");
    for(i = 1;i <= 5;i++)
    {
        Mult = No * i;

        printf("%d\t",Mult);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;

    printf("Jay Ganesh....\n");
    
    //Taking Input From User
    printf("Enter One Number...\n");
    scanf("%d",&No);

    //Call To Display Function
    Display(No);

    return 0;
}