/*
    Author : Pakshal Shashikant Jain 
    Date : 06/04/2023
    Program : To print Below Given Pattern

    Input : iRow = 4 iCol = 4
    Output : * * * *
             * * *
             * *
             *
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<iostream>
using namespace std;

//Class Declaration
class Pattern 
{
    //Characteristics of Class
    private :
        int No = 0;
        int No2 = 0;
    //Constructor of class
    public :
        //Parameterised Constructor of Class
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
        printf("Printing Below Given Pattern : \n");
        for(i = this->No;i > 0;i--)
        {
            for(j = 1;j <= this->No2;j++)
            {
                if(i >= j)
                {
                    printf("*\t");
                }
                else 
                {
                    printf(" \t");
                }
            }
            printf("\n");
        }
    }
};//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;

    cout<<"Jay Ganesh....\n";

    //Taking input From User
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