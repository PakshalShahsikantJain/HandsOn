/*
    Author : Pakshal Shashikant Jain
    Date : 26/09/2023
    Program : Write a program which accept string from user and reverse each
              word in place.
              
              Input : "Marvellous Multi OS
              Output : "suollevraM itluM SO" 
*/

///////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////

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

    //Behaviour of Class to Reverse Each Word of String
    void StrWrdRev()
    {
        char *first = str;
        char *last = str;
        char temp = '\0';

        //Logic To Reverse
        if(str == NULL)
        {
            return;
        }

        while(*last != '\0')
        {
            if(*last == ' ') 
            {
                while((*last == ' ')&&(*last != '\0'))
                {
                    last++;
                }
                last--;
            }
            else
            {
                first = last;

                while((*last != ' ')&&(*last != '\0'))
                {
                    last++;
                }
                last--;

                char *i = first;
                char *j = last;

                while(i <= j)
                {
                    temp = *i;
                    *i = *j;
                    *j = temp;

                    
                    i++;
                    j--;
                }
            }
            last++;
        }
    }
};//End of Class

/////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[50] = {'\0'};

    cout<<"Jay Ganesh.....\n";
    
    //Taking Input from user
    cout<<"Enter One String \n";
    scanf("%[^'\n']s",arr);

    //Creating object of StringWord Class
    StringWord *sobj = new StringWord(arr);

    //Call To Behaviours of Class
    sobj->StrWrdRev();

    //Printing String After Reversing Each Word
    printf("String After Reversing Each Word is : %s",arr);

    delete sobj;
    
    return 0;
}