/*
    Author : Pakshal Shashikant Jain 
    Date : 11/08/2023
    Program : Write a program which accept string from user and display it inn
              reverse order.

              Input : "MarvellouS"
              Output : "SuollevraM"
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Librarires
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StrRev 
{
    //Characteristisc of Class
    public  : 
        char *str;

    //Constructor of Class
    public :
        StrRev(char *STR)
        {
            str = STR;
        }

    //Behaviour of Class To Reverse Entered String
    void Reverse()
    {
        int istart = 0;
        int iend = 0;
        char temp = '\0';

        if(str == NULL)
        {
            return;
        }

        //Logic To Reverse
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
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[30];

    //Taking Input from user
    printf("Enter One String \n");
    scanf("%[^'\n']s",arr);

    //Creating of StrRev Class
    StrRev *sobj = new StrRev(arr);

    //Call To Bheaviour of Class
    sobj->Reverse();    

    //Printing Reversed String
    printf("Reverse String is : %s",arr);

    return 0;
}