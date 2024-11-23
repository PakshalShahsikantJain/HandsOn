/*
    Author : Pakshal Shashikant Jain 
    Date : 9/5/2024
    Program : Write a recursive program which accept string from user and count white
              spaces.

              Input : HE llo WOr lD
              Output : 3  
*/

//Required Libraries
#include<iostream>
using namespace std;

class String 
{
    //Characteristics of Class
    private :            // Access Specifier
        int icnt;       //Instance Variable of Class

    public :           //Access Specifier
        String()       //Constructor of Class
        {
            this->icnt = 0;
        }
    
    //Behaviour of Class To Calculate White Spaces
    int WhiteSpace(char *str)
    {
        if(*str != '\0')
        {
            if(*str == ' ')
            {
                this->icnt++;
            }
            str++;

            //Call To Behaviour of Class
            WhiteSpace(str);
        }
        else
        {
            return icnt;
        }
    }
};

//Main Function
int main()
{
    int iret = 0;
    char arr[30] = {'\0'};

    cout<<"Jay Ganesh.....\n";

    //Taking Input From User
    cout<<"Enter One String : ";
    scanf("%[^'\n']s",arr);
    
    //Creating object of String Class
    String *sobj = new String();
    iret = sobj->WhiteSpace(arr);

    //Printing Count of White Spaces
    cout<<"Count of White Spaces in Entered String"<<arr<<"is : "<<iret;

    //Deallocating Memory of Object Created
    free(sobj);
    sobj = NULL;

    return 0;
}