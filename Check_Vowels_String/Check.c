/*
    Author : Pakshal Shashikant Jain 
    Date : 09/08/2023
    Program : Write a program which accept string from user and check whether
              it contains vowels in it or not.

             Input : "marvellous"
             Output : TRUE

             Input : "Demo"
             Output : TRUE

             Input : "xyz"
             Output : FALSE 
 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//Function To Check String Contains Vowels or not
BOOL Check(char *str) 
{
    if(str == NULL)
    {
        return -1;
    }

    //Logic To Find
    while(*str != '\0')
    {   
        if((*str >= 'A')&&(*str <= 'Z'))
        {
            *str = *str + 32;
        }

        if((*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u'))
        {
            break;
        }
        str++;
    }

    if((*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u'))
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[20] = {'\0'};
    BOOL bret = FALSE;

    printf("Jay Ganesh.....\n");

    //Enter One String 
    printf("Enter String To Check \n");
    scanf("%[^'\n']s",arr);

    //Call To Check Function
    bret = Check(arr);

    //Handeling Conditions According To Output 
    if(bret == TRUE)
    {
        printf("String Contains Vowels");
    }
    else
    {
        printf("String Does Not Contains Vowels");
    }

    return 0;
}