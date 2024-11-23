/*
    Author : Pakshal Shashikant Jain 
    Date : 20/04/2023
    Program : Design application for hotel. According to the management
              team of hotel they are giving discount on total bill amount of
              customer.
              If bill bill amount is less than 500 then there is no discount , if
              bill amount is less than 1500 and more than 500 they give 10%
              discount.
              And if the bill amount is more than 1500 then they give 15%
              discount.
              Our application should accept total bill amount and depends on
              the discount policy we have to return the amount after applying
              discount.

              Input : 1200 Output : 1080
              Input : 290 Output : 290
              Input : 3700 Output : 3145 
*/

//Rquired Libraries
#include<iostream>
using namespace std;

//Class Declaration
class Discount 
{
    //Characteristics of Class
    private :
        int No = 0;

    //Constructor of Class
    public :
        //Default Constructor 
        Discount()
        {
           this->No = 0;
        }

    //Behaviour of Class To Take input From User
    int Accept()
    {
        int iret = 0;

        cout<<"Enter You Bill Amount\n";
        cin>>this->No;

        iret = this->No;

        return iret;
    }

    //Behaviour of Class To Calculate Discount 
    float Calculate()
    {
        float Discount = 0.0f;
        int Final = 0;

        //Logic To Calculate Discount 
        if(this->No < 500)
        {
            return this->No;
        }
        else if((this->No >= 500)&&(this->No <= 1500))
        {
            Discount = (this->No * 10) / 100;
            Final = this->No - Discount;

            return Final;
        }
        else if(this->No > 1500)
        {
            Discount = (this->No * 15) / 100;
            Final = this->No - Discount;

            return Final;
        }
    }
};

//Main Function 
int main() 
{
    int No = 0;
    int iret = 0;
    int iret2 = 0;

    cout<<"Jay Ganesh...\n";
    
    cout<<"------------Welcome To TCS Hotel----------------\n";

    //Creating object of Class
    Discount dobj; 

    //Call To Behaviour of Class
    iret = dobj.Accept();
    iret2 = dobj.Calculate();

    //Printing Output According To Given Conditions 
    if(iret < 500)
    {
        printf("Your Final Bill Amount According To Our Hotel Policy is %d",iret2);
    }
    else if((iret >= 500)&&(iret <= 1500))
    {
        printf("Your Final Bill Amount After Getting 10%% Discount is : %d",iret2);
    }
    else if(iret > 1500)
    {
        printf("Your Final Bill Amount After Getting 15%% Discount is : %d",iret2);
    }
 
    return 0;
}