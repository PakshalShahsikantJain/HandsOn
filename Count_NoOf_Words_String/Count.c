/*
    Author : Pakshal Shashikant Jain
    Date : 22/09/2023
    Program : Write a program which accept string from user count number of
              words from string
              
              Input : "Marvellous Multi OS"
              Output : 3
              
              Input : "              Marvellous                  Multi           OS             Pune"
              Output : 4 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Count Number of Words Present in String
int WordCount(char *str) 
{
    int icnt = 1;

    if(str == NULL)
    {
        return -1;
    }

    //Logic To Count
    if((*str == ' '))
    {
        while(*str == ' ')
        {
            str++;
        }
    }

    while(*str != '\0') 
    {
        if(*str == ' ')
        {
            while((*str == ' ')&&(*str != '\0'))
            {
                str++;
            }
            icnt++;
        }
        str++;
    }

    return icnt;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()  
{
    int iret = 0;
    char arr[50] = {'\0'};

    printf("Jay Ganesh.....\n");
    
    //Taking Input from user
    printf("Enter One String \n");
    scanf("%[^'\n']s",arr);

    //Call To WordCount Function
    iret = WordCount(arr);

    //Printing Count of Words Present in String
    printf("Count of Words From Entered String is : %d",iret);

    return 0;
}