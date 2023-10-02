/*
    Author : Pakshal Shashikant Jain
    Date : 02/10/2023
    Program : Write a program which accept string from user and print below
              pattern.

              Input : "Marvellous"
              Output : M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
              
              Input : "PPA"
              Output : P P A
                       P P A
                       P P A 
*/

/////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern
{
    //Characteristics of Class
    private :
        char *str;

    //Constructor of Class
    public :
        Pattern(char *STR)
        {
            str = STR;
        }
    //Behaviour of Class to Display Given Pattern
    void Display()
    {
        int i = 0;
        int j = 0;
        int icnt = 0;
        
        if(str == NULL)
        {
            return;
        }

        //Logic To Display Given Pattern
        while(str[icnt] != '\0')
        {
            icnt++;
        }

        for(i = 0;i < icnt;i++)
        {
            for(j = 0;j < icnt;j++)
            {
                printf("%c\t",str[j]);
            }
            printf("\n");
        }    
    }
};//End of Class

//////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[50] = {'\0'};

    cout<<"Jay Ganesh....\n";
    
    //Taking Input from user
    cout<<"Enter One String\n";
    scanf("%[^'\n']s",arr);

    //Creating object of Pattern Class
    Pattern *pobj = new Pattern(arr);

    //Call To Behaviour of Class
    pobj->Display();

    //Deallocating Memory of Object Created
    delete pobj;

    return 0;
}