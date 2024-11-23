/*
    Author : Pakshal Shashikant Jain
    Date : 25/08/2023
    Program : Write a program which accept string from user and copy capital
              characters of that string into another string.
            
              Input : "Marvellous Multi OS"
              Output : "MMOS"
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Copy Capital Letters from Entered String
void StrCpyCap(char *src,char *dest)
{
    if((src == NULL)&&(dest == NULL))
    {
        return;
    }

    //Logic To Copy Capital Letter from Entered String
    while(*src != '\0')
    {
        if((*src >= 'A')&&(*src <= 'Z'))
        {
            *dest = *src;
            dest++;   
        }
        src++;
    }

    *dest = '\0';
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};

    printf("Jay Ganesh....\n");

    //Taking Input from user
    printf("Enter one String...\n");
    scanf("%[^'\n']s",arr);

    //Call To StrCpyFunction
    StrCpyCap(arr,brr);

    //Printing Copied String
    printf("Copied Capital Letter from Entered String is : %s",brr);

    return 0;
}