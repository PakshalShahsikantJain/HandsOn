/*
    Author : Pakshal Shashikant Jain
    Date : 23/08/2023
    Program : Write a program which accept string from user and copy the
              contents of that string into another string. (Implement strcpy() function)
              
              Input : “Marvellous Multi OS”
              Output : “Marvellous Multi OS” in another string 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class CopyString
{
    //Characteristics of Class
    private :
        char *src;
        char *dest;

    //Constructor of Class
    public : 
        CopyString(char *SRC,char *DEST)
        {
            src = SRC;
            dest = DEST;
        }

    //Behaviour of Class To Copy Contents of Entered String into Another String
    void StrCpyX()
    {
        if((src == NULL)&&(dest == NULL))
        {
            return;
        }

        //Logic To Copy String
        while(*src != '\0')
        {
            *dest = *src;
            src++;
            dest++;
        }

        *dest = '\0';
    }
};//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[20] = {'\0'};
    char brr[20] = {'\0'};

    cout<<"Jay Ganesh....\n";

    //Taking Input from user
    cout<<"Enter String...\n";
    scanf("%[^'\n']s",arr);

    //Creating object of CopyString Class
    CopyString *cobj = new CopyString(arr,brr);

    //Call To Behaviour of Class
    cobj->StrCpyX();

    //Printing Copied String 
    printf("Second String After Copying First String is : %s",brr);
    
    return 0;
}