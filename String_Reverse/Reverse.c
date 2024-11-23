/*
    Author : Pakshal Shashikant Jain 
    Date : 11/08/2023
    Program : Write a program which accept string from user and display it inn
              reverse order.

              Input : "MarvellouS"
              Output : "SuollevraM"
*/

////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////

//Function To Reverse String 
void StrRev(char *str)
{
    //Local Variable 
    int iStart = 0;
    int iEnd = 0;
    char temp = '\0';

    if(str == NULL)
    {
        return;
    }

    //Logic To Reverse The String
    while(str[iEnd] != '\0')
    {
        iEnd++;
    }

    iEnd--;

    while(iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[20];

    printf("Jay Ganesh.....\n");

    //Taking Input from user
    printf("Enter String You Want \n");
    scanf("%[^'\n']s",arr);

    //Call To StrRev Function
    StrRev(arr);

    //Printing Reverse String 
    printf("Reverse String is : %s",arr);

    return 0;
}