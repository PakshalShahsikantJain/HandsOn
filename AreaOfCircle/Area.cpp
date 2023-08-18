/*
    Author : Pakshal Jain
    Date : 28/10/2022
    Program : To Accept Radius From user and Calculate Area of Circle
*/

//Required Libraries
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Area
{
    //Characteristics of Class
    private :
        float No = 0.0;
    //Constructor of Class
    public :
        Area(float no)
        {
            this->No = no;
        }
    //Behaviour of Class
    float CircleArea()
    {
        float area = 0.0;

        //Logic
        area = 3.14 * this->No * this->No;

        return area;        
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    float No = 0.0;
    float fret = 0.0;

    cout<<"Jay Ganesh...\n";
    
    //Taking Input From User
    cout<<"Enter Radius of Circle..\n";
    cin>>No;

    //Creating object of Area Class
    Area aobj(No);
    
    //Call To Behaviour of Class
    fret = aobj.CircleArea();

    //Printing Area of Circle
    cout<<"Area of Circle is : "<<fret;

    return 0;
}