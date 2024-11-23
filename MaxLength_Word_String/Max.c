/*
    Author : Pakshal Shashikant Jain
    Date : 23/09/2023
    Program : Write a program which accept string from user and return length of
              largest word.

              Input : "Marvellous Multi OS Infosystems"
              Output : 11
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find Largest Word Present in String
int MaxWordLen(char *str) 
{
    int icnt = 0;
    int iMax = 0;

    if(str == NULL)
    {
        return -1;
    }

    //Logic To Find 
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            while((*str == ' ')&&(*str != '\0'))
            {
                str++;
            }
            icnt = 0;
        }
        else
        {
            icnt++;
            if(iMax < icnt)
            {
                iMax = icnt;
            }
            str++;   
        }
    }

    return iMax;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int iret = 0;
    char arr[50] = {'\0'};

    printf("Jay Ganesh.....\n");

    //Taking Input from  user
    printf("Enter One String : \n");
    scanf("%[^'\n']s",arr);

    //Call To MaxWordLen Function
    iret = MaxWordLen(arr);
    
    //Printing Length of Largest Word
    printf("Length of Largest Word is : %d",iret);
    
    return 0;
}