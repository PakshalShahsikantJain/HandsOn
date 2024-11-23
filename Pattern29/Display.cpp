/*
    Author : Pakshal Shashikant Jain 
    Date : 07/04/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 5 iCol = 5
    Output : $ * * * *
             # $ * * *
             # # $ * *
             # # # $ *
             # # # # $
*/

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Display 
{
    //Characterstics of Class
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

        //Logic to Print Given Pattern 
        cout<<"Printing Below Given Pattern : \n";
        for(i = 1; i <= this->No;i++)
        {
            for(j = 1;j <= this->No2;j++)
            {
                if(i == j)
                {
                    printf("$\t");
                }
                else if(i > j)
                {
                    printf("#\t");
                }
                else 
                {
                    printf("*\t");
                }
            }
            printf("\n");
        }
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    int No2 = 0;

    cout<<"Ganapati Bappa Morya\n";

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
