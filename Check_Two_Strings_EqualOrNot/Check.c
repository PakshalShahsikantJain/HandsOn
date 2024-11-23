/*
    Author : Pakshal Shashikant Jain 
    Date : 14/09/2023
    Program : Write a program which 2 strings from user and check whether
              contents of two strings are equal or not. (Implement strcmp()
              function).

              Input : "Marvellous Infosystems"
                      "Marvellous Infosystems"
              Output : TRUE 
*/

//Required Libraries
#include<stdio.h>

//Defining Macros
#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Compare Two Strings
BOOL StrCmpX(char *src,char *dest)
{
    if((src == NULL)&&(dest == NULL))
    {
        return -1;
    }

    //Logic To Compare
    while((*src != '\0')&&(*dest != '\0'))
    {
        if(*src != *dest)
        {
            break;
        }
        src++;
        dest++;
    }

    if(*src != *dest)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

///////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    BOOL bret = FALSE;
    char arr[50] = {'\0'};
    char brr[30] = {'\0'};

    printf("Jay Ganesh.....\n");
    
    //Taking Input from user
    printf("Enter First String : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter Second String : \n");
    scanf(" %[^'\n']s",brr);

    //Call To StrCmpX Function
    bret = StrCmpX(arr,brr);

    //Handeling Condition if bret is TRUE
    if(bret == TRUE)
    {
        printf("Both String are Equal \n");
    }
    //Handeling Condition if bret is FALSE
    else
    {
        printf("Both String are Not Equal\n");
    }

    return 0;
}