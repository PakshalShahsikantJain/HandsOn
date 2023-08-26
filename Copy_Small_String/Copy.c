/*
    Author : Pakshal Shashikant Jain
    Date : 25/08/2023
    Program : Write a program which accept string from user and copy small
              characters of that string into another string.

              Input : "Marvellous multi OS"
              Output : "arvellous multi"
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

//Function To Copy Small String From Entered String
void StrCpySmall(char *src,char *dest)
{
    //Handeling Condition if Strings are NULL
    if((src == NULL)&&(dest == NULL))
    {
        return;
    }

    //Logic To Copy Small Characters From Entered String
    while(*src != '\0')
    {
        if(*src == ' ')
        {
            *dest = ' ';    
            dest++;    
        }

        if((*src >= 'a')&&(*dest <= 'z'))
        {
            *dest = *src;
            dest++;
        }
        
        src++;
    }
    *dest = '\0';
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};

    printf("Jay Ganesh....\n");

    //Taking Input from user    
    printf("Enter One String...\n");
    scanf("%[^'\n']s",arr);

    //Call To StrCpySmall Function
    StrCpySmall(arr,brr);

    //Printing Copied String 
    printf("Small Letters Copied From String is : %s",brr);

    return 0;
}