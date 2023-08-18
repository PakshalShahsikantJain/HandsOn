/*
    Author : Pakshal Shashikant Jain 
    Date : 31/07/2023
    Program : Accept character from user. If character is small display its
              corresponding capital character, and if it small then display its
              corresponding capital. In other cases display as it is.

              Input : Q
              Output : q

              Input : m
              Output : M

              Input : 4        
              Output : 4

              Input : %
              Output : % 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class Corresponding
{   
    //Characterstics of Class
    private :
        char CH;

    //Constructor of Class
    public :
        Corresponding(char ch)
        {
            this->CH = ch;
        }

    //Behaviour of Class To Convert Character
    char Convert()
    {
        if((this->CH >= 'A')&&(this->CH <= 'Z'))
        {
            this->CH = this->CH + 32;
            return this->CH;
        }
        else if((this->CH >= 'a')&&(this->CH <= 'z'))
        {
            this->CH = this->CH - 32;
            return this->CH;
        }
        else 
        {
            return this->CH;
        }
    }
};//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    char ch = '\0';
    char cret = '\0';

    cout<<"Jay Ganesh.....\n";

    //Taking input from user
    cout<<"Enter One Character \n";
    cin>>ch;

    //Call To Behaviour of Class
    Corresponding cobj(ch);
    cret = cobj.Convert();

    //Handling Conditions According To Output 
    if((ch >= 'A')&&(ch <= 'Z'))
    {
        printf("Corresponding Small Letter of Entered Capital Letter %c is : %c",ch,cret);
    }
    else if((ch >= 'a')&&(ch <= 'z'))
    {
        printf("Corresponding Capital Letter of Entered Small Letter %c is : %c",ch,cret);
    }
    else
    {
        printf("There is Corresponding Letter For Entered Character %c",ch);
    }

    return 0;
}