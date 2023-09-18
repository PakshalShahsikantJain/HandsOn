/*
    Author : Pakshal Shashikant Jain 
    Date : 14/09/2023
    Program : Write a program which 2 strings from user and check whether
              contents of two strings are equal or not. (Implement strcmp()
              function).

              Input : "Marvellous Infosystems"
                      "Marvellous Infosystems"
              Output : TRUE 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StringCmp
{
    //Characteristics of Class
    private :
        char *src;
        char *dest;

    //Constructor of Class
    public :
        //Paramaterised Constructor of Class
        StringCmp(char *SRC,char *DEST)
        {
            src = SRC;
            dest = DEST;
        }

    //Behaviour of Class To Compare Two Strings
    bool StrCmpX()
    {
        if((src == NULL)&&(dest == NULL))
        {
            return -1;
        }

        //Logic To Compare
        while((*src != '\0')&&(*dest != '\0'))
        {
            if(*src != *dest)
            {
                break;
            }
            src++;
            dest++;
        }
        if(*src != *dest)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[50] = {'\0'};
    char brr[30] = {'\0'};
    bool bret = false;

    cout<<"Jay Ganesh....\n";

    //Taking Input from user
    cout<<"Enter First String : \n";
    scanf("%[^'\n']s",arr);

    cout<<"Enter Second String \n";
    scanf(" %[^'\n']s",brr);

    //Creating object of StringCmp Function
    StringCmp *sobj = new StringCmp(arr,brr);
    //Call To Behaviours of Class
    bret = sobj->StrCmpX();

    //Handeling Condition if bret is TRUE
    if(bret == true)
    {
        cout<<"Both string are Equal \n";
    }
    else
    {
        cout<<"Both Strings are Not Equal\n";
    }

    return 0;
}