/*
    Author : Pakshal Jain
    Date : 27/10/2022
    Program : To accept number from user and print that number of $ & * on screen
*/

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern 
{
    //Characteristics of Class
    private :
        int No = 0;
    //Constructor of Class
    public : 
        Pattern(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    void Display()
    {
        int i = 0;

        cout<<"Displaying Pattern :\n ";
        for(i = 0;i < this->No;i++)
        {
            cout<<"$\t*\t";
        }
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;

    cout<<"Jay Ganesh....\n";
    
    cout<<"Enter one Number...\n";
    cin>>No;

    //Creating object of Pattern Class
    Pattern pobj(No);
    //Call To Behaviour of Class
    pobj.Display();

    return 0;
}