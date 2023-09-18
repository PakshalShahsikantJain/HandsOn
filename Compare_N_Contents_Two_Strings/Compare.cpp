/*
    Author : Pakshal Shashikant Jain
    Date : 15/09/2023
    Program : Write a program which 2 strings from user and check whether first
              N contents of two strings are equal or not. (Implement strcmp()
              function).

              Input : "Marvellous Infosystems"
                      "Marvellous Logic Building"
                      10
              Output : TRUE
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StringCmp
{
    //Characteristics of Class
    private :
        char *src;
        char *dest;
        int icnt;

    //Constructor of Class
    public : 
        StringCmp(char *SRC,char *DEST,int iCNT)
        {
            src = SRC;
            dest = DEST;
            this->icnt = iCNT;
        }

    //Behaviour of Class To Compare N Contents of Strings
    bool StrNCmpX()
    {
        if((src == NULL)&&(dest == NULL))
        {
            return -1;
        }

        //Logic To Compare
        while(((*src != '\0')&&(*dest != '\0'))&&(this->icnt != 0))
        {
            if(*src != *dest)
            {
                break;
            }
            src++;
            dest++;
            this->icnt--;
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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[50] = {'\0'};
    char brr[50] = {'\0'};
    int icnt = 0;
    bool bret = false;

    cout<<"Jay Ganesh...\n";

    //Taking Input from user
    cout<<"Enter First String :\n";
    scanf("%[^'\n']s",arr);

    cout<<"Enter Second String :\n";
    scanf(" %[^'\n']s",brr);

    cout<<"Enter One Size\n";
    cin>>icnt;

    //Creating object of StringCmp Class
    StringCmp *cobj = new StringCmp(arr,brr,icnt);

    //Call To Behaviours of Class
    bret = cobj->StrNCmpX();

    if(bret == true)
    {
        cout<<"First N Contents of String are Equal";
    }
    else
    {
        cout<<"First N Contents of String are Not Equal";
    }

    //Deallocating Memory of Object Created
    delete cobj;

    return 0;
}