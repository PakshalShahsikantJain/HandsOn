/*
    Author : Pakshal Shashikant Jain 
    Date : 04/08/2023
    Program : Accept character from user. If it is capital then display all the
              characters from the input characters till Z. If input character is small
              then print all the characters in reverse order till a. In other cases
              return directly.

              Input : Q
              Output : Q R S T U V W X Y Z

              Input : m
              Output : m l k j i h g f e d c b a

              Input : 8
              Output : 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

//Function To Display Alphabets According To Given Conditions
void Display(char ch)
{
    int i = 0;

    //Logic
    printf("Printing Alphabets According To Given Conditions : \n");
    if((ch >= 'A')&&(ch <= 'Z'))
    {
        for(i = ch;i <= 'Z';i++)
        {
            printf("%c ",i);
        }
    }
    else if((ch >= 'a')&&(ch <= 'z'))
    {
        for(i = ch;i >= 'a';i--)
        {
            printf("%c ",i);
        }
    }
    else
    {
        return;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char ch = '\0';

    printf("Jay Ganesh....\n");

    //Taking input from user
    printf("Enter One Character To Display Alphabet According To Given Conditions\n");
    scanf("%c",&ch);

    //Call To Display Function
    Display(ch);

    return 0;
}