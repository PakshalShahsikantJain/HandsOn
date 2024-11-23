/*  
    Author : Pakshal Shashikant Jain 
    Date : 15/08/2023
    Program : Write a program which accept string from user and display only
              digits from that string.

              Input : “marve89llous121”
              Output : 89121
              Input : “Demo”
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Digits from Entered String
void DisplayDigit(char *str)
{
    if(str == NULL)
    {
        return;
    }

    printf("Ouput : ");

    //Logic To  Display Digit
    while(*str != '\0')
    {
        if((*str >= '0')&&(*str <= '9'))
        {
            printf("%c",*str);
        }
        str++;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[20];

    printf("Jay Ganesh....\n");

    //Taking Input from user
    printf("Enter String \n");
    scanf("%[^'\n']s",arr);

    //Call To DisplayDigit Function
    DisplayDigit(arr);
    
    return 0;
}