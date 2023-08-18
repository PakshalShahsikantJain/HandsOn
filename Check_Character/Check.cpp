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

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class Check
{
    //Characteristics of Class
    public :
        char ch;
    //Constructor of Class
    public :
        Check()
        {
            this->ch = '\0';
        }   
    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Taking Input from user
        cout<<"Enter Character You Want \n";
        cin>>this->ch;
    }
    
    //Behaviour of Class To Check Entered Character is Alphabet or Not
    bool check()
    {
        //Logic To Check
        if((this->ch >= 'A')&&(this->ch <= 'Z')||(this->ch >= 'a')&&(this->ch <= 'z'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main() 
{
    bool bret = false;

    printf("Jay Ganesh.....\n");

    //Creating object object of Check Class
    Check *cobj = new Check();

    //Call To Behaviour of Class
    cobj->Accept();
    bret = cobj->check();

    //Handeling Conditions According To Condition
    if(bret == true)
    {
        printf("Entered Character %c is Alphabet \n",cobj->ch);
    }
    else
    {
        printf("Entered Character %c is Not An Alphabet \n",cobj->ch);
    }

    return 0;
}