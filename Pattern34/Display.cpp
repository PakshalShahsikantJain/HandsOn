/*
    Author : Pakshal Shashikant Jain
    Date : 13/04/2023
    Program : To Print Below Given Pattern
    Input : iRow = 6 iCol = 6
    Output : * * * * * *
             *       * *
             *     *   *
             *   *     *
             * *       *
             * * * * * *
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declration
class Pattern
{
    //Characteristics of Class
    private :
        int No = 0;
        int No2 = 0;

    //Constructor of Class
    public :
        Pattern(int no,int no2)
        {
            this->No = no;
            this->No2 = no2;
        }
    
    //Behaviour of Class
    void Display()
    {
        int i = 0;
        int j = 0;

        //Logic To print Given Pattern 
        cout<<"Printing Below Given Pattern \n";
        for(i = this->No;i > 0;i--)
        {
            for(j = 1;j <= this->No2;j++)
            {
                if((i == j)||(i == 1)||(j == 1)||(i == this->No)||(j == this->No2))
                {
                    cout<<"*\t";
                }
                else 
                {
                    cout<<" \t";
                }
            }
            cout<<"\n";
        }
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;

    cout<<"Ganapati Bappa Morya.....\n";

    //Taking Input From User
    cout<<"Enter Number of Rows You Want \n";
    cin>>No;

    cout<<"Enter Number of Columns You Want \n";
    cin>>No2;

    //Call To Pattern Function
    Pattern pobj(No,No2);

    //Call To Behaviour of Class
    pobj.Display();

    return 0;
}