/*
    Author : Pakshal Shashikant Jain 
    Date : 05/03/2023
    Program : To Print Below Given Pattern
    Input : iRow = 4 iCol = 4
    Output : A B C D
             a b c d
             A B C D
             a b c d 

*/

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration 
class Pattern
{
    //Chararteristics of Class
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
        printf("Printing Given Pattern : \n");
        for(i = 0;i < this->No;i++)
        {
            for(j = 0;j < this->No2;j++)
            {
                if(i % 2 == 0)
                {
                    printf("%c\t",j + 65);
                }
                else 
                {
                    printf("%c\t",j + 97);
                }
            }
            printf("\n");
        }
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Fuction 
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

    //Cretaing object of Pattern Class
    Pattern pobj(No,No2);
    //Call To Behaviour of Class
    pobj.Display();

    return 0;
}