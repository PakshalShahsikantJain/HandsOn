/*
    Author : Pakshal Shashikant Jain 
    Date : 19/08/2023
    Program : Write a program which accept string from user and accept one
              character. Check whether that character is present in string or not.
              Input : "Marvellous Multi OS"
                       e
              Output : TRUE
              
              Input : "Marvellous Multi OS"
                       W
              Output : FALSE 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

//Define 1 AS TRUE and 0 as FALSE
#define TRUE 1
#define FALSE 0

//Giving New Name To Data Type Integer
typedef int BOOL;

//Declaration of Function Check
BOOL Check(char *str,char ch);

//Function To Check Entered String Contains Entered Character or Not
BOOL Check(char *str,char ch)  //Defination of Function Check
{
    //Handeling Condition if Array To Which pointer str is pointing to is NULL
    if(str == NULL)
    {
        return -1;
    }

    //Logic To Check
    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }

        *str++;
    }

    if(*str == ch)           //Loop Terminates ch is found in array
    {
        return TRUE;
    }
    else                      //Loop Terminates When *str = '\0'
    {
        return FALSE;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    //Declaraing Empty Character and Intializing With Default of character array 
    char arr[20] = {'\0'};
    char ch = '\0';
    BOOL bret = FALSE;

    printf("Jay Ganesh....\n");
    
    //Taking Input from User
    printf("Enter One String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter Character To Check \n");
    scanf(" %c",&ch);

    //Call To Check Functions
    bret = Check(arr,ch);

    //Handeling Condition if bret = TRUE
    if(bret == TRUE)
    {
        printf("Entered Character %c is Present in String",ch);
    }
    //Handeling Condition if bret = FALSE
    else
    {
        printf("Entered Character %c is Not Present in String",ch);
    }

    //Returning Success TO OS if Program Terminates Succesfully  
    return 0;
}