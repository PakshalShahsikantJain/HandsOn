/*
    Author : Pakshal Shashikant Jain 
    Date : 20/08/2023
    Program : Write a program which accept string from user and accept one
              character. Return index of last occurrence of that character.
              Input : "Marvellous Multi OS"
                      'M'
              Output : 11
              Input : "Marvellous Multi OS"
                      'W'
              Output : -1

              Input : "Marvellous Multi OS"
                      'e'
              Output : 4  
*/

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find Last Occurance of Entered Character
int FindLast(char arr[],char ch)
{
    int ipos = -1;
    int i = 0;

    if(arr == NULL)
    {
        return -1;
    }

    //Logic To Find Last Occurance
    while(arr[i] != '\0')
    {
        if(arr[i] == ch)
        {
            ipos = i;
        }
        i++;
    }

    return ipos;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int iret = 0;
    char arr[20] = {'\0'};
    char ch = '\0';

    printf("Jay Ganesh....\n");

    //Taking Input from user
    printf("Enter One String \n");
    scanf("%[^'\n']s",arr);

    printf("Enter One Character\n");
    scanf(" %c",&ch);

    //Call To FindLast Function
    iret = FindLast(arr,ch);

    //Printing Last Occurance of Entered Character Found
    printf("Last Occurance of Character %c is at index Number : %d",ch,iret);

    return 0;
}