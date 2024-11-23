/*
    Author : Pakshal Shashikant Jain 
    Date : 19/07/2023
    Prorgam : Accept Character from user and check whether it is alphabet or not
              (A-Z a-z).
              Input : F
              Output : TRUE
                
              Input : &
              Output : FALSE
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraires
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Character
{
    //Characteristics of Class 
    private : 
        char CH;
    
    //Constructor of Class
    public :
        Character(char ch)
        {
            this->CH = ch;
        }

    //Behaviour of Class To Check Entered Character is Captial or not
    bool check()
    {
        //Logic
        if((this->CH >= 'A')&&(this->CH <= 'Z'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function 
int main()
{
    char ch = '\0';
    bool bret = false;

    cout<<"Ganapti Bappa Morya \n";
    
    cout<<"Enter One Character You Want To Check : \n";
    cin>>ch;

    //Creating object of Character Class
    Character *cobj = new Character(ch);

    //Call To Behaviour of Class
    bret = cobj->check();

    //Handeling Conditions According To output
    if(bret == true)    
    {
        printf("Entered Character %c is Capital\n",ch);
    }
    else
    {
        printf("Entered Character %c is Not Capital \n",ch);
    }

    return 0;
}