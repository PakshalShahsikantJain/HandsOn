/*
    Author : Pakshal Jain
    Date : 02/03/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 3 iCol = 4
    Output : * # * #
             * # * #
             * # * # 
*/

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Display
{
    //Charateristics of Class
    private :   
        int No = 0;
        int No2 = 0;
    //Constructor of Class
    public :
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

        printf("Printing Given Pattern\n");
        
        //Logic To Print Given Pattern
        for(i = 1;i <= this->No;i++)
        {
            for(j = 1;j <= this->No2;j++)
            {
                if(j % 2 != 0)
                {
                    printf("*\t");
                }
                else 
                {
                    printf("#\t");
                }
            }
            printf("\n");
        }
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;

    cout<<"Jay Ganesh.....\n";

    //Taking Input From User
    cout<<"Enter Number of Rows You Want...\n";
    cin>>No;

    cout<<"Enter Number of Columns You Want....\n";
    cin>>No2;

    Display dobj(No,No2);
    dobj.Pattern();

    return 0;
}