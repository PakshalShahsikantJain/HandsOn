/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Author : Pakshal Shashikant Jain
//  Date : 09/11/2024
//  Program : Program to check given strings are Anagram or not
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//Required Libraries
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

//Giving new name to datatype int as BOOL
typedef int BOOL;

//Function To Check Given Strings are anagram Strings or not

/*
    Function name: ChkAngaram
    Parameters: char *arr(First String),char *brr(Second String)
    Return value: boolean value (TRUE/FALSE)
    Purpose: To Check given string is anagram or not
*/
BOOL ChkAnagram(char *arr,char *brr) 
{
    int i = 0;
    int icnt = 0;
    char *temp = arr;
    char *temp2 = brr;

    //Logic To Check strings are anagram or not
    while(*temp != '\0')
    {
        icnt = 0;
        while(*temp2 != '\0')
        {
            if((*temp >= 'A')&&(*temp <= 'Z'))
            {
                *temp = *temp + 32;
            } 
            else if((*temp2 >= 'A')&&(*temp2 <= 'Z'))
            {
                *temp2 = *temp2 + 32;
            }

            if(*temp == *temp2)
            {
                icnt++;
            }

            temp2++;
        }
        
        if(icnt < 1)
        {
            // printf("%d\n",icnt);
            break;
        }

        temp2 = brr;
        temp++;
    } 

    if(icnt < 1) 
    {
        return FALSE;
    }
    else 
    {
        return TRUE;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Entry point Function
int main() 
{
    char str1[50] = {'\0'};
    char str2[50] = {'\0'};
    BOOL bret = FALSE;

    printf("Jay Ganesh....\n");

    //Taking inputs from user 
    printf("Enter One String\n");
    scanf("%[^'\n']s",str1);

    printf("Enter Second String\n");
    scanf(" %[^'\n']s",str2);

    // printf("%s",str1);
    // printf("%s\n",str2);

    //Call to ChkAnagram Function
    bret = ChkAnagram(str1,str2);

    if(bret == TRUE)
    {
        printf("Strings are anagram\n");
    }
    else 
    {
        printf("Strings are not anagram\n");
    }

    return 0;
}