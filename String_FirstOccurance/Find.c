/*
    Author : Pakshal Shashikant Jain 
    Date : 20/08/2023
    Program : Write a program which accept string from user and accept one
              character. Return index of first occurrence of that character.
              Input : "Marvellous Multi OS"
                      'M'
              Output : 0
              Input : "Marvellous Multi OS"
                      'W'
              Output : -1

              Input : "Marvellous Multi OS"
                      'e'
              Output : 4  
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

//Function To Find First Occurance
int FirstChar(char arr[],char ch)
{
    int i = 0;

    //Handeling Condition if Array is NULL
    if(arr == NULL)
    {
        return -1;
    }

    //Logic To Find
    while(arr[i] != '\0')
    {
        if(arr[i] == ch)
        {
            break;
        } 

        i++;
    }

    if(arr[i] == ch)
    {
        return i;
    }
    else
    {
        return -1;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int iret = 0;
    char arr[20] = {'\0'};
    char ch = '\0';

    printf("Jay Ganesh....\n");

    //Taking Input from user
    printf("Enter String...\n");
    scanf("%[^'\n']s",arr);

    printf("Enter Character\n");
    scanf(" %c",&ch);

    //Call To FirstChar
    iret = FirstChar(arr,ch);

    //Printing Count Calculated
    printf("First Occurance of Entered Character is At index number : %d",iret);

    return 0;
}