/*
    Author : Pakshal Shashikant Jain 
    Date : 08/04/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 5 iCol = 5
    Output : 1 2 3 4 5
               2 3 4 5
                 3 4 5
                   4 5
                     5
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display 
{
    //Characteristics of Class
    private :
        int No = 0;
        int No2 = 0;
    //Constructor of Class
    public :
        //Parameterised Constructor of Class
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

        //Logic To Print Given Pattern 
        printf("Printing Below Given Pattern : \n");
        for(i = 1;i <= this->No;i++)
        {
            for(j = 1;j <= this->No2 ;j++)
            {
                if(i <= j)
                {
                    printf("%d\t",j);
                }
                else 
                {
                    printf(" \t");
                }
            }
            printf("\n");
        }
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;

    printf("Jay Ganesh....\n");

    //Taking Input From User
    printf("Enter Number of Rows you Want \n");
    scanf("%d",&No);

    printf("Enter Number of Columns You Want\n");
    scanf("%d",&No2);

    //Creating object of Display Class
    Display dobj(No,No2);

    //Call To Behaviour of Class
    dobj.Pattern();

    return 0;
}