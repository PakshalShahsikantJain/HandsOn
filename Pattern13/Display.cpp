/*
    Author : Pakshal Shashikant Jain 
    Date : 04/03/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 4 iCol = 4
    Output : A B C D
             A B C D
             A B C D
             A B C D 
*/

//Required Libraries
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern 
{
    //Characteristics of Class
    private :
        int No = 0;
        int No2 = 0;

    //Constructor of Class
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

        //Logic To print Pattern 
        printf("Printing Given Pattern\n");
        for(i = 0;i < this->No;i++)
        {
            for(j = 0;j < this->No2;j++)
            {
                printf("%c\t",j + 65);
            }
            printf("\n");
        }
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;

    cout<<"Jay Ganesh....\n";
    
    //Taking input From User
    cout<<"Enter Number of Rows\n";
    cin>>No;

    cout<<"Enter Number of Columns\n";
    cin>>No2;

    //Creating Object of Pattern Class
    Pattern pobj(No,No2);
    //call To Behaviour of Class
    pobj.Display();

    return 0;
}