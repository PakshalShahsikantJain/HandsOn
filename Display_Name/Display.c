/*
    Author : Pakshal Jain
    Date : 09/10/2022
    Program : To Accept His/Her Full Name From User and Display It
*/

//Required Libraries
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    char str[30];

    printf("Enter Your Full Name...\n");
    scanf("%[^\n]",&str);

    printf("%s",str);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////