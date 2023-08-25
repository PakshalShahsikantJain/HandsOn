/*
    Author : Pakshal Shashikant Jain
    Date : 23/08/2023
    Program : Write a program which accept string from user and copy the
              contents of that string into another string. (Implement strcpy() function)
              
              Input : “Marvellous Multi OS”
              Output : “Marvellous Multi OS” in another string 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Librararies
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Copy String into Another String 
void StrCpyX(char *src,char *dest)
{
    if((src == NULL)&&(dest == NULL))
    {
        return;
    }
    
    //Logic To Copy String
    while(*src != '\0')
    {
        *dest = *src;

        src++;
        dest++;
    }

    *dest = '\0';
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[20] = {'\0'};
    char brr[20] = {'\0'};

    printf("Jay Ganesh....\n");

    //Taking Input from user
    printf("Enter One String\n");
    scanf("%[^'\n']s",arr);

    //Call To StrCpyX Function
    StrCpyX(arr,brr);

    //Printing String Copied into Another String 
    printf("String Copied into Another String is : %s",brr);

    return 0;
}