/*
    Author : Pakshal Shashikant Jain 
    Date : 07/05/2024
    Program : Write a recursive program which accept string from user and count number of characters.
              
              Input : Hello
              Output : 5 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Count Number of Characters Present in String
int Strlen(char *str)
{
    static int icnt = 0;           //Static Variable

    //Logic To Calculate
    if(*str != '\0')
    {
        icnt++;
        str++;

        //Recursive Function Call To Strlen Function
        Strlen(str);
    }
    else 
    {
        return icnt;
    }

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    char arr[30] = {'\0'};
    int iret = 0;

    printf("Jay Ganesh....\n");

    //Taking Input From User
    printf("Enter One String : ");
    scanf("%[^'\n']s",&arr);

    //Call To Strlen Function
    iret = Strlen(arr);

    //Printing Count of Characters Calculated
    printf("Count of Characters is : %d",iret);

    return 0;
}