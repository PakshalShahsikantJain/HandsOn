/*
    Author : Pakshal Shashikant Jain
    Date : 29/08/2023
    Program : Write a program which accept string from user and copy that
              characters of that string into another string by converting all small
              characters into capital case.

              Input : "Marvellous Python 2"
              Output : "MARVELLOUS PYTHON 2" 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Copy String After Converting Small Case Letter To Capital Case Letter
void StrCpyCap(char *src,char *dest)
{
    //Handling Condition If Pointers Are NULL
    if((src == NULL)&&(dest == NULL))
    {
        return;
    }

    //Logic To Copy String 
    while(*src != '\0')
    {
        if((*src >= 'a')&&(*src <= 'z'))
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

    //Call To StrCpyCap Function
    StrCpyCap(arr,brr);

    //Printing Copied String
    printf("String Copied after Converting Small Case To Capital Case is : %s",brr);

    return 0;
}