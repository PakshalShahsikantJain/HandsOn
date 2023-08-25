/*
    Author : Pakshal Shashikant Jain
    Date : 24/08/2023
    Program : Write a program which accept string from user and copy the
              contents of that string into another string. (Implement strncpy() function)
              
              Input : "Marvellous Multi OS"
                       10
              Output : Marvellous
              
              Note : If third parameter is greater than the size of source string then
              copy whole string into destination. 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class CopyString
{
    //Characteristics of Class
    private :
        char *src;
        char *dest;
        int icnt;

    //Constructor of Class
    public :
        CopyString(char *SRC,char *DEST,int ICNT)
        {
            src = SRC;
            dest = DEST;
            icnt = ICNT;
        }

    //Behaviour of Class To Take Copy Contents of Entered String into Another String till Entered Size
    void StrNCpyX()
    {
        if((src == NULL)&&(dest == NULL))
        {
            return;
        }

        //Logic To Copy Contents of String
        while((*src != '\0')&&(icnt != 0))
        {
            *dest = *src;
            src++;
            dest++;
            icnt--;
        }

        *dest = '\0';
    }
};//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};
    int isize = 0;

    cout<<"Jay ganesh....\n";

    //Taking input from user
    cout<<"Enter One String\n";
    scanf("%[^'\n']s",arr);

    cout<<"Enter Size Till You Want To Copy Contents of Entered String into Another String \n";
    cin>>isize;

    //Creating object of CopyString Class 
    CopyString *cobj = new CopyString(arr,brr,isize);

    //Call To Behaviour of Class
    cobj->StrNCpyX();

    //Printing Copied String
    printf("Copied String is : %s",brr);

    return 0;
}