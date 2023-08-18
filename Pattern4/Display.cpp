/*
    Author : Pakshal Jain
    Date : 18/01/2023
    Program : Accept number from user and display below pattern.
    
    Input : 5
    Output : A B C D E
*/

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern
{
    //Characteristics of Class
    private :
        int No = 0;
    
    //Constructor of Class
    public :
        Pattern(int no)
        {
            this->No = no;
        }
    
    //Behaviour of Class
    void Display()
    {
        int i = 0;
        int Sum = 0;

        //Logic To Print Given Pattern
        cout<<"Printing Given Pattern :\n";
        for(i = 0;i < this->No;i++)
        {
            Sum = i + 65;

            printf("%c\t",Sum);
        }
    }
};//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;

    cout<<"Jay Ganesh...\n";
    
    //Taking Input From User
    cout<<"Enter One Number Till You Want To Print Given Pattern\n";
    cin>>No;

    //Creating Object of Pattern Class
    Pattern pobj(No);

    //Call To Behaviour of Class
    pobj.Display();

    return 0;
}