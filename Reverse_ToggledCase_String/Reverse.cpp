/*
    Author : Pakshal Shashikant Jain 
    Date : 18/09/2023
    Program : Accept sing from user and reverse the contents of that string by
              toggling the case.

              Input : “aCBdef”
              Output : “FEDbcA” 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class StringRevTog 
{
    //Characteristics of Class
    private :
        char *str;

    //Constructor of Class
    public :
        StringRevTog(char *STR)
        {
            str = STR;
        }

    //Behaviour of Class To Reverse After Toggling Case
    void StrRevTogX()
    {
        char temp = '\0';
        char *First = NULL;
        char *Last = NULL;

        First = str;
        Last = str;

        //Logic
        while(*Last != '\0')
        {
            Last++;
        }
        Last--;

        while(First <= Last)
        {
            if((*First >= 'A') && (*First <= 'Z'))
            {
                *First = *First + 32;
            }
            else if((*First >= 'a') && (*First <= 'z'))
            {
                *First = *First - 32;
            }

            if(Last != First)
            {
                if((*Last >= 'A') && (*Last <= 'Z'))
                {
                    *Last = *Last + 32;
                }
                else if((*Last >= 'a') && (*Last <= 'z'))
                {
                    *Last = *Last - 32;
                }
            }

            temp = *First;
            *First = *Last;
            *Last = temp;

            First++;
            Last--;
        }
    }
};//End of Class

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[50] = {'\0'};

    cout<<"Jay Ganesh....\n";
    
    //Taking Input from user
    cout<<"Enter One String :\n";
    scanf("%[^'\n']s",&arr);

    //Creating object of StringRevTog Class
    StringRevTog *sobj = new StringRevTog(arr);

    //Call To Behaviours of Class
    sobj->StrRevTogX();

    //Printing Reversed String 
    cout<<"Reversed String After Toggling case : "<<arr;

    //Deallocating Memory of object Created
    delete sobj;

    return 0;
}