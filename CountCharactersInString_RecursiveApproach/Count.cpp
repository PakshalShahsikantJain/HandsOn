/*
    Author : Pakshal Shashikant Jain 
    Date : 07/05/2024
    Program : Write a recursive program which accept string from user and count number of characters.
              
              Input : Hello
              Output : 5 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class String 
{
    //Characteristics of Class
    private :
        int icnt;
        char *str;

    //Constructor of Class
    public :
        String()
        {
            this->icnt = 0;
        }
    //Behaviour of Class To Count Number of Characters
    int Count(char *str)
    {
        if(*str != '\0')
        {
            str++;
            this->icnt++;

            //Recursive Function Call To Behaviour of Class
            this->Count(str);
        }
        else 
        {
            return this->icnt;
        }
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[30] = {'\0'};
    int iret = 0;
    String *sobj = NULL;

    cout<<"Jay Ganesh....\n";

    //Taking Input From user    
    cout<<"Enter One String : ";
    scanf("%[^'\n']s",&arr);

    //Creating object of String Class
    sobj = new String();

    //Call To Behaviour of Class
    iret = sobj->Count(arr);

    //Printing Count Calculated
    cout<<"Count of Character Present in String is : "<<iret;

    //Deallocating Memory of object created
    free(sobj);
    sobj = NULL;

    return 0;
}