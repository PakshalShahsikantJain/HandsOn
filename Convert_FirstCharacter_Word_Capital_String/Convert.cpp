/*
    Author : Pakshal Shashikant Jain
    Date : 30/09/2023
    Program : Write a program which accept string from user and replace each
              occurrence of first character of each word into capital case.
    
              Input : "marvellous infosystems by Piyush khairnar"
              Output : "Marvellous Infosystems By Piyush Khairnar"
*/

//Required libraries
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StringConvert
{
    //Characteristics of Class
    private :
        char *str;

    //Constructor of Class
    public :
        StringConvert(char *STR)
        {
            str = STR;
        }

    //Behaviour of Class To Convert First Character of Words of Entered String
    void StrCap()
    {
        if(str == NULL)
        {
            return;
        }

        //Logic To Convert
        if((*str >= 'a')&&(*str <= 'z'))
        {
            *str = *str - 32;
        }

        while(*str != '\0')
        {
            if(*str == ' ')
            {
                while((*str == ' ')&&(*str != '\0'))
                {
                    str++;
                }

                if((*str >= 'a')&&(*str <= 'z'))
                {
                    *str = *str - 32;
                }
            }

            str++;
        }
    }
};//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[50] = {'\0'};

    cout<<"Jay Ganesh..\n";

    //Taking Input from user
    printf("Enter One String \n");
    scanf("%[^'\n']s",arr);

    //Creating object of StringConvert Class 
    StringConvert *sobj = new StringConvert(arr);
    //Call To Behaviours of Class
    sobj->StrCap();

    //Printing Modified String
    printf("Modified String is : %s",arr);

    delete sobj;
    
    return 0;
}