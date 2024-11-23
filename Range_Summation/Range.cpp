/*
    Author : Pakshal Jain
    Date : 22/11/2022
    Program : To Calculate Summation of Numbers in Entered Range
*/

//Required Libraries
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Range
{
    //Characteristics of Class
    private :
        int No = 0;
        int No2 = 0;
    //Constructor of Class
    public :
        //Parametrised Constructor of Class
        Range(int no,int no2)
        {
            this->No = no;
            this->No2 = no2;
        }
    //Behaviour of Class
    int Summation()
    {
        int i = 0;
        int sum = 0;

        for(i = No;i <= No2;i++)
        {
            sum = sum + i;
        }

        return sum;
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;
    int iret = 0;

    cout<<"Jay Ganesh...\n";
    
    //Taking Input From User
    cout<<"Enter Starting Number\n";
    cin>>No;

    cout<<"Enter Ending Number\n";
    cin>>No2;

    //Handeling Condition if Entered Number is Negative
    if((No < 0)||(No2 < 0))
    {
        cout<<"Invalid Range\n";
        return -1;
    }
    //Handeling Condition if Starting Number is greater Than Ending Number
    else if(No > No2)
    {
        cout<<"Invalid Range\n";
        return -1;
    }

    //Creating object of Range Class
    Range robj(No,No2);

    //Call To Behaviour of Class
    iret = robj.Summation();

    //Printing Obtained Result
    cout<<"Summation of Numbers in Entered Range is : "<<iret;

    return 0;
}