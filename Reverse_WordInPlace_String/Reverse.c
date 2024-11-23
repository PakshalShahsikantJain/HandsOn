/*
    Author : Pakshal Shashikant Jain
    Date : 26/09/2023
    Program : Write a program which accept string from user and reverse each
              word in place.
              
              Input : "Marvellous Multi OS
              Output : "suollevraM itluM SO" 
*/
//Required Libraries
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Reverse Each Word String
void StrWrdRev(char *str)
{
    char *first = str;
    char *last = str;
    char temp = '\0';

    //Logic To Rerverse Each Word of String
    while(*last != '\0')
    {
        if(*last == ' ')
        {
            while((*last == ' ')&&(*last != '\0'))
            {
                last++;
            }
            last--;
        }
        else
        {
            first = last;

            while((*last != ' ')&&(*last != '\0'))
            {
                last++;
            }
            last--;

            char *i = first;
            char *j = last;

            while(i <= j)
            {
                temp = *i;
                *i = *j;
                *j = temp;

                i++;
                j--;
            }
        }
        last++;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////

//main Function
int main()
{
    char arr[50] = {'\0'};

    printf("Jay ganesh.....\n");

    //Taking Input from user
    printf("Enter One String \n");
    scanf("%[^'\n']s",arr);

    StrWrdRev(arr);

    //Printing Reversed Words of String
    printf("Reversed String is : %s",arr);

    return 0;
}