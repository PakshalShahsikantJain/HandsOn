/*
    Author : Pakshal Shashikant Jain 
    Date : 08/05/2024
    Program : Write a recursive program which accept number from user and return its
              factorial.
              
              Input : 5
              Output : 120 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Factorial
{
    //Characteristics of Class
    private :   //Access Specifier
        int ino;
        int imult;
    //Constructor of Class
    public :   //Access Specifier
        Factorial(int value)
        {
            this->ino = value;
            this->imult = 1;
        }
    
    //Behaviour of Class
    int Fact()
    {
        if(this->ino != 0)
        {
            this->imult = this->imult * this->ino;
            this->ino--;

            //Recursive Function Call To Behaviour of Class
            this->Fact();
        }
        else 
        {
            return this->imult;
        }
    }
};//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int ino = 0;
    int iret = 0;
    
    cout<<"Jay Ganesh...\n";
    
    //Taking Input From User
    cout<<"Enter One Number : ";
    cin>>ino;

    //Creating object of Factorial Class 
    Factorial *fobj = new Factorial(ino);

    //Call To Behaviour of Class
    iret = fobj->Fact();

    //Printing Factorial Calculated
    printf("Factorial of %d is : %d",ino,iret);

    //Deallocating Memory Object
    free(fobj);
    fobj = NULL;

    return 0;
}