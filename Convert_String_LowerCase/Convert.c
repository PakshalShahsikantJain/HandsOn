/*
    Author : Pakshal Shashikant Jain 
    Date : 12/08/2023
    Program : Write a program which accept string from user and convert it into
              lower case.

              Input : "Marvellous Multi OS"
              Output : marvellous multi os 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Convert Case of String 
void Convert(char *str)
{
    if(str == NULL)
    {
        return;
    }

    //Logic To Convert Case
    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
            *str = *str + 32;
        }

        *str++;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[20];

    printf("Jay Ganesh....\n");
    
    //Taking Input From user
    printf("Enter One String \n");
    scanf("%[^'\n']s",arr);

    //Call To Conert Function
    Convert(arr);

    //Printing Converted String
    printf("Converted String is : %s",arr);

    return 0;
}