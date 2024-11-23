/*
    Auhtor : Pakshal jain
    Datec : 01/10/2022
    Program : To Calculate Multiplicatio of Factors of entered number
*/

//Required Libraries
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Multiplication of Factors
int Fact_Mult(int No)
{
    int i = 0;
    int Mult = 1;

    //Logic
    for(i = 1;i < No;i++)
    {
        if(No % i == 0)
        {
            Mult = Mult * i;
        }
    }

    return Mult;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    int iret = 0;

    printf("Jay Ganesh....\n");

    printf("Enter One Number..\n");
    scanf("%d",&No);
    //Call To Fact Mult Function
    iret = Fact_Mult(No);
    printf("Multiplication of Factor of Entered Number is : %d",iret);

    return 0;
}