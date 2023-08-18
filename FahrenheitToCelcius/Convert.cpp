/*
    Author : Paksha Jain
    Date : 29/10/2022
    Program : To Convert Entered Temparature in Fahrenheit into Celcius
*/

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Convert
{
    //Characteristics of Class
    private :
        float Fahrenheit = 0.0;
    //Constructor of Class
    public :
        Convert(float f)
        {
            this->Fahrenheit = f;
        }
    //Behaviour of Class
    double FtoC()
    {
        float ans = 0.0;

        ans = (this->Fahrenheit - 32) * 5 / 9;

        return ans;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    float fret = 0.0;

    cout<<"Jay Ganesh...\n";
    
    //Taking Input From User
    cout<<"Enter One Number...\n";
    cin>>No;

    //Creating object of Convert Class
    Convert cobj(No);
    //Call To Behaviour of Class
    fret = cobj.FtoC();

    //Printing Converted Temperature into Celcius
    cout<<"Converted Temperature into Celcius is : "<<fret;

    return 0;
}