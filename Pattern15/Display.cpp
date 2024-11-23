/*
    Author : Pakshal Shashikant Jain 
    Date : 14/03/2023
    Program : To Print Below Given Pattern
    Input : iRow = 3 iCol = 5
    Output : A A A A A
             B B B B B
             C C C C C
*/

//Required Libraries
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Display
{
    //Characteristics of Class
    private :   
        int No = 0;
        int No2 = 0;
    //Constructor of Class
    public :
        Display(int no,int no2)
        {
            this->No = no;
            this->No2 = no2;
        }
    //Behaviour of Class
    void Pattern()
    {
        int i = 0;
        int j = 0;

        //Logic
        cout<<"Printing Below Given Pattern\n";
        for(i = 0;i < this->No;i++)
        {
            for(j = 0;j < this->No2;j++)
            {
                printf("%c\t",i + 65);
            }
            printf("\n");
        }
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;

    cout<<"Jay Ganesh.....\n";

    //Taking Input From User
    cout<<"Enter Number of Rows You Want\n";
    cin>>No;

    cout<<"Enter Number of Columns You Want\n";
    cin>>No2;

    //Creating object of Display Class
    Display dobj(No,No2);
    //Call To Behaviour of Class
    dobj.Pattern();

    return 0;
}