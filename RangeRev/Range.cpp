/*
    Author : Pakshal Jain
    Date : 11/12/2022
    Program : To Dispaly Entered Range in Reverse order
*/

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Range
{
    //Characteristics of Class
    private : 
        int No = 0;
        int No2 = 0;
    //Constructor of Class
    public : 
        Range(int no,int no2)
        {
            this->No = no;
            this->No2 = no2;
        }
    
    //Behaviour of Class
    void Display()
    {
        int i = 0;

        //logic
        cout<<"Printing Entered Range in Reverse Order\n";
        for(i = this->No2;i >= this->No;i--)
        {
            printf("%d\t",i);
        }
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    int No2 = 0;

    cout<<"Jay ganesh..\n";

    //Taking Input From User
    cout<<"Enter Starting Number\n";
    cin>>No;

    cout<<"Enter Ending Number\n";
    cin>>No2;

    //Handeling Condition if Entered Starting Number is Greater Than Ending Number
    if(No > No2)
    {
        cout<<"Invalid Range";
        return -1;
    }
    
    //Creating object of Range Class
    Range robj(No,No2);
    
    //Call To Behaviour of Class
    robj.Display();

    return 0;
}