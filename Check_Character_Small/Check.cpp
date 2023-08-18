/*
    Author : Pakshal Shashikant Jain 
    Date : 30/07/2023
    Program : Accept Character from user and check whether it is small case or
              not (a-z).

              Input : g
              Output : TRUE

              Input : D
              Output : FALSE 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
    
    //Behaviour of Class To Take input from user
    void Accept()
    {
        cout<<"Enter Character To Check \n";
        cin>>this->ch;
    }

    //Behaviour of Class To Check Entered Character is Small Case Character or not
    bool check()
    {
        //Logic To Check
        if((this->ch >= 'a')&&(this->ch <= 'z'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//main function
int main()
{
    bool bret = false;

    cout<<"Jay Ganesh.....\n";

    //Creating object of Character Class 
    Character *cobj = new Character();

    //Call To Behaviour of Class
    cobj->Accept();
    bret = cobj->check();

    //Handeling Condition According To Output
    if(bret == true)
    {
        cout<<"Entered Character "<<cobj->ch<<" is Small Case Character \n";
    }
    else
    {
        cout<<"Entered Character "<<cobj->ch<<" is Not Small Case Character \n";
    }

    //Deallocating Memory of Object Created
    delete(cobj);
    
    return 0;
}























