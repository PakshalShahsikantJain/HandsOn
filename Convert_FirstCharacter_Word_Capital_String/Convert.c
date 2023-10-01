/*
    Author : Pakshal Shashikant Jain
    Date : 30/09/2023
    Program : Write a program which accept string from user and replace each
              occurrence of first character of each word into capital case.
    
              Input : "marvellous infosystems by Piyush khairnar"
              Output : "Marvellous Infosystems By Piyush Khairnar"
*/

////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Behaviour of class To Replace occurance of first Character of Word into Capital Case
void StrCpy(char *str)
{
    if(str == NULL)
    {
        return;
    }

    //Logic To Convert
    if((*str >= 'a')&&(*str <= 'z'))
    {
        *str = *str - 32;
    }
    str++;

    while(*str != '\0')
    {
        if(*str == ' ')    
        {
            while((*str == ' ')&&(*str != '\0'))
            {
                str++;
            }

            if((*str >= 'a')&&(*str <= 'z'))
            {
                *str = *str - 32;
            }
        }
        str++;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[50] = {'\0'};

    printf("Jay Ganesh....\n");
    
    //Taking input from user
    printf("Enter One String \n");
    scanf("%[^'\n']s",arr);

    //Call To StrCpy Function
    StrCpy(arr);

    //Printing modified String
    printf("Modified String is : %s",arr);

    return 0;
}