/*
    Author : Pakshal Jain 
    Date : 04 /09/2022 
    Program : To Calculate Division of Two Numbers
*/

//Required imports
#include<iostream>
using namespace std;

//Starting Point of Class Division
class Division 
{
    //Characteristics
    private :
        int No1 = 0;
        int No2 = 0;

    //constructors
    public : 
        Division(int Value,int Value2)
        {
            this->No1 = Value;
            this->No2 = Value2;
        }

    //Bhaviours
    int Div()
    {
        int ans = 0;

        if(No2 == 0)
        {
            cout<<"Error : Please Enter Number Greater Than Zero \n";
            return 0;
        }
        else if(No2 < 0)
        {
            No2 = -No2;
        }

        ans = this->No1 / this->No2;

        return ans;
    }

    ~Division()
    {
        cout<<"Inside Destructor....\n";
    }
};//End of Class Declaration 

int main()
{
    int no = 0;
    int no2 = 0;
    int ret = 0;

    cout<<"Ganapati Bappa Morya\n";

    cout<<"Enter First Number\n";
    cin>>no;

    cout<<"Enter Second Number\n";
    cin>>no2;

    Division obj1(no,no2);
    
    ret = obj1.Div();
    cout<<"Division is : "<<ret<<"\n";

    return 0;
}//End of Main