/*
    Author : Pakshal Shashikant Jain 
    Date : 28/04/2024
    Program : Write a recursive program which display below pattern.
              Output : * * * * *
*/

//Importing Required Libraries
using namespace std;
#include<iostream>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern 
{
    //Characteristics of Class 
    private :    //Access Specifier
        int ino;
    public :     //Access Sepecifier
        Pattern();   //Constructor of Class
        inline void Display(int);  //Behaviour of Class (inline function Concept is used)
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Defination of Constructor of Class
Pattern::Pattern()
{
    ino = 0;
}

//Defination of Inline Function of Class(Behaviour of Class)
void Pattern::Display(int ino)
{
    if(ino == 0)
    {
        return;
    }
    else
    {
        printf("*\t");
        ino--;

        //Recursive Function Call
        Display(ino);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    int ino = 0;

    cout<<"Jay Ganesh....\n";

    //Creating Object of Pattern Class
    Pattern *pobj = new Pattern();

    //Taking Input From User
    cout<<"Enter One Number To Print that number of '*'\n";
    cin>>ino;

    //Call To Behaviour of Class
    pobj->Display(ino);

    return 0;
}