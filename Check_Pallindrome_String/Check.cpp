/*
    Author : Pakshal Shashikant Jain 
    Date : 21/09/2023
    Program : Accept string from user and check whether the string is palindrome    
              or not without considering its case.

              Input : “1abccBA1”
              Output : TRUE
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class String
{
    //Characteristics of Class
    private :   
        char *str;

    //Constructor of Class
    public : 
        String(char *STR)
        {
            str = STR;
        }
    //Behaviour of Class TO Check String is Pallindrom or not
    bool StrPallindrome()
    {
        char *first = NULL;
        char *last = NULL;

        first = str;
        last = str;

        if(str == NULL)
        {
            return false;
        }

        //Logic To Check
        while(*last != '\0')
        {
            last++;
        }

        last--;

        while(first <= last)
        {
            if((*first >= 'A')&&(*first <= 'Z'))
            {
                *first = *first + 32;
            }

            if(last != first)
            {
                if((*last >= 'A')&&(*last <= 'Z'))
                {
                    *last = *last + 32;
                }
            }

            if(*first != *last)
            {
                break;
            }

            first++;
            last--;
        }

        if(*first != *last)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};//End of Class

////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    bool bret = false;
    char arr[50] = {'\0'};

    cout<<"Jay Ganesh....\n";
    
    //Taking Input from user
    cout<<"Enter One string \n";
    scanf("%[^'\n']s",arr);

    //Creating object of String Class
    String *sobj = new String(arr);

    //Call To Behaviours of Class
    bret = sobj->StrPallindrome();

    //Handeling Conditions if bret is TRUE
    if(bret == true)
    {
        cout<<"String is Pallindrome";
    }
    else
    {
        cout<<"String is not Pallindrom";
    }

    return 0;
}