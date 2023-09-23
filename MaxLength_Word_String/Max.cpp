/*
    Author : Pakshal Shashikant Jain
    Date : 23/09/2023
    Program : Write a program which accept string from user and return length of
              largest word.

              Input : "Marvellous Multi OS Infosystems"
              Output : 11
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StringWord
{
    //Characteristics of Class
    private :
        char *str;

    //Constructor of Class
    public :
        //Parameterised Constructor of Class
        StringWord(char *STR)
        {
            str = STR;
        }

    //Behaviour of Class To Find Length of Largest of Word
    int MaxWord()
    {
        int icnt = 0;
        int iMax = 0;

        //Logic To Count
        while(*str != '\0')
        {
            if(*str == ' ')
            {
                while((*str == ' ')&&(*str != '\0'))
                {
                    str++;
                }
                icnt = 0;
            }
            else
            {
                icnt++;
                if(icnt > iMax)
                {
                    iMax = icnt;
                }
                str++;
            }
        }

        return iMax;
    }
};//End of Class

//////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int iret = 0;
    char arr[50] = {'\0'};

    cout<<"Jay Ganesh....\n";

    //Taking Input from user
    cout<<"Enter One String :\n";
    scanf("%[^'\n']s",arr);

    //Creating object of StringWord Class
    StringWord *sobj = new StringWord(arr);
    //Call To Behaviour of Class
    iret = sobj->MaxWord();

    //Printing Length of Largest Word
    cout<<"Length of Largest Word is : "<<iret<<"\n";

    return 0;
}