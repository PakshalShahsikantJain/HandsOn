/*
    Author : Pakshal Jain
    Date : 06/10/2022
    Program : To Calculate Difference Between summation of factors and Nonfactors of Entered number
*/

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Difference
{
    //Characterstics of Class
    private :
        int No = 0;
    //Construtor of Class
    public :
        Difference(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    int FactDiff()
    {
        int i = 0;
        int sum = 0;
        int sum2 = 0;
        int diff = 0;

        //Logic
        for(i = 1;i < No;i++)
        {
            if(No % i == 0)
            {
                sum = sum + i;
            }
            else if(No % i != 0)
            {
                sum2 = sum2 + i;
            }
        }

        diff = sum - sum2;

        return diff;
    }
};//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;
    int iret = 0;

    cout<<"Jay Ganesh...\n";
    
    cout<<"Enter One Number\n";
    cin>>No;

    //Creating object of Difference Class    
    Difference dobj(No);
    //call behviour of class
    iret = dobj.FactDiff();

    cout<<"Difference between summation of Factors and Nonfators of Entered Number is : "<<iret;

    return 0;
}