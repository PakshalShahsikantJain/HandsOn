/*
    Author : Pakshal Shashikant Jain 
    Date : 9/5/2024
    Program : Write a recursive program which accept string from user and count white
              spaces.

              Input : HE llo WOr lD
              Output : 3  
*/

//Required Libraries
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Count White Spaces in String 
int WhiteSpace(char *str)
{
    static int icnt = 0;

    //Logic To Count White Spaces
    if(*str != '\0')
    {
        if(*str == ' ')
        {
            icnt++;
        }
        str++;

        //Recursive Function Call To WhiteSpace Function
        WhiteSpace(str);
    }
    else
    {
        return icnt;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[30] = {'\0'};
    int iret = 0;

    printf("Jay Ganesh.....\n");

    //Taking Input From User
    printf("Enter One String : ");
    scanf("%[^'\n']s",&arr);

    //Call To WhiteSpace Function
    iret = WhiteSpace(arr);

    //Printing Count of White Spaces
    printf("Count of White Spaces in Entered String '%s' is : %d",arr,iret);

    return 0;
}