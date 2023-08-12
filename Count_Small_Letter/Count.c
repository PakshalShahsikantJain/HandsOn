/*
    Author : Pakshal Shashikant Jain 
    Date : 08/08/2023
    Program : Write a program which accept string from user and count number of
              small characters.

              Input : “Marvellous”
              Output : 9  
*/

//Required Libraries
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Count 
int Count(char *str)
{
    int icnt = 0;
    int i = 0;  

    if(str == NULL)
    {
        return -1;
    }

    //Logic To Count 
    while(*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            icnt++;
        }
        str++;
    }

    return icnt;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[20];
    int iret = 0;

    printf("Jay Ganesh.....\n");

    //Taking input from user
    printf("Enter String \n");
    scanf("%[^'\n']s",arr);

    //Call To Count Function
    iret = Count(arr);

    //Printing Count of Capital Letter
    printf("Count of Small Letter in Entered String (%s) is : %d",arr,iret);

    return 0;
}