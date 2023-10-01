/*
    Author : Pakshal Shshikant Jain
    Date : 30/09/2023
    Program : Write a program which accept string from user and copy the
              contents into another string by removing extra white spaces.
                
              Input : Marvellous        multi          OS”
              Output : Marvellous multi OS”

*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StringCopy
{
    //Characteristics of Class
    private :
        char *src;
        char *dest;

    //Constructor of Class
    public :
        //Parameterised Constructor of Class
        StringCopy(char *SRC,char *DEST)    
        {
            src = SRC;
            dest = DEST;
        }  

    //Behaviour of Class To CopyString After Removing Extra White Spaces
    void StrCpyX()
    {
        if((src == NULL)&&(dest == NULL))
        {
            return;
        }

        //Logic To Remove
        while(*src != '\0')
        {
            if(*src == ' ')
            {
                while((*src == ' ')&&(*src != '\0'))
                {
                    src++;
                }
                *dest = ' ';
                dest++;
            }

            *dest = *src;
            dest++;
            src++;
        }
    }
};//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[50] = {'\0'};
    char brr[50] = {'\0'};

    cout<<"Jay Ganesh...\n";

    //Taking input from user
    cout<<"Enter One String \n";
    scanf("%[^'\n']s",arr);

    //Creating object of StringCopy Class
    StringCopy *sobj = new StringCopy(arr,brr);
    //Call To Behaviours of Class
    sobj->StrCpyX();

    //Printing Copied String
    cout<<"Copied String is : "<<brr<<"\n";

    //Deallocating Memory of Object Created
    delete sobj;

    return 0;
}