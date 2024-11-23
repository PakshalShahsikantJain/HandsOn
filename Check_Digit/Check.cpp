/*
    Author : Pakshal Shashikant Jain 
    Date : 24/07/2023
    Program : Accept Character from user and check whether it is digit or not
              (0-9).

              Input : 7 
              Output : TRUE

              Input : d
              Output : FALSE 
*/

//Required Libaries
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Character 
{
    //Characteristics of Class
    public :
        char ch;

    //Constructor of Class
    public :
        Character()
        {
            this->ch = '\0';
        }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        cout<<"Enter One Character To Check\n";
        cin>>this->ch;
    }
    //Behaviour of Class To Chec
    bool Check() 
    {
        if((this->ch >= '0')&&(this->ch <= '9'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    bool bret = false;

    //Creating object of Character Class
    Character *cobj = new Character();  

    //Behaviour of Class To Take Input from user
    cobj->Accept();

    bret = cobj->Check();

    //Handeling Conditions
    if(bret == true)
    {
        printf("Entered Character %c is Digit",cobj->ch);
    }
    else
    {
        printf("Entered Character %C is Not A Digit",cobj->ch);
    }

    delete(cobj);

    return 0;
}