/*
    Author : Pakshal Shashikant Jain 
    Date : 05/08/2023
    Program : Accept Character from user and check whether it is special symbol
              or not (!, @, #, $, %, ^, &, *).

              Input : %
              Output : TRUE

              Input : d
              Output : FALSE 
*/

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class SCharacter 
{
    //Characteristics of Class
    public :
        char ch;

    //Constructor of Class
    public :
        SCharacter()
        {
            this->ch = '\0';
        }
    //Behaviour of Class To Take Input from user
    void Accept()
    {
        cout<<"Enter One Character \n";
        cin>>this->ch;
    }

    //Behaviour of Class To Check Entered Character is Special Symbol or not
    bool Check()
    {
        if((this->ch >= '#')&&(this->ch <= '&'))
        {
            return true;
        }        
        else if((this->ch == '!')||(this->ch == '@')||(this->ch == '^')||(this->ch == '*'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main() 
{
    bool bret = false;

    cout<<"Jay Ganesh....\n";

    //Creating object of SCharacter Class
    SCharacter *sobj = new SCharacter();

    //Call To Behaviours of Class
    sobj->Accept();
    bret = sobj->Check();

    //Handeling Conditions According TO Output
    if(bret == true)
    {
        printf("Enterd Character %c is A Special Symbol",sobj->ch);
    }
    else
    {
        printf("Entered Character %c is not a Special Symbol",sobj->ch);
    }

    //Deallocating Memory of Object Created
    delete(sobj);

    return 0;
}