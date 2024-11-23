/*
    Author : Pakshal Shashikant Jain 
    Date : 06/08/2023
    Program : Write a program which accept string from user and count number of
              capital characters.

              Input : “Marvellous Multi OS”
              Output : 4 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraires
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Count Capital Letters From Entered String
int Count(char *str)
{
    int icnt = 0;

    //Filter
    if(str == NULL)
    {
        return -1;        
    }

    //Logic To Count Capital Letters
    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
           icnt++; 
        }
        str++;
    }

    return icnt;
}

/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iret = 0;
    char arr[20];

    printf("Jay Ganesh.....\n");

    //Taking Input from user
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    //Call TO Count Function
    iret = Count(arr);

    //Printing Count of Capital Letters From Entered String 
    printf("Count Of Capital Letter is : %d",iret);

    return 0;
}