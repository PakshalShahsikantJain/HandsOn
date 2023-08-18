/*
    Author : Pakshal Jain
    Date : 15/10/2022
    Program : To Calculate Percentage
*/

//Required Libraries
#include<iostream>
using namespace std;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Calculate
{
    //Chracteristics of Class
    private : 
        int No = 0;
        float No2 = 0.0;
        float ans = 0.0;
    //Constructor of Class
    public :
        Calculate(int no,float no2)
        {
            this->No = no;
            this->No2 = no2;
            this->ans = 0.0;
        }
    //Behaviour of Class
    float Percentage()
    {
        this->ans = this->No2 / this->No * 100;

        return this->ans;
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;
    float No2 = 0.0;
    float fret = 0.0;

    cout<<"Jay Ganesh....\n";
    cout<<"Enter Total Marks\n";
    cin>>No;

    cout<<"Enter Obtained Marks\n";
    cin>>No2;

    //Creating object of Class
    Calculate cobj(No,No2);

    //Calling Behaviour of Class
    fret = cobj.Percentage();

    printf("Percentage is : %.2f%%\n",fret);

    return 0;
}