/*
    Author : Pakshal Jain
    Date : 04/10/2022
    Program : To Print Nonfactors of Entered Number
*/

//Requried Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class NonFact
{
    //Characteristics of Class
    private : 
        int No = 0;
    //Constructor of Class
    public :
        NonFact(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    void nonfact()
    {
        int i = 0;

        printf("Non Factors of Entered Number is as Follows : \n");
        for(i = 1;i < this->No;i++)
        {
            if(this->No % i != 0)
            {
                printf("%d\t",i);
            }
        }
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int No = 0;

    cout<<"Jay Ganesh...\n";
    
    cout<<"Enter One Number..\n";
    cin>>No;

    //Creating object of NoFact Class
    NonFact fobj(No);
    //Call to Behaviour of Class
    fobj.nonfact();

    return 0;
}