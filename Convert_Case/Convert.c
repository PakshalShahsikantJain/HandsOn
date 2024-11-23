/*
    Author : Pakshal Jain
    Date : 24/09/2022
    Program : To Convert Case of Entered Character
*/

//Required Libraries
#include<stdio.h>

//Function To Convert Case of Entered Character
char Convert(char ch) 
{
    char c = '\0';

    //Logic To Convert Case of Character.
    if((ch >= 'A')&&(ch <= 'Z'))
    {
        c = ch + 32;
    }
    else if((ch >= 'a')&&(ch <= 'z'))
    {
        c = ch - 32;
    }

    return c;
}

////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    printf("Jay Ganesh......\n");
    char c = '\0';
    char cret = '\0';

    printf("Enter One Character...\n");
    scanf("%c",&c);

    printf("Entered Character is : %c\n",c);

    //Calling Convert Function
    cret = Convert(c);
    printf("Converted Character is : %c\n",cret);

    return 0;
}