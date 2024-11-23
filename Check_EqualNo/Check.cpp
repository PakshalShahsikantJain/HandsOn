/*
    Author : Pakshal Jain
    Date : 10/10/2022
    Program : To Check Entered two Number are Equal or Not
*/

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class Check
{
    //Characteristics of Class
    private : 
        int No = 0;
        int No2 = 0;
    //Constructor of Class
    public :
        Check(int no,int no2)
        {
            this->No = no;
            this->No2 = no2;
        }
    //Bheaviour of Class
    bool check()
    {
        if(this->No == this->No2)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;
    int No2 = 0;
    bool bret = false;

    cout<<"Jay Ganesh...\n";
    
    cout<<"Enter One Number\n";
    cin>>No;

    cout<<"Enter Second Number\n";
    cin>>No2;

    Check cobj(No,No2);
    bret = cobj.check();

    if(bret == true)
    {
        printf("Entered Number %d and %d are Equal",No,No2);
    }
    else 
    {
        printf("Entered Number %d and %d are Not Equal",No,No2);
    }

    return 0;
}