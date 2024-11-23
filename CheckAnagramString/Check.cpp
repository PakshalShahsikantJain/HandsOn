/*
    Author: Pakshal Shashikant Jain
    Date: 09/11/2024
    Program: Program to check given strings are Anagram or not
*/

//Required libraries
using namespace std;
#include<iostream>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//Class To Check Entered Strings are anagram are not

//Start of class
class String 
{
    //Characteristics of class
    private : 
        char *arr;
        char *brr;

    //Constructor of class
    public :
        String(char *Arr,char *Brr) 
        {
            arr = Arr;
            brr = Brr;
        }

    /*
        Behaviour name: ChkAnagram
        parameters: - 
        return value: TRUE/FALSE(BOOLEAN Value)
        purpose: To Check entered two strings are anagram or not
    */
    BOOL ChkAnagram() 
    {
        int icnt = 0;
        char *temp = brr;

        //logic to check strings are anagram or not
        while(*arr != '\0')
        {
            icnt = 0;
            while(*temp != '\0')
            {
                if((*arr >= 'A')&&(*arr <= 'Z')) 
                {
                    *arr = *arr + 32;
                }
                else if((*temp >= 'A')&&(*temp <= 'Z')) 
                {
                    *temp = *temp + 32;
                }

                if(*arr == *temp)
                {
                    icnt++;
                }

                temp++;
            }

            if(icnt < 1)
            {
                // printf("%d\n",icnt);
                break;
            }

            temp = brr;
            arr++;
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
};//End of class

//////////////////////////////////////////////////////////////////////////////////////////////////

//Entry point function
int main() 
{
    char str[50] = {'\0'};
    char str2[50] = {'\0'};
    BOOL bret = FALSE;

    cout<<"Jay Ganesh....\n";

    //Taking input from user
    printf("Enter First String\n");
    scanf("%[^'\n']s",str);

    printf("Enter Second String\n");
    scanf(" %[^'\n']s",str2);

    // printf("%s",str);
    // printf("\n %s",str2);

    //Creating object of string class
    String *sobj = new String(str,str2);

    //Call to ChkAnagram function
    bret = sobj->ChkAnagram();

    if(bret == TRUE)
    {
        cout<<"Entered Strings are anagram strings\n";
    }
    else 
    {
        cout<<"Entered Strings are not anagram strings\n";
    }

    delete sobj;

    return 0;
}