/*
    Author : Pakshal Shashikant Jain 
    Date : 15/03/2023
    Program : To Print Below Given Pattern

    Input : iRow = 3 iCol = 4
    Output : 1 2 3 4
             5 6 7 8
             9 10 11 12 

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
        int k = 1;

        printf("Printing Below Given Pattern : \n");
        for(i = 0;i < this->No;i++)
        {
            for(j = 0;j < this->No2;j++)
            {
                printf("%d\t",k);
                k = k + 1;
            }
            printf("\n");
        }
    }
};//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;

    cout<<"Jay Ganesh...\n";

    //Taking Input From User
    cout<<"Enter Number of Rows you Want\n";
    cin>>No;

    cout<<"Enter Number of Columns You Want\n";
    cin>>No2;   

    //Creating object of Pattern Class
    Pattern pobj(No,No2);

    //Behaviour of Class
    pobj.Display();

    return 0;
}