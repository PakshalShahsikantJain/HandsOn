/*
    Author : Pakshal Jain
    Date : 17/02/2023
    Program : To Print Below Given Pattern

    Input : 4
    Output : # 1 * # 2 * # 3 * # 4 *
*/

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern
{
    //Characteristics of Class
    private :
        int No = 0;
    //Constructor of Class
    public :
        //Parameterised Constructor of Class
        Pattern(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    void Display()
    {
        int i = 0;

        //Logic
        for(i = 1;i <= No;i++)
        {
            printf("#  %d  *  ",i);
        }
    }
};

////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;

    cout<<"Jay Ganesh....\n";

    //Taking Input From User
    cout<<"Enter Number Till You Want To Print\n";
    cin>>No;

    //Creating Object of Pattern Class
    Pattern pobj(No);
    //Call To Behaviour of Class
    pobj.Display();

    return 0;
}