/*
    Author : Pakshal Shashikant Jain 
    Date : 5/5/2024
    Program : Write a recursive program which accept number from user and display below
              pattern.

              Input : 5
              Output : 5 * 4 * 3 * 2 * 1 * 
*/

//Required Libraries
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Pattern Class
class Pattern 
{
    //Characteristics of Class
    private :         //Access Specifier
        int ino;      //Instance Variable of Class
    public :         
        Pattern(int value)         //Constructor of Class
        {
            this->ino = value;
        }

    //Behaviour of Class To Print Given Pattern 
    void Display()   
    {
        if(this->ino < 1)
        {
            return;
        }
        else 
        {
            cout<<this->ino<<"\t"<<"*"<<"\t";
            this->ino--;

            //Recursive Function Call
            this->Display();
        }
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int ino = 0;

    cout<<"Jay Ganesh.....\n";

    cout<<"Enter Any one Number : ";
    cin>>ino;

    //Creating object of Pattern Class
    Pattern *pobj = new Pattern(ino);

    //Call To Behaviour of Class
    pobj->Display();

    //Deallcating Memory of Object
    free(pobj);
    pobj = NULL;
    
    return 0;
}
