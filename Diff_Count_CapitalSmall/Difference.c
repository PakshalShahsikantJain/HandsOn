/*
    Author : Pakshal Shashikant Jain 
    Date : 08/08/2023
    Program : Write a program which accept string from user and return
              difference between frequency of small characters and frequency of
              capital characters.

              Input : “MarvellouS”
              Output : 6 (8-2) 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Difference
int Difference(char *str)
{
    int icnt = 0;
    int icnt2 = 0;
    int Diff = 0;

    //Logic To Calculate Difference
    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
            icnt++;
        }
        else if((*str >= 'a')&&(*str <= 'z'))
        {
            icnt2++;
        }
        str++;
    }

    Diff = icnt2 - icnt;

    return Diff;
}

/////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    char arr[20];
    int iret = 0;

    printf("Jay Ganesh.....\n");

    //Taking input from user
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    //Call To Difference Function
    iret = Difference(arr);

    //Printing Difference Calculated
    printf("Difference Between Frequency of Small Characters and Capital Letters is : %d",iret);

    return 0;
}