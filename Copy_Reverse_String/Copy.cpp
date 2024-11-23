/*
    Author : Pakshal Jain
    Date : 28/08/2023
    Program : Write a program which accept string from user and copy that
              characters of that string into another string in reverse order.

              Input : "Marvellous Python"
              Output : "nohtyP suollevraM" 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class CopyStringRev
{
    //Characteristics of Class
    private :
        char *src;
        char *dest;

    //Constructor of Class
    public :
        CopyStringRev(char *SRC,char *DEST)
        {
            src = SRC;
            dest = DEST;
        }

    //Behaviour of Class To Copy String In Reverse Order
    void StrCpyRev()
    {
        int istart = 0;
        int iend = 0;
        char temp = '\0';

        if((src == NULL)&&(dest == NULL))
        {
            return;
        }

        while(src[iend] != '\0')
        {
            iend++;
        }

        iend--;

        //Logic To Reverse Entered String 
        while(istart < iend)
        {
            temp = src[istart];
            src[istart] = src[iend];
            src[iend] = temp;

            istart++;
            iend--;
        }

        while(*src != '\0')
        {
            *dest = *src;
            src++;
            dest++;
        }

        *dest = '\0';
    }
};//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[50] = {'\0'};
    char brr[50] = {'\0'};

    cout<<"Jay Ganesh....\n";

    //Taking Input from user
    cout<<"Enter One String \n";
    scanf("%[^'\n']s",arr);

    //Creating object of CopyStringRev Class
    CopyStringRev *cobj = new CopyStringRev(arr,brr);
   
    //Call To Behaviour of Class
    cobj->StrCpyRev();

    //Printing Reversed String 
    printf("String Copied In Reverse Order is : %s",brr);

    return 0;
}