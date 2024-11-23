/*
    Author : Pakshal Shashikant Jain 
    Date : 18/03/2023
    Program : To Print Below Given Pattern
    
    Input : iRow = 4 iCol = 4
    Output : 1 2 3 4
             2 3 4 5
             3 4 5 6
             4 5 6 7 
*/

//Required Libraries
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

        //Logic To Print Pattern
        printf("Printing Below Given Pattern :\n");
        for(i = 0;i < this->No;i++)
        {
            for(j = 0;j < this->No2;j++)
            {
                printf("%d\t",k);
                k++;
                if(j == this->No2 - 1)
                {
                    k = k - 3;
                }
            }
            printf("\n");
        }
    }

};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int No2 = 0;

    printf("Jay Ganesh.....\n");

    //Taking input From User
    printf("Enter Number of Rows You Want...\n");
    scanf("%d",&No);

    printf("Enter Number of Columns You Want....\n");
    scanf("%d",&No2);

    //Creating Object of Pattern Class
    Pattern pobj(No,No2);

    //Call To Behaviour of Class
    pobj.Display();

    return 0;
}