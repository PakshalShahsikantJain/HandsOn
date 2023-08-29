/*
    Author : Pakshal Jain 
    Date : 28/08/2023
    Program : Write a program which accept string from user and copy that
              characters of that string into another string by removing all white
              spaces.

              Input : "Marvel lous Pyth on"
              Output : "MarvellousPython"
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class CopyString
{
    //Characteristics of Class
    private :
        char *src;
        char *dest;

    //Constructor of Class
    public :
        //Parameterised Constructor of Class
        CopyString(char *SRC,char *DEST)
        {
            src = SRC;
            dest = DEST;
        }

    //Behaviour of Class To Copy String After Removing White Spaces
    void StrCpyX()
    {
        //Handling Conditions if Pointers are NULL
        if((src == NULL)&&(dest == NULL))
        {
            return;
        }

        //Logic To Copy
        while(*src != '\0')
        {
            if(*src != ' ')
            {
                *dest = *src;
                dest++;
            }

            src++;
        }
    }
};//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[50] = {'\0'};
    char brr[50] = {'\0'};

    cout<<"Jay Ganesh.....\n";

    //Taking Input from user   
    printf("Enter One String \n");
    scanf("%[^'\n']s",arr);

    //Creating object of CopyString Class
    CopyString  *cobj = new CopyString(arr,brr);
    //Call To Behaviour of Class
    cobj->StrCpyX();

    //Printing Copied String
    printf("String Copied After Removing White Spaces is : %s",brr);

    return 0;
}