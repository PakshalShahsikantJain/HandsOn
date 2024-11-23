/*
    Author : Pakshal Shashikant Jain 
    Date : 12/08/2023
    Program : Write a program which accept string from user and convert it into
              lower case.

              Input : "Marvellous Multi OS"
              Output : marvellous multi os 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

//Class Declarations
class Conversion 
{
    //Characteristisc of Class
    private :
        char *str;

    //Constructor of Class
    public :
        Conversion(char *STR)
        {
            str = STR;
        }

    //Behaviour of Class To Convert String 
    void Convert()
    {
        if(str == NULL)
        {
            return;
        }

        //Logic To Convert String To LowerCase
        while(*str != '\0')
        {
            if((*str >= 'A')&&(*str <= 'Z'))
            {
                *str = *str + 32;
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
    Conversion *cobj = new Conversion(arr);
    //Call To Behaviour of Class
    cobj->Convert();

    //Printing Converted String 
    cout<<"Converted String is : "<<arr;

    return 0;
}