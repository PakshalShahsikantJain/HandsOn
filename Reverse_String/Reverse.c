/*
    Author : Pakshal Shashikant Jain 
    Date : 21/08/2023
    Program : Write a program which accept string from user reverse that string
              in place.

              Input : “abcd”
              Output : “dcba”

              Input : “abba”
              Output : “abba” 
*/

///////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////

//Function To Reverse Entered String
char Reverse(char *str)
{
    int istart = 0;
    int iend = 0;
    char temp = '\0';

    //Logic To Reverse String
    while(str[iend] != '\0')
    {
        iend++;
    }

    iend--;

    while(istart < iend)
    {
        temp = str[istart];
        str[istart] = str[iend];
        str[iend] = temp;

        istart++;
        iend--;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    char arr[20] = {'\0'};

    printf("Jay Ganesh.....\n");

    //Taking Input from user
    printf("Enter One String...\n");
    scanf("%[^'\n']s",arr);

    //Call To Reverse String
    Reverse(arr);

    //Printing Reversed String
    printf("Modified String is : %s",arr);

    return 0;
}