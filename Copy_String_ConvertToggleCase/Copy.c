/*
    Author : Pakshal Shashikant Jain
    Date : 29/08/2023
    Program : Write a program which accept string from user and copy that
              characters of that string into another string by toggling the case.

              Input : "Marvellous Python 2"
              Output : "mARVELLOUS pYTHON 2"  
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Copy String After Toggling Case According To Problem Statement
void StrCpyToggle(char *src,char *dest)
{
    //Handling Condition If Pointers Are NULL
    if((src == NULL)&&(dest == NULL))
    {
        return;
    }

    //Logic To Copy String 
    while(*src != '\0')
    {
        if((*src >= 'A')&&(*src <= 'Z'))
        {
            *src = *src + 32;
        }
        else if((*src >= 'a')&&(*src <= 'z'))
        {
            *src = *src - 32;
        }

        *dest = *src;
        dest++;
        src++;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};

    printf("Jay Ganesh....\n");

    //Taking Input from user
    printf("Enter One String \n");
    scanf("%[^'\n']s",arr);

    //Call To StrCpyToggle Function
    StrCpyToggle(arr,brr);

    //Printing Copied String
    printf("String Copied after Toggling Case is : %s",brr);

    return 0;
}