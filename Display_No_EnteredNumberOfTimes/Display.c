/*
    Author : Pakshal Jain
    Date : 18/09/2022
    Program : To Display First number in Second number of times
*/

//Required Libraries
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Output
void Display(int No,int No2)
{
    int i = 0;

    if(No2 < 0)
    {
        No2 = -No2;
    }

    for(i = 0;i < No2;i++)
    {
        printf("%d ",No);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int No = 0;
    int No2 = 0;

    printf("Jay Ganesh....\n");
    
    printf("Enter Number To Print.....\n");
    scanf("%d",&No);

    printf("Enter Number To Iterate\n");
    scanf("%d",&No2);

    Display(No,No2);

    return 0;
}