/*
    Author : Pakshal Shashikant Jain 
    Date : 31/07/2023
    Program : Write a program which displays ASCII table. Table contains symbol,
              Decimal, Hexadecimal and Octal representation of every member from
              0 to 255
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Ascii
{
    //Class Declaration
    public :
        int i;

    //Constructor of Class
    public :
        Ascii()
        {
            this->i = 0;
        }

    //Behaviour of Class Display Ascii Table 
    void Display()
    {
        printf("Decimal \tHexadecimal \tOctal \tSymbol \n");
        for(this->i = 0;this->i <= 255;this->i++)
        {
            printf("%d \t\t %x \t\t %o \t%c\n",this->i,this->i,this->i,this->i);
            printf("\n");
        }
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    cout<<"Jay Ganesh.....\n";

    //Creating object of Ascii Class 
    Ascii *aobj = new Ascii();

    //Call To Behaviour of Class
    printf("-------------------------Ascci Table-----------------------------\n");
    aobj->Display();

    delete(aobj);
    
    return 0;
}