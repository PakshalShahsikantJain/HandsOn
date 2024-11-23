/*
    Author : Pakshal Shashikant Jain 
    Date : 13/09/2023
    Program : Write a program which accepts 2 strings from user and concat N
              characters of second string after first string.Value of N should be
              accepted from user. (Implement strncat() function).

              Note : If third parameter is greater than the size of second string then
              concat whole string after first string.

              Input : "Marvellous Infosystems"
                      "Logic Building"
                       5
              Output : "Marvellous Infosystems Logic"
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Concat Second String After First String Till Entered Size
void StrNCpyX(char *src,char *dest,int icnt)
{
    //Handeling Conditions if Entered Strings are NULL
    if((src == NULL)&&(dest == NULL))
    {
        return;
    }

    //Logic To Concat String Till Entered Size
    while(*src != '\0')
    {
        src++;
    }

    *src = ' ';
    src++;

    while((*dest != '\0')&&(icnt != 0))
    {
        *src = *dest;
        dest++;
        src++;
        icnt--;
    }

    *src = '\0';
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[50] = {'\0'};
    char brr[30] = {'\0'};
    int iCnt = 0;

    printf("Jay Ganesh...\n");

    //Taking Input from user
    printf("Enter First String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter Second String\n");
    scanf(" %[^'\n']s",brr);

    printf("Enter length Till you Want To Concat String in First String \n");
    scanf("%d",&iCnt);

    //Call To StrNCpyX Function
    StrNCpyX(arr,brr,iCnt);

    //Printing Copied String
    printf("Copied String is : %s",arr);

    return 0;
}