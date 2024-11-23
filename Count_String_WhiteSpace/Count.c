/*
    Author : Pakshal Shashikant Jain 
    Date : 16/08/2023
    Program : Write a program which accept string from user and count number of
              white spaces
    
              Input : “MarvellouS”
              Output : 0
    
              Input : “MarvellouS Infosystems”
              Output : 1
            
              Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
              Output : 5
*/

//Required Libraries
#include<stdio.h>

//Function To Count White Space
int Count(char *str)
{
    int icnt = 0;

    if(str == NULL)
    {
        return -1;
    }

    //Logic 
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            icnt++;
        }

        *str++;
    }

    return icnt;
}

////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[20] = {'\n'};
    int iret = 0;

    printf("Jay Ganesh....\n");

    //Taking Input from user
    printf("Enter One String\n");
    scanf("%[^'\n']s",arr);

    //Call To Count Function
    iret = Count(arr);

    //Printing Count of White Spaces
    printf("Count of White Spaces in Entered String is : %d\n",iret);

    return 0;
}