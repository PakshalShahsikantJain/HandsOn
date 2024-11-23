/*
    Author : Pakshal Shashikant Jain
    Date : 15/09/2023
    Program : Write a program which 2 strings from user and check whether first
              N contents of two strings are equal or not. (Implement strcmp()
              function).

              Input : "Marvellous Infosystems"
                      "Marvellous Logic Building"
                      10
              Output : TRUE
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Compare First N Contents of Two String
BOOL StrNCmpX(char *src,char *dest,int icnt)
{
    if((src == NULL)&&(dest == NULL))
    {
        return -1;
    }

    //Logic To Compare
    while(((*src != '\0')&&(*dest != '\0'))&&(icnt != 0))
    {
        if(*src != *dest)
        {
            break;
        }
        src++;
        dest++;
        icnt--;
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int icnt = 0;
    BOOL bret = FALSE;
    char arr[50] = {'\0'};
    char brr[30] = {'\0'};

    printf("Jay Ganesh....\n");

    //Taking Input from user
    printf("Enter First String :\n");
    scanf("%[^'\n']s",arr);

    printf("Enter Second String :\n");
    scanf(" %[^'\n']s",brr);

    printf("Enter One Size \n");
    scanf("%d",&icnt);

    //Call To StrNCmpX Function
    bret = StrNCmpX(arr,brr,icnt);

    //Handeling Condition if bret is TRUE
    if(bret == TRUE)
    {
        printf("First N Contents of Both Strings are Equal");
    }
    //Handeling Condition if bret is FALSE
    else
    {
        printf("First N Contents of Both Strings are Not Equal");
    }

    return 0;
}