/*
    Author : Pakshal Jain 
    Date : 02/03/2023
    Program : To Print Below Given Pattern 

    Input : iRow = 3 iCol = 5
    Output : 5 4 3 2 1
             5 4 3 2 1
             5 4 3 2 1 
*/

//Required Libraries
#include<iostream>
using namespace std;

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

        //Logic To Print Pattern
        cout<<"Printing Given Pattern\n";
        for(i = 1;i <= this->No;i++)
        {
            for(j = this->No2;j > 0;j--)
            {
                printf("%d\t",j);
            }
            printf("\n");
        }
    }
};

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;

    cout<<"Jay Ganesh...\n";

    cout<<"Enter Number of Rows You Want..\n";
    cin>>No;

    cout<<"Enter Number of Columns You Want..\n";
    cin>>No2;

    //Creating object of Pattern Class
    Pattern pobj(No,No2);
    //Call To Behaviour of Class
    pobj.Display();

    return 0;
}