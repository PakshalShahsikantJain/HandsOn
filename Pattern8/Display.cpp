/*
    Author : Pakshal Jain 
    Date : 19/02/2023
    Program : To Print Below Given Pattern 
    
    Input : iRow = 4 iCol = 3
    Output : * * *
             * * *
             * * *
             * * * 
*/

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class Pattern 
{
    //Characteristics of Class
    private :
        int Row = 0;
        int Col = 0;
    
    //Constructor of Class
    public :
        //Parameterised Constructor of Class
        Pattern(int no,int no2)
        {
            this->Row = no;
            this->Col = no2;
        }
    
    //Behaviour of Class
    void Display()
    {
        int i = 0;
        int j = 0;

        cout<<"Printing Given Pattern\n";
        for(i = 1;i <= this->Row;i++)
        {
            for(j = 1;j <= this->Col;j++)
            {
                printf("*\t");
            }
            printf("\n");
        }
    }
};//End of Class 

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function of Class
int main()
{
    int No = 0;
    int No2 = 0;

    cout<<"Jay Ganesh...\n";

    //Taking Input From User
    cout<<"Enter Number of Rows You Want\n";
    cin>>No;

    cout<<"Enter Number of Columns You Want\n";
    cin>>No2;

    //Creating Object of Pattern Class
    Pattern pobj(No,No2);
    //Call To Behaviour of Class
    pobj.Display();

    return 0;
}