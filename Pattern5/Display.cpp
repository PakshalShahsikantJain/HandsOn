/*
    Author : Pakshal Jain
    Date : 19/01/2023
    Program : Accept number from user and display below pattern.
    
    Input : 5
    Output : 5 # 4 # 3 # 2 # 1 # 
*/

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
            if(no < 0)
            {
                no = -no;
            }

            this->No = no;
        }

    //Behaviour of Class
    void Display()
    {
        int i = 0;

        //Logic To Print Given Pattern
        printf("Printing Given Pattern...\n");
        for(i = this->No;i > 0;i--)
        {
            printf("%d\t#\t",i);
        }
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;

    cout<<"Jay Ganesh...\n";

    //Taking Input From User
    cout<<"Enter Any Number You Want\n";
    cin>>No;

    //Creating object of Pattern Class
    Pattern pobj(No);

    //Call To Behaviour of Class
    pobj.Display();

    return 0;
}