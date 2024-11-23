/*
    Author : Pakshal Shashikant Jain 
    Date : 16/08/2023
    Program : Write a program which accept string from user and count number of
              white spaces
    
              Input : “MarvellouS”
              Output : 0
    
              Input : “MarvellouS Infosystems”
              Output : 1
            
              Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
              Output : 5
*/

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StrWhiteCount
{
    //Characteristics of Class
    private :
        char *str;

    //Constructor of Class
    public :
        StrWhiteCount(char *STR)
        {
            str = STR;
        }

    //Behaviour of Class To Count White Spaces from Entered String 
    int Count()
    {
        int icnt = 0;

        if(str == NULL)
        {
            return -1;
        }

        //Logic To Count White Spaces From Entered String 
        while(*str != '\0')
        {
            if(*str == ' ')
            {
                icnt++;
            }

            *str++;
        }

        return icnt;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[30];
    int iret = 0;

    cout<<"Jay Ganesh.....\n";

    //Taking Input from user
    cout<<"Enter String \n";
    scanf("%[^'\n']s",arr);

    //Creating object of StrWhiteCount Class 
    StrWhiteCount *sobj = new StrWhiteCount(arr);

    //Call To Behaviour of Class
    iret = sobj->Count();

    //Printing Count Calculated
    printf("Count of White Spaces in Entered String is : %d",iret);

    return 0;
}