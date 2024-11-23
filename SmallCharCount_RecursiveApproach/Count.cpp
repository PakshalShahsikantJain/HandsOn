/*
    Author : Pakshal Shashiaknt Jain
    Date : 13/05/2024
    Program : Write a recursive program which accept string from user and count number of small characters.
              
              Input : HElloWOrlD
              Output : 5
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class String 
{
    //Constructor of Class
    private :
        int icnt;
    public : 
        //Constructor of Class
        String()
        {
            this->icnt = 0;
        }
    
    //Behaviour of Class
    int Count(char *str)
    {
        if(*str != '\0')
        {
            if((*str >= 'a')&&(*str <= 'z'))
            {
                this->icnt++;
            }
            str++;

            //Recurive Call To Count Behaviour of Classs
            this->Count(str);
        }

        return this->icnt;
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[30] = {'\0'};
    int iret = 0;

    cout<<"Jay Ganesh.....";

    //Taking Input From User
    cout<<"Enter One String : ";
    scanf("%[^'\n']s",&arr);

    //Creating object of String Class
    String *sobj = new String();
    //Call To Behaviour of Class
    iret = sobj->Count(arr);

    //Printing Count Found
    printf("Count of Small Characters in Entered String %s is : %d",arr,iret);

    //Deallocating Memory of Object Created
    free(sobj);
    sobj = NULL;
}