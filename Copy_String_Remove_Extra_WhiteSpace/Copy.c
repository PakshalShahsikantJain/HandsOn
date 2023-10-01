
/*
    Author : Pakshal Shshikant Jain
    Date : 30/09/2023
    Program : Write a program which accept string from user and copy the
              contents into another string by removing extra white spaces.
                
              Input : Marvellous        multi          OS”
              Output : Marvellous multi OS”

*/

//////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////

//Behaviour of Class To Copy contents of String into another by removing extra white spaces
void StrCpyX(char *src,char *dest)
{
    if((src == NULL)&&(dest == NULL))
    {
        return;
    }

    //Logic To Copy Contents
    while(*src != '\0')
    {
        if(*src == ' ')
        {
            while((*src == ' ')&&(*src != '\0'))
            {
                src++;
            }
            *dest = ' ';
            dest++;
        }

        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
}

////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[50] = {'\0'};
    char brr[50] = {'\0'};

    printf("Jay Ganesh....\n");

    //Taking Input from user    
    printf("Enter One String \n");
    scanf("%[^'\n']s",arr);

    //Call To StrCpyX Function
    StrCpyX(arr,brr);

    //Printing Copied String
    printf("String After Removing White Space is : %s",brr);

    return 0;
}
