/*
    Author : Pakshal Jain
    Date : 01/10/2022
    Program : To Calculate Multiplication of Factors of Entered Number
*/

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////

//Function To Calculte Muliplication
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

/////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;
    int iret = 0;

    cout<<"Ganapati Bappa Morya...\n";
    
    cout<<"Enter One Number...\n";
    cin>>No;

    //Call To Fact_Mult Function
    iret = Fact_Mult(No);
    printf("Multiplication of Factors is : %d\n",iret);

    return 0;
}