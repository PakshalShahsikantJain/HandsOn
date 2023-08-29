/*
    Author : Pakshal Jain 
    Date : 28/08/2023
    Program : Write a program which accept string from user and copy that
              characters of that string into another string by removing all white
              spaces.

              Input : "Marvel lous Pyth on"
              Output : "MarvellousPython"
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Copy String After Removing White Spaces
void StrCpyX(char *src,char *dest)
{
    //Handeling Conditions if Address To Which Pointer is Pointing To is NULL
    if((src == NULL)&&(dest == NULL))
    {
        return;
    }

    //Logic To Copy String After Removing White Spaces
    while(*src != '\0')
    {
        if(*src != ' ')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }

    *dest = '\0';
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};

    printf("Jay Ganesh....\n");

    //Taking Input from user
    printf("Enter One String....\n");
    scanf("%[^'\n']s",arr);

    //Call To StrCpyX Function
    StrCpyX(arr,brr);

    //Printing Copied string
    printf("String Copied After Removing White Space is : %s",brr);

    return 0;
}