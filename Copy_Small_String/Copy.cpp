/*
    Author : Pakshal Shashikant Jain
    Date : 25/08/2023
    Program : Write a program which accept string from user and copy small
              characters of that string into another string.

              Input : "Marvellous multi OS"
              Output : "arvellous multi"
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class CopyString
{
    //Characteristics of Class
    private :
        char *src;
        char *dest;

    //Constructor of Class
    public :
        CopyString(char *SRC,char *DEST)
        {
            src = SRC;
            dest = DEST;
        }
    
    //Behaviour of Class To Copy Small Characters from Entered String
    void StrCpySmall()
    {
        //Handeling Conditions if Strings are NULL
        if((src == NULL)&&(dest == NULL))
        {
            return;
        }

        //Logic To Copy
        while(*src != '\0')
        {
            if(*src == ' ')
            {
                *dest = ' ';
                dest++;
            }

            if((*src >= 'a')&&(*src <= 'z'))
            {
                *dest = *src;
                dest++;
            }

            src++;
        }
    }
};//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};

    cout<<"Jay Ganesh.....\n";

    //Taking Input from user
    cout<<"Enter One String..\n";
    scanf("%[^'\n']s",arr);

    //Creating object of CopyString Class
    CopyString *cobj = new CopyString(arr,brr);
    //Call To Behaviour of CLass
    cobj->StrCpySmall();

    //Printing Copied String 
    printf("Small Letters Copied From Entered String is : %s",brr);

    return 0;
}