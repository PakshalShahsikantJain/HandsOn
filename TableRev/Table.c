/*
    Author : Pakshal Jain
    Date : 25/10/2022
    Program : To Display Table of Entered Number in Reverse Order
*/

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display in Reverse Order
void TableRev(int No,int No2)
{
    int i = 0;
    int table = 0;

    //Logic To Display Table in Reverse Order
    printf("Printing Table in Reverse Order...\n");
    for(i = No2;i > 0;i--)
    {
        table = i * No;
        printf("%d\t",table);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int No = 0;
    int No2 = 0;

    printf("Jay Ganesh...\n");

    //Taking Input From User
    printf("Enter One Number To Display Table of : \n");
    scanf("%d",&No);

    printf("Enter Number Till You Want To Display Table of : \n");
    scanf("%d",&No2);

    //Call To TableRev Function
    TableRev(No,No2);

    return 0;
}