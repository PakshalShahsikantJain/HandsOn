/*
    Author : Pakshal Shashikant Jain
    Date : 05/10/2023
    Program : Input : "Marvellous"
              Output : 
              M
              M a
              M a r
              M a r v
              M a r v e
              M a r v e l
              M a r v e l l
              M a r v e l l o
              M a r v e l l o u
              M a r v e l l o u s

              Input : "PPA"
              Output : 
              P
              P P
              P P A 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class StringPattern
{
    //Characteristics of Class 
    private :
        char *str;
    
    //Constructor of Class
    public :
        //Parameterised Constructor of Class
        StringPattern(char *STR)
        {
            if(STR == NULL)
            {
                return;
            }
            str = STR;
        } 

    //Behaviour of Class To Display Given pattern
    void Display()
    {
        int i = 0;
        int j = 0;
        int icnt = 0;

        //Logic To Print Given Pattern
        while(str[icnt] != '\0')
        {
            icnt++;
        }

        cout<<"Printing Given Pattern \n";
        for(i = 0;i < icnt;i++)
        {
            for(j = 0;j < icnt;j++)
            {
                if(i >= j)
                {
                    printf("%c\t",str[j]);
                }
            }
            printf("\n");
        }
    }
};//End of class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[50] = {'\0'};

    printf("Jay Ganesh....\n");
    
    printf("Enter One String\n");
    scanf("%[^'\n']s",arr);

    //Creating object of StringPattern Class
    StringPattern *sobj = new StringPattern(arr);

    //Call To Beahviours of Class
    sobj->Display();

    //Dellocating Memory of Object Created
    delete sobj;

    return 0;
}