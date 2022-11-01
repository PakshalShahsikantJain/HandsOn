/*
    Author : Pakshal Jain
    Date : 3/10/2022
    Program : To Print Factors of ENtered Number in Reverse order
*/

//Requried Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Factors in Reverse order
void Fact(int No)
{
    int i = 0;

    for(i = No - 1;i > 0;i--)
    {
        if(No % i == 0)
        {
            printf("%d\t",i);
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    
    printf("Jay Ganesh....");
    
    printf("Enter One Number");
    scanf("%d",&No);

    //Call To Fact Function
    Fact(No);

    return 0;
}