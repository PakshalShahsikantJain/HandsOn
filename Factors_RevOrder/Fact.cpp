/*
    Author : Pakshal Jain
    Date : 10/3/2022
    Program : To print Factors in reverse order
*/

//Requried Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Fact 
{
    //Characterstics of Class
    private : 
        int No = 0;
    //Construtor of Class
    public :
        Fact(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    void fact()
    {
        int i = 0;

        for(i = this->No - 1;i > 0;i--)
        {
            if(this->No % i == 0)
            {
                printf("%d\t",i);
            }
        }
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main  Class
int main() 
{
    int No = 0;

    cout<<"Jay Ganesh...";
    
    cout<<"Enter One Number";
    cin>>No;

    //Creating object of Fact Class
    Fact fobj(No);
    //Calling Behaviour of Class
    fobj.fact();

    return 0;
}