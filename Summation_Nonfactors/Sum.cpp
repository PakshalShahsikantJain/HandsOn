/*
    Author : Pakshal Jain
    Date :05/10/2022
    Program : To Calculate Summation of Non-Factors of Entered Number
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libratries
#include<iostream>
using namespace std;

//Class Declaration
class Summation
{
    //Characteristics of Class
    private :
        int No = 0;
    //Constructor of Class
    public :
        Summation(int no)
        {
            this->No = no;
        }
    //Function To Calculate Summation
    int sum()
    {
        int i = 0;
        int sum = 0;

        for(i = 1;i < this->No;i++)
        {
            if(this->No % i != 0)
            {
                sum = sum + i;
            }
        }

        return sum;
    }
};//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int No = 0;
    int iret = 0;

    cout<<"Jay Ganesh....\n";
    cout<<"Enter One Number...\n";
    cin>>No;

    //Creating object of Class
    Summation sobj(No);

    //Calling Behacviour of Class
    iret = sobj.sum();

    cout<<"Summation of Nonfactors of Entered Number is : "<<iret;

    return 0;
}