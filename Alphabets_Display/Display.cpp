/*
    Author : Pakshal Shashikant Jain 
    Date : 04/08/2023
    Program : Accept character from user. If it is capital then display all the
              characters from the input characters till Z. If input character is small
              then print all the characters in reverse order till a. In other cases
              return directly.

              Input : Q
              Output : Q R S T U V W X Y Z

              Input : m
              Output : m l k j i h g f e d c b a

              Input : 8
              Output : 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraies
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Alphabets 
{
    //Characteristics of Class
    private :
        char ch;
    
    //Constructor of Class
    public :
        Alphabets()
        {
            this->ch = '\0';
        }
    
    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Taking input from user
        cout<<"Enter One Alphabet You Want To Print\n";
        scanf("%c",&this->ch);
    }

    //Behaviour of Class To Display Alphabets According To Conditions
    void Display()
    {
        int i = 0;

        //Logic To Print Alphabets
        cout<<"Printing Alphabets According To Given Conditions\n";
        if((this->ch >= 'A')&&(this->ch <= 'Z'))
        {
            for(i = this->ch;i <= 'Z';i++)
            {
                printf("%c ",i);
            }
        }
        else if((this->ch >= 'a')&&(this->ch <= 'z'))
        {
            for(i = this->ch;i >= 'a';i--)
            {
                printf("%c ",i);
            }
        }
        else
        {
            return;
        }
    } 
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    cout<<"Jay Ganesh....\n";

    //Creating object of Alphabets Class
    Alphabets *aobj = new Alphabets();

    //Call To Behaviours of Class
    aobj->Accept();
    aobj->Display();

    //Deallocating Memory of object Created
    delete(aobj);

    return 0;
}