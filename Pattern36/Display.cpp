/*
    Author : Pakshal Shashikant Jain 
    Date : 19/04/2023
    Program : To Print Below Given Pattern 
    
    Input : iRow = 4 iCol = 4
    Output : 1 2 3 4 5           
             1 2     5
             1   3   5
             1     4 5
             1 2 3 4 5 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
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

        cout<<"Printing Below Given Pattern :\n";
        for(i = 1;i <= this->No;i++)
        {
            for(j = 1;j <= this->No2;j++)
            {
                if((i == j)||(i == 1)||(j == 1)||(i == this->No)||(j == this->No2))
                {
                    cout<<j<<"\t";
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;
    
    cout<<"Jay Ganesh...\n";

    //Taking input From User
    cout<<"Enter Number of Rows You Want \n";
    cin>>No;

    cout<<"Enter Number of Columns You Want \n";
    cin>>No2;

    //Creating object of Pattern Class
    Pattern pobj(No,No2);

    //Call To Behaviour of Class
    pobj.Display();

    return 0;
}