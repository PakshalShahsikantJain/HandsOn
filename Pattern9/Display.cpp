/*
    Author : Pakshal Shashikant Jain 
    Date : 19/02/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 4 iCol = 3
    Output :    1 2 3
                1 2 3
                1 2 3
                1 2 3 
*/

//Required Libraries
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
        Pattern(int No,int No2)
        {
            this->Row = No;
            this->Col = No2;
        }
    
    //Behaviour of Class
    void Display()
    {
        int i = 0;
        int j = 0;

        //Logic To Print
        for(i = 1;i <= this->Row;i++)   
        {
            for(j = 1;j <= this->Col;j++)
            {
                printf("%d\t",j);
            }
            printf("\n");
            j = 0;
        }
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;

    cout<<"Ganapati Bappa Morya...\n";

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