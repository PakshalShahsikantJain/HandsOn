/*
    Author : Pakshal Jain 
    Date : 16/02/2023
    Program : Program To Print Given Pattern 

    Input : 5
    Output : 1 * 2 * 3 * 4 * 5 * 
*/

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern
{
    //Characteristics of Class
    private :
        int No;
    
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

        printf("Printing Given Pattern\n");
        for(i = 1;i <= this->No;i++)
        {
            printf("%d\t*\t",i);
        }
    }
};//End of Class

///////////////////////////////////////////////////////////////////////////////////////////

//Main Fuction
int main()
{
    int No = 0;

    cout<<"Jay Ganesh...\n";

    //Taking Input From User
    cout<<"Enter Number Till You Want To Print\n";
    cin>>No;

    //Creating Object of Pattern Class
    Pattern pobj(No);
    
    //Call To Behaviour of Class
    pobj.Display();

    return 0;
}