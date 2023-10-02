/*
    Author : Pakshal Shashikant Jain
    Date : 02/10/2023
    Program : Write a program which accept string from user and print below
              pattern.

              Input : "Marvellous"
              Output : M a r v e l l o u s
                       M a r v e l l o u
                       M a r v e l l o
                       M a r v e l l
                       M a r v e l
                       M a r v e
                       M a r v
                       M a r
                       M a
                       M

              Input : "PPA"
              Output : P P A
                       P P
                       P 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern
{
    //Characteristics of Class
    private :
        char *str;

    //Constructor of Class
    public :
        //Parameterised Constructor of Class
        Pattern(char *STR)
        {
            str = STR;
        }

    //Behaviour of Class To Take Input from user
    void Display()
    {
        int i = 0;
        int j = 0;
        int icnt = 0;

        if(str == NULL)
        {
            return;
        }

        //Logic To Print Given Pattern
        while(str[icnt] != '\0')
        {
            icnt++;
        }

        cout<<"Printing Given Pattern : \n";
        for(i = icnt - 1;i >= 0;i--)
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
};//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    char arr[50] = {'\0'};

    cout<<"Jay Ganesh...\n";

    //Taking Input from user
    cout<<"Enter One String\n";
    scanf("%[^'\n']s",arr);

    //Creating object of Pattern Class
    Pattern *pobj = new Pattern(arr);
    
    //Call To Behaviours of Class
    pobj->Display();

    return 0;
}