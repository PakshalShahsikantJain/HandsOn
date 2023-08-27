/*
    Author : Pakshal Shashikant Jain 
    Date : 27/08/2023
    Program : Write a program which 2 strings from user and concat second string
              after first string. (Implement strcat() function).

              Input : "Marvellous Infosystems"
                      "Logic Building"

              Output : "Marvellous Infosystems Logic Building" 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Concatenate Two Strings
void StrCatX(char *src,char *dest) 
{
    //Handling Conditios if Source and Destination index are Null
    if((src == NULL)&&(dest == NULL)) 
    {
        return;
    }

    //Logic To Concatenate Two Strings
    while(*src != '\0') 
    {
        src++;
    }

    *src = ' ';
    src++;

    while(*dest != '\0') 
    {
        *src = *dest;
        src++;
        dest++;
    }

    *src = '\0';
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};

    printf("Jay Ganesh....\n");

    //Taking Input from user    
    printf("Enter First String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter Second String\n");
    scanf(" %[^'\n']s",brr);

    //Call To StrCatX Function
    StrCatX(arr,brr);

    //Printing Concatenated String 
    printf("First String After Concatenation is : %s",arr);
    
    return 0;
}