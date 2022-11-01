/*
    Author : Pakshal Jain
    Date : 24/10/2022
    Program : To Display Table of Entered Number
*/

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Table
void Table(int No,int No2)
{
    int table = 0;
    int i = 0;

    //Logic
    printf("Printing Table of Entered Number : \n");
    for(i = 1;i <= No2;i++)
    {
        table = No * i;
        printf("%d\t",table);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    int No2 = 0;

    //Taking Input From User
    printf("Enter Number To Display Table of...\n");
    scanf("%d",&No);

    printf("Enter Till What Number You Want Value of Table i.e for eg. 2 * ? \n");
    scanf("%d",&No2);

    //Call To Table Function
    Table(No,No2);

    return 0;
}