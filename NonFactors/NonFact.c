/*
    Author : Pakshal Jain
    Date : 04/10/2022
    Program : To Print NonFactors of Entered Number
*/

//Requried Libararies
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void NonFact(int No)
{
    int i = 0;

    printf("Printing NonFactors of Entered Number : \n");
    for(i = 1;i < No;i++)
    {
        if(No % i != 0)
        {
            printf("%d\t",i);
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;

    printf("Jay Ganesh....\n");
    
    printf("Enter One Number\n");
    scanf("%d",&No);

    //Call TO NonFact Function
    NonFact(No);

    return 0;
}