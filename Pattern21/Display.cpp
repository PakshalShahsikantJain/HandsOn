/*
    Author : Pakshal Shashikant Jain 
    Date : 22/03/2023
    Program : To Print Below Given Pattern
    Input : iRow = 5 iCol = 5
    Output : 1  2  3  4  5
            -1 -2 -3 -4 -5
             1  2  3  4  5
            -1 -2 -3 -4 -5
             1  2  3  4  5
*/

//Required Librariess
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern 
{
    //Characteristics of Class
    private :
        int No = 0;
        int No2 = 0;
    
    //Constructor of Class
    public :
        //Parameterised Constrcutor of Class
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

        //Logic To Display Given Pattern
        cout<<"Printing Below Given Pattern\n";
        for(i = 0;i < this->No;i++)
        {
            for(j = 1;j <= this->No2;j++)
            {
                if(i % 2 == 0)
                {
                    printf(" %d\t",j);
                }
                else if(i % 2 != 0)
                {
                    printf("%d\t",(-j));
                }
            }
            printf("\n");
        }
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;

    cout<<"Jay Ganesh....\n";

    //Taking Input From User
    cout<<"Enter Number of Rows You Want\n";
    cin>>No;

    cout<<"Enter Number of Columns You Want\n";
    cin>>No2;

    //Creating object of Pattern Class
    Pattern pobj(No,No2);

    //Call To Behaviour of Class
    pobj.Display();

    return 0;
}