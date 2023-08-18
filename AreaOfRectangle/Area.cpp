/*
    Author : Pakshal Jain
    Date : 28/10/2022
    Program : To Accept Height and Width of Rectangle and Calculate Area of Rectangle
*/

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class Area
{
    //Characteristics of Class
    private :
        float Height = 0.0;
        float Width = 0.0;
    //Constructor of Class
    public :
        Area(float value,float value2)
        {
            this->Height = value;
            this->Width = value2;
        }
    //Behaviour of Class
    float Calculate()
    {
        float area = 0.0;

        area = this->Height * this->Width;

        return area;
    }
};

//Main Function
int main() 
{
    float Value = 0.0;
    float Value2 = 0.0;
    float fret = 0.0;

    cout<<"Jay Ganesh...\n";
    
    //Taking Input from User
    cout<<"Enter Height of Rectangle\n";
    cin>>Value;

    cout<<"Enter Width of Rectangle\n";
    cin>>Value2;

    //Creating object of Area Class
    Area aobj(Value,Value2);
    //Call To Behaviour of Class
    fret = aobj.Calculate();

    //Printing Area of Rectangle
    cout<<"Area of Rectangle is : "<<fret;

    return 0;
}