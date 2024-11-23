/*
    Author : Pakshal Shashikant Jain 
    Date : 18/03/2023
    Program : To Print Below Given Pattern
*/

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call Declaration
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

    //Call To Display Function
    void Display()
    {
        int i = 0;
        int j = 0;

        //Logic To Print Pattern
        cout<<"Printing Below Given Pattern\n";
        for(i = 0;i < this->No;i++)
        {
            for(j = 0;j < this->No2;j++)
            {
                if(i % 2 == 0)
                {
                    printf("%c\t",j + 97);
                }
                else 
                {
                    printf("%d\t",j + 1);
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

    cout<<"Jay Ganesh.....\n";

    //Taking Input From User
    cout<<"Enter Number of Columns You Want\n";
    cin>>No;

    cout<<"Enter Number of Columns You Want\n";
    cin>>No2;

    //Creating object of Pattern Class
    Pattern pobj(No,No2);

    //Call To Display Function
    pobj.Display();

    return 0;
}