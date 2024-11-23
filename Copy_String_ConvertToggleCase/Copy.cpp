/*
    Author : Pakshal Shashikant Jain
    Date : 29/08/2023
    Program : Write a program which accept string from user and copy that
              characters of that string into another string by toggling the case.

              Input : "Marvellous Python 2"
              Output : "mARVELLOUS pYTHON 2"  
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

    //Behaviour of Class To copy String After Toggling Case 
    void StrCpyToggle()
    {
        if((src == NULL)&&(dest == NULL))
        {
            return;
        }

        //Logic To Convert String
        while(*src != '\0')
        {
            if((*src >= 'A')&&(*src <= 'Z'))
            {
                *src = *src + 32;
            }
            else if((*src >= 'a')&&(*src <= 'z'))
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
    cobj->StrCpyToggle();

    //Printing Copied String 
    printf("String Copied After Toggling Case is : %s",brr);
    
    return 0;
}