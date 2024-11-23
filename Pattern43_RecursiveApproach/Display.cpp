/*
    Author : Pakshal Shashikant Jain
    Date : 29/04/2024
    Program : Write a recursive program which display below pattern.
              Output : 1 2 3 4 5
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Pattern 
{
    private :   //Access Specifier
        static int i;    //Static Characteristics of Class / Class Variable
        int ino;         //Non-Static Characteristics of Class / Instance Variable of Class
    public :  //Access Specifier
        //Constructor of Class
        Pattern(int value)
        {
            this->ino = value;
        }
    
    //Behaviour of Class
    void Display()
    {
        if(i > this->ino) 
        {
            return;
        }
        else 
        {
            cout<<i<<"\t";
            i++;

            //Recursive Function Call
            Display();
        }
    }
};

int Pattern::i = 1;   //Defination of Static Member of Class

//Main Function 
int main() 
{
    int ino = 0;

    cout<<"Jay Ganesh.....\n";
    
    //Taking Input From User
    cout<<"Enter Any Number You Want\n";
    cin>>ino;

    //Creating Object of Class Dynamically
    Pattern *pobj = new Pattern(ino);
    
    //Call To Behaviour of Class
    pobj->Display();

    //Deallocation of Memory of Object Created
    free(pobj);
    pobj = NULL;

    return 0;
}