/*
    Author : Pakshal Shashikant Jain
    Date : 03/03/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 3 iCol = 4
    Output : 1 1 1 1
             2 2 2 2
             3 3 3 3
             4 4 4 4 
*/

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class Pattern 
{
    //Charateristics of Class
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

        printf("Printing Given Pattern : \n");
        for(i = 1; i <= this->No;i++)
        {
            for(j = 1;j <= this->No2;j++)
            {
                printf("%d\t",i);
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