/*
    Author : Pakshal Shashikant Jain
    Date : 22/09/2023
    Program : Write a program which accept string from user count number of
              words from string
              
              Input : "Marvellous Multi OS"
              Output : 3
              
              Input : "              Marvellous                  Multi           OS             Pune"
              Output : 4 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StringWord
{
    //Characteristics of Class
    private :
        char *str;

    //Constructor of Class
    public :
        StringWord(char *STR)
        {
            str = STR;
        }

    //Behaviour of Class To Count Number of Words Present in String
    int WordCount()
    {
        int icnt = 1;

        if(str == NULL)
        {
            return -1;
        }

        //Logic To Count
        if(*str == ' ')
        {
            while(*str == ' ')
            {
                str++;
            }
        }

        while(*str != '\0')
        {
            if(*str == ' ')
            {
                while((*str == ' ')&&(*str != '\0'))
                {
                    str++;
                }
                icnt++;
            }

            str++;
        }

        return icnt;
    }
};//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int iret = 0;
    char arr[50] = {'\0'};

    cout<<"Jay Ganesh.....\n";

    //Taking Input from user
    cout<<"Enter One String\n";
    scanf("%[^'\n']s",arr);

    //Creating object of StringWord Class
    StringWord *sobj = new StringWord(arr);

    //Call To Behaviours of Class
    iret = sobj->WordCount();

    //Printing Count of Words from Entered String
    cout<<"Count of Word From Entered String is : "<<iret;

    //Deallocating Memory of allocated
    delete sobj;

    return 0;
}