/*
    Author : Pakshal Jain
    Date : 28/09/2022
    Program : To Check Entered Character is Vowel or Not
*/

//Requried Libraries
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Decalaration 
class Check
{
    //Characteristics of Class
    private :
        char ch = '\0';
    //Constructor of Class(Parameterised)
    public : 
        Check(char c)
        {
            this->ch = c;
        }
    //Behaviour of Class
    bool check()
    {
        //Logic TO Check Entered Character is vowel or Not 
        if((this->ch == 'a')||(this->ch == 'e')||(this->ch == 'i')||(this->ch == 'o')||(this->ch == 'u'))
        {
            return true;
        }
        else if((this->ch == 'A')||(this->ch == 'E')||(this->ch == 'I')||(this->ch == 'O')||(this->ch == 'U'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    char ch = '\0';
    bool bret = false;

    cout<<"Jay Ganesh....\n";
    cout<<"Enter one Character..\n";
    scanf("%c",&ch);

    //Creating Object of Class
    Check cobj(ch);
    //Calling Behaviour of Class
    bret = cobj.check();

    if(bret == true)
    {
        cout<<"Entered Character is Vowel";
    }
    else 
    {
        cout<<"Entered Character is Not a Vowel";
    }

    return 0;
}