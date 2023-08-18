/*
    Author : Pakshal Shashikant Jain 
    Date : 02/06/2023
    Program : Design application for income tax department to calculate tax
              amount. According to the income tax department there is no
              income tax for the income less than 5 lakhs.

              If income is in between 5 to 10 lakhs then there will be 10% tax.
              If income is in between 10 to 20 lakhs then there will be 20%
              tax.

              And for more than 20 lakhs there will be 30% tax.
              We have t0o accept gross income from user and return the tax
              amount. 

*/

//Required Libraries
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class IncomeTax
{
    //Chracteristics of Class
    private :
        int No;
    
    //Constructor of Class
    public :
        //Paramaterised Constrcutor of Class
        IncomeTax(int no)
        {
            this->No = no;
        }
    
    //Behaviour of Class To Calculate Taxable amount 
    float TaxCalc()
    {
        float ans = 0.0;

        //Logic To Calculate Tax

        //Handeling Condition if Gross Income is Less Than 5L
        if(this->No < 500000)
        {
            return ans;
        }
        
        //Handeling Condition if Gross Income is in Between 5L and 10L
        else if((this->No >= 500000)&&(this->No < 1000000))
        {
            ans = (this->No * 10) / 100;
            return ans;
        }

        //Handeling Condition if Gross Income is in Between 10L and 20L
        else if((this->No >= 1000000)&&(this->No <= 2000000))
        {
            ans = (this->No * 20) / 100;
            return ans;
        }   
        
        //Handeling Condition if Income is Greater Than 30Ls
        else 
        {
            ans = (this->No * 30) / 100;
            return ans;
        }
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    float fret = 0.0;

    cout<<"Ganpati Bappa Morya......\n";

    cout<<"Marvellous Tax Calculator\n";

    //Taking Input From User
    cout<<"Enter Your Gross Income...\n";
    cin>>No;

    //Creating object of Income Tax Class
    IncomeTax iobj(No);

    //Call To Fret Function 
    fret = iobj.TaxCalc();

    printf("You Have To Pay Taxable Amount of %.1f\n",fret);

    return 0;
}