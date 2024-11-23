/*
    Author : Pakshal Shashikant Jain
    Date : 24/08/2023
    Program : Write a program which accept string from user and copy the
              contents of that string into another string. (Implement strncpy() function)
              
              Input : "Marvellous Multi OS"
                       10
              Output : Marvellous
              
              Note : If third parameter is greater than the size of source string then
              copy whole string into destination. 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Copy Contents of String Till Entered Size into Anoter String
void StrNCpyX(char *src,char *dest,int icnt)
{
    //Handeling Conditions Strings are NULL
    if((src == NULL)&&(dest == NULL))
    {
        return;
    }

    //Logic To Copy Contents of String
    while((*src != '\0')&&(icnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        icnt--;
    }

    *dest = '\0';
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};
    int isize = 0;

    printf("Jay Ganesh....\n"); 

    //Taking input from user
    printf("Enter One String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter Size Till You Copy Contents of Entered String : \n");
    scanf("%d",&isize);

    //Call To StrNCpyX function
    StrNCpyX(arr,brr,isize);

    //Printing Copied String 
    printf("Copied String is : %s",brr);

    //Returning Success To OS if Program Executed Successfully
    return 0;
}