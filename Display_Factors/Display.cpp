/*
    Author : Pakshal Jain
    Date : 24/09/2022
    Program : To Display Factors of Entered Number
*/
//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Display
{
    //Characteristics of Class
    private :
        int No = 0;
    //Contructor of Class(Parameterised)
    public :
        Display(int no) 
        {
            if(no < 0)
            {
                no = -no;
            }

            this->No = no;
        }
    //Behaviour of Class
    void display()
    {
        int i = 0;

        cout<<"Factors of Entered Number is as Follows...\n";
        for(i = 1;i <= this->No;i++)
        {
            if(this->No % i == 0)
            {
                printf("%d\t",i);
            }
        }
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int No = 0;

    cout<<"Jay Ganesh....\n";
    cout<<"Enter One Number....\n";
    cin>>No;

    //Creating object of Class
    Display dobj(No);
    //Call To Behaviour of Class
    dobj.display();

    return 0;
}