/*
    Author : Pakshal Shashikant Jain 
    Date : 06/08/2023
    Program : Accept character from user and display its ASCII value in decimal,
              octal and hexadecimal format.
              
              Input : A
              Output : Decimal 65
                       Octal 0101
                       Hexadecimal 0X41
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class AsciiValue
{
    //Characteristics of Class
    private : 
        char ch;

    //Constructor of Class
    public :
        AsciiValue()
        {
            this->ch = '\0';
        }

    //Behaviour of Class To Take input from user
    void Accept()
    {
        cout<<"Enter One Character \n";
        cin>>this->ch;
    }   

    //Behaviour of Class To Display Ascii Value of Character in Mentioned Format
    void Display()
    {
        printf("Decimal Value of Character : %d\n",this->ch);
        printf("Octalal Value of Character : %#o\n",this->ch);
        printf("Hexadecimal Value of Character : %#X\n",this->ch);
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    cout<<"Jay Ganesh.....\n";

    //Creating object of AsciiValue Class 
    AsciiValue *aobj = new AsciiValue();

    //Call To Behaviour of Class
    aobj->Accept();
    aobj->Display();

    //Deallocating Memory of object Created
    delete(aobj);

    return 0;
}