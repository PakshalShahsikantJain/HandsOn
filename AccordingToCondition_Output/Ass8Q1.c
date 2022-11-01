/*
    Author : Pakshal Jain
    Date : 21/10/2022
    Program : To accept number from user and if number is less than 50 then print small, 
              if it is greater than 50 and less than 100 then print medium, 
              if it is greater than 100 then print large
*/

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Desired Output
void Number(int No)
{
    //Logic

    //Handeling Condition if Number is Less Than 50
    if(No < 50)
    {
        printf("Small\n");
    }
    //Handeling Condition if Number is Greater Than 50 and Less Than 100
    else if((No >= 50)&&(No <= 100))
    {
        printf("Medium\n");
    }
    //Handeling Condition if Number is Greater Than 100
    else if(No > 100)
    {
        printf("Large\n");
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;

    printf("Ganapati Bappa Morya...\n");

    //Taking Input From User
    printf("Enter One Number\n");
    scanf("%d",&No);

    //Call To Number Function
    Number(No);

    return 0;
}