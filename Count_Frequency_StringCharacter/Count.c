/*
    Author : Pakshal Shashikant Jain 
    Date : 19/08/2023
    Program : Write a program which accept string from user and accept one
              character. Return frequency of that character.
             
              Input : “Marvellous Multi OS”
                       M
              Output : 2

              Input : “Marvellous Multi OS”
                       W
              Output : 0 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

//Function To Check Entered Character is Present or not in Entered String
int CountCharacter(char *str,char ch)
{
    int icnt = 0;

    if(str == NULL)
    {
        return -1;
    }

    //Logic To Check
    while(*str != '\0')
    {
        if(*str == ch)
        {
            icnt++;
        }

        *str++;
    }

    return icnt;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    char arr[20] = {'\0'};
    char ch = '\0';
    int iret = 0;

    printf("Jay Ganesh....\n");

    //Taking input from String
    printf("Enter One String \n");
    scanf("%[^'\n']s",arr);

    printf("Enter Character To Count Frequency of \n");
    scanf(" %c",&ch);

    //Call To Check Function
    iret = Check(arr,ch);

    //Printing Frequency Calculated
    printf("Frequenct of Character %c in Entered String is : %d",ch,iret);

    return 0;
}