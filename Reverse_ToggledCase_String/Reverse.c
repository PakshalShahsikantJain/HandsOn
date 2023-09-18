/*
    Author : Pakshal Shashikant Jain 
    Date : 18/09/2023
    Program : Accept sing from user and reverse the contents of that string by
              toggling the case.

              Input : “aCBdef”
              Output : “FEDcbA” 
*/

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To to Reverse String after Toggling Case
void StrRevTogX(char *str)
{
    char temp = '\0';
    char *first = str;
    char *last = str;

    //Logic To Reverse String After Toggling Case
    while(*last != '\0')
    {
        last++;
    }
    last--;

    while(first <= last)
    {
        if((*first >= 'A')&&(*first <= 'Z'))
        {
            *first = *first + 32;
        }
        else if((*first >= 'a')&&(*first <= 'z'))
        {
            *first = *first - 32;
        }
        
        if(last != first)
        {
            if((*last >= 'A')&&(*last <= 'Z'))
            {
                *last = *last + 32;
            }
            else if((*last >= 'a')&&(*last <= 'z'))
            {
                *last = *last - 32;
            }
        }

        temp = *first;
        *first = *last;
        *last = temp;

        first++;
        last--;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[30] = {'\0'};

    printf("Jay Ganesh.....\n");

    //Taking Input from user
    printf("Enter One String \n");
    scanf("%[^'\n']s",arr);

    //Call To StrRevTogX Function
    StrRevTogX(arr);

    //Printing Toggled case
    printf("Reversed String After Toggling Case is : %s",arr);

    return  0;
}