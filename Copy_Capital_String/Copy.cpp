/*
    Author : Pakshal Shashikant Jain
    Date : 25/08/2023
    Program : Write a program which accept string from user and copy capital
              characters of that string into another string.
            
              Input : "Marvellous Multi OS"
              Output : "MMOS"
*/

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class CopyString
{
    //Characteristics of Class
    private :
        char *src;
        char *dest;

    //Constructor of Class
    public :    
        //Parameterised Constructor of Class
        CopyString(char *SRC,char *DEST)
        {
            src = SRC;
            dest = DEST;
        }

    //Behaviour of Class To Class To Copy Capital Letters From Entered String into Another String
    void StrCpyCap()
    {
        //Handeling Contions if Source and Destination String are NULL
        if((src == NULL)&&(dest == NULL))
        {
            return;
        }

        //Logic To Copy Contents
        while(*src != '\0')
        {
            if((*src >= 'A')&&(*src <= 'Z'))
            {
                *dest = *src;
                dest++;
            }
            src++;
        }
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};

    cout<<"Jay Ganesh....\n";

    //Taking Input from user
    cout<<"Enter One String\n";
    scanf("%[^'\n']s",arr);

    //Creating object of CopyString class To Take Input from user
    CopyString *cobj = new CopyString(arr,brr);
    //Call To behaviour of Class
    cobj->StrCpyCap();

    //Printing Copied String
    printf("Capital Letters Copied From Entered String is : %s",brr);

    return 0;
}