/*
    Author : Pakshal Shashikant Jain 
    Date : 13/08/2023
    Program : Write a program which accept string from user and toggle the case.
              
              Input : "Marvellous Multi OS"
              Output : mARVELLOUS mULTI os
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

//Class Declarations
class StrToggle
{
    //Characteristisc of Class
    private :
        char *str;

    //Constructor of Class
    public :
        StrToggle(char *STR)
        {
            str = STR;
        }

    //Behaviour of Class To Toggle String 
    void Toggle()
    {
        if(str == NULL)
        {
            return;
        }

        //Logic To Toggle String Case
        while(*str != '\0')
        {
            if((*str >= 'A')&&(*str <= 'Z'))
            {
                *str = *str + 32;
            }
            else if((*str >= 'a')&&(*str <= 'z'))
            {
                *str = *str - 32;
            }

            *str++;
        }
    }
};//End of Class

//Main Function
int main()
{
    char arr[20];

    cout<<"Jay Ganesh.....\n";

    //Taking input from user
    cout<<"Enter One String\n";
    scanf("%[^'\n']s",arr);

    //Creating object of Conversion Class
    StrToggle *sobj = new StrToggle(arr);
    //Call To Behaviour of Class
    sobj->Toggle();

    //Printing Modified String 
    cout<<"Modifies String is : "<<arr;

    return 0;
}