/*
    Author : Pakshal Shashikant Jain 
    Date : 13/08/2023
    Program : Write a program which accept string from user and toggle the case.
              
              Input : "Marvellous Multi OS"
              Output : mARVELLOUS mULTI os
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Toggle Case
void StrToggle(char *str)
{
    if(str == NULL)
    {
        return;
    }

    //Logic To Toggle Case
    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if((*str >= 'a')&&(*str <= 'z'))
        {
            *str = *str - 32;
        }

        *str++;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[20] = {'\0'};

    printf("Jay Ganesh....\n");

    //Taking Input from user
    printf("Enter One String \n");
    scanf("%[^'\n']s",arr);

    //Call To StrToggle Function
    StrToggle(arr);

    //Printing Modified String
    printf("Modified String is : %s",arr);

    return 0;
}