/*
    Author : Pakshal Shashikant Jain
    Date : 30/04/2024
    Program : Write a recursive program which display below pattern.
              Output : 5 4 3 2 1
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Require Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern 
{
    private :            //Access Specifier of Class 
        int ino;
    public :            //Access Specifier of Class
        Pattern(int value)      //Constructor of Class
        {
            this->ino = value;    //Intializing Instance variable of Class
        }

    void Display()    //Behaviour of Class
    {
        if(this->ino < 1)
        {
            return;
        }
        else 
        {
            printf("%d\t",this->ino);
            this->ino--;
            Display();
        }
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int ino = 0;

    cout<<"Jay Ganesh....\n";

    //Taking Input From User
    cout<<"Enter Any one number you Want : ";
    cin>>ino;

    //Creating object of Pattern Class
    Pattern *pobj = new Pattern(ino);
    
    cout<<"Output : ";
    pobj->Display();
    
    //Deallocating Memory of Object Created
    delete(pobj);
    pobj = NULL;

    return 0;
}