/*
    Author : Pakshal Jain
    Date : 13/09/2022
    Prorgam : To Check Whether Entered Number is Divisible by 5 Or Not
*/

//Required imports
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Check
{
    //Characteristics
    private :
        int No = 0;
    

    //Constructor
    public : 
        Check(int no)
        {
            this->No = no;
        }

    //Behaviour
    bool check()
    {
        if(this->No % 5 == 0)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int No = 0;
    bool bret = false;

    cout<<"Jay Ganesh....\n";

    cout<<"Enter Number To Check....\n";
    scanf("%d",&No);

    Check cobj(No);
    bret = cobj.check();
    
    if(bret == true)
    {
        cout<<"Entered Number is Divisible By 5 \n";
    }
    else
    {
        cout<<"Entered Number is Not Divisible By 5 \n";
    }

    return 0;
}