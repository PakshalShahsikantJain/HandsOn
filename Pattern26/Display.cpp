/*
	Author : Pakshal Shashikant Jain 
	Date : 02/04/2023
	Program : To Print Below Given Pattern

	Input : iRow = 6 iCol = 5 
	Output : 1 2 3 4
             1 * * 4
             1 * * 4
             1 2 3 4 
*/

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern 
{
    //Constructor of Class
    private :
        int No = 0;
        int No2 = 0;

    //Characteristics of Class
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

        //Logic To Print Given Pattern 
        cout<<"Printing Below Given Pattern\n";
        for(i = 1;i <= this->No;i++)
        {
            for(j = 1;j <= this->No2;j++)
            {
                if((i == 1)||(j == 1)||(i == No)||(j == No2))
                {
                    printf("%d\t",j);
                }
                else 
                {
                    printf("*\t");
                }
            }
            printf("\n");
        }
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function 
int main() 
{
    int No = 0;
    int No2 = 0;

    printf("Jay Ganesh....\n");

    //Taking Input From User
    printf("Enter Number of Rows You Want...\n");
    scanf("%d",&No);

    printf("Enter Number of Columns You Want...\n");
    scanf("%d",&No2);   

    //Creating object of Pattern Class
    Pattern pobj(No,No2);

    //Call To Display Function
    pobj.Display();

    return 0;
}