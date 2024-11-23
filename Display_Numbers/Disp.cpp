/*
    Author : Pakshal Jain
    Date : 11/09/2022
    Program : To Print Numbers From Entered Number Till 1
*/

//Required Imports
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
        //Parameterized Constructor
        Display(int no)
        {
            this->No = no; 
        }
    
    //Behaviour of Class
    void Disp()
    {
        int i = 0;

        printf("Printing Numbers From %d Number Till 1\n",this->No);
        
        for(i = this->No;i > 0;i--)
        {
            printf("%d ",i);
        }
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int No = 0;

    cout<<"Jay Ganesh.....\n";
    
    cout<<"Enter One Number....\n";
    cin>>No;

    Display dobj(No);
    dobj.Disp();

    return 0;
}