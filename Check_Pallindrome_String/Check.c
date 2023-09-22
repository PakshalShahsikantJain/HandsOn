/*
    Author : Pakshal Shashikant Jain 
    Date : 21/09/2023
    Program : Accept string from user and check whether the string is palindrome    
              or not without considering its case.

              Input : “1abccBA1”
              Output : TRUE
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check String is Pallindrome or not
BOOL StrPallindrome(char *str)
{
    char *first = NULL;
    char *last = NULL;

    if(str == NULL)
    {
        return -1;
    }

    first = str;
    last = str;

    while(*last != '\0')
    {
        last++;
    }

    last--;

    //logic to check
    while(first <= last)
    {
        if((*first >= 'A')&&(*first <= 'Z'))
        {
            *first = *first + 32;
        }

        if(last != first)
        {            
            if((*last >= 'A')&&(*last <= 'Z'))
            {
                *last = *last + 32;
            }
        }

        if(*first != *last)
        {
            break;
        }

        first++;
        last--;
    }

    if(*first != *last)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

//Main Function
int main()
{
    char arr[50] = {'\0'};
    BOOL bret = FALSE;

    printf("Jay Ganesh....\n");

    //Taking Input from user
    printf("Enter One string : \n");
    scanf("%[^'\n']s",arr);

    //Call To StrPallindrome Function
    bret = StrPallindrome(arr);

    //Handeling Condition if bret is true
    if(bret == TRUE)
    {
        printf("String is Pallindrome \n");
    }
    else
    {
        printf("String is Not Pallindrome \n");
    }

    return 0;
}