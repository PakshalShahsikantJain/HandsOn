/*
    Author : Pakshal Jain
    Date : 24/09/2022
    Program : To Convert Case of Entered Character..
*/

////////////////////////////////////////////////////////////////////////////////////////////

//Required Libararies
#include<iostream>
using namespace std;

//Class Decalaration
class Convert
{
    //Characteristics of Class
    private : 
        char ch = '\0';
        char c = '\0';
    //Constructor of Class(parameterised)
    public :
        Convert(char Ch)
        {
            this->ch = Ch;
        }
    //Behaviour of Class
    char convert()
    {
        //Logic To Convert Case of Entered Character
        if((this->ch >= 'A')&&(this->ch <= 'Z'))
        {
            this->c = this->ch + 32;
        }
        else if((this->ch >= 'a')&&(this->ch <= 'z'))
        {
            this->c = this->ch - 32;
        }

        return this->c;
    }
};//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char ch = '\0';
    char cret = '\0';

    cout<<"Jay Ganesh...\n";
    
    cout<<"Enter One Character..\n";
    scanf("%c",&ch);

    printf("Entered Character is : %c\n",ch);

    //Creting Object of Class
    Convert cobj(ch);
    //Calling Behaviour of Class
    cret = cobj.convert();

    printf("Character Converted is : %c\n",cret);

    return 0;
}