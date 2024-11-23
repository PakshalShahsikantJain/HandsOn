/*
    Author : Pakshal Jain
    Date : 12/10/2022
    Program : To Calulate Multiplication of Entered Three Number
*/

//Required Libraries
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Decalaration
class Multiplication
{   
    //Chracteristics of Class
    private :
        int No = 0;
        int No2 = 0;
        int No3 = 0;
        int ans = 0;
    //Constructor of Class
    public :
        Multiplication(int no,int no2,int no3)
        {
            this->No = no;
            this->No2 = no2;
            this->No3 = no3;
        }
    //Behaviour of Class
    int Mult()
    {
        //Handeling Constions if any of the Number is Zero
        if((this->No == 0)&&(this->No2 == 0))
        {
            this->ans = this->No3;
        }
        else if((this->No2 == 0)&&(this->No3 == 0)) 
        {
            this->ans = this->No;
        }
        else if((this->No == 0)&&(this->No3 == 0))
        {
            this->ans = this->No2;
        }
        else if(this->No == 0)
        {
            this->ans = this->No2 * this->No3;
        }
        else if(this->No2 == 0)
        {
            this->ans = this->No * this->No3;
        }
        else if(this->No3 == 0)
        {
            this->ans = this->No * this->No2;
        }
        //Handeling Condition if any of the number is Not Zero
        else 
        {
            this->ans = this->No * this->No2 * this->No3;
        }

        return this->ans;
    }
};//End Of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;
    int No2 = 0;
    int No3 = 0;
    int iret = 0;

    cout<<"Jay Ganesh...\n";

    //Taking Input as Three Entered Numbers
    printf("Enter Numbers...\n");
    scanf("%d %d %d",&No,&No2,&No3);

    //Creating object of Class
    Multiplication mobj(No,No2,No3);

    //Handeling Condition if all The Entered Three Numbers are Zero
    if((No == 0)&&(No2 == 0)&&(No3 == 0))
    {
        iret = No * No2 * No3;
    }
    else 
    {
        //Calling Behviout of Class
        iret = mobj.Mult();
    }

    //Printting Final Output of Program
    printf("Multiplication of Numbers is : %d",iret);

    return 0;
}