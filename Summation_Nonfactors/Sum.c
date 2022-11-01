/*
    Auhtor : Pakshal Jain
    Date : 05/10/2022
    Program : To Find Summation of Nonfactors of Entered Number
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>

//Function To Calulcation Summation
int Summation(int No)
{
    int i = 0;
    int Sum = 0;    

    //Logic
    for(i = 1;i < No;i++)
    {
        if(No % i != 0)
        {
            Sum = Sum + i;
        }
    }

    return Sum;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;
    int iret = 0;

    printf("Jay Ganesh....\n");
    
    printf("Enter One Number\n");
    scanf("%d",&No);

    //Call To Summation Function   
    iret = Summation(No);
    
    printf("Summation of Nonfactors of Entered Number is : %d",iret);

    return 0;
}