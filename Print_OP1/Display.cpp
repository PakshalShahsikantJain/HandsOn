/*
    Author : Pakshal Jain
    Date : 20/09/2022
    Prorgam : Accept one number from user and print that number of even numbers on screen
*/

//Requried Libraries
#include<iostream>
using namespace std;

//Class Declaration
class Display
{
    //Characteristics of Class
    private : 
        int No = 0;
    //Constructor of Class
    public :
        //Parameterised Constructor 
        Display(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    void display()
    {
        int i = 0;

        printf("Printing %d Even numbers : \n",this->No);
        for(i = 1;i <= this->No;i++)
        {
            cout<<i * 2<<"\t";
        }
    }
};//End of Class

////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;

    cout<<"Jay Ganesh...\n";  
    
    cout<<"Enter Number..\n";
    cin>>No;

    //Creting object of Class
    Display dobj(No);
    //Calling Behaviour of Class
    dobj.display();

    return 0;
}