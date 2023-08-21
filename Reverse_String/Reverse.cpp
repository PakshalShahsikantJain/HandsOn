/*
    Author : Pakshal Shashikant Jain 
    Date : 21/08/2023
    Program : Write a program which accept string from user reverse that string
              in place.

              Input : “abcd”
              Output : “dcba”

              Input : “abba”
              Output : “abba” 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries 
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class ReverseString
{
    //Characteristics of Class
    private :
        char *str;
    //Constructor
    public : 
        ReverseString(char *STR)
        {
            str = STR;
        }
    //Behaviour of Class To Reverse 
    void Reverse()
    {
        int istart = 0;
        int iend = 0;
        char temp = '\0';

        if(str == NULL)
        {
            return;
        }

        //Logic To Reverse The String
        while(str[iend] != '\0')
        {
            iend++;
        }

        iend--;

        while(istart < iend)
        {
            temp = str[istart];
            str[istart] = str[iend];
            str[iend] = temp;

            istart++;
            iend--;
        }
    }    
};//End of class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Fuction 
int main() 
{
    char arr[20] = {'\0'};

    cout<<"Jay Ganesh....\n";

    //Taking Input from user
    cout<<"Enter One String...\n";
    scanf("%[^'\n']s",arr);

    //Creating object of ReverseString Class
    ReverseString *robj = new ReverseString(arr);

    //Call To Behaviour of Class
    robj->Reverse();

    //Printing Modified String
    printf("Modified String is : %s",arr);

    return 0;
}