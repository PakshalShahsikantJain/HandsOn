/*
    Author : Pakshal Shashikant Jain
    Date : 29/08/2023
    Program : Write a program which accept string from user and copy that
              characters of that string into another string by converting all small
              characters into capital case.

              Input : "Marvellous Python 2"
              Output : "MARVELLOUS PYTHON 2" 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

    //Behaviour of Class To copy String After Converting Small Case 
    void StrCpyCap()
    {
        if((src == NULL)&&(dest == NULL))
        {
            return;
        }

        //Logic To Convert String
        while(*src != '\0')
        {
            if((*src >= 'a')&&(*src <= 'z'))
            {
                *src = *src - 32;
            }

            *dest = *src;
            dest++;
            src++;
        }
    }
};//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    char arr[50] = {'\0'};
    char brr[50] = {'\0'};

    printf("Jay Ganesh....\n");

    //Taking Input from user    
    printf("Enter One String...\n");
    scanf("%[^'\n']s",arr);

    //Creating object of CopyString Class 
    CopyString *cobj = new CopyString(arr,brr);
    //Call To behaviour of Class
    cobj->StrCpyCap();

    //Printing Copied String 
    printf("String Copied After Converting Small Case Letter into Capital Letter is : %s",brr);
    
    return 0;
}