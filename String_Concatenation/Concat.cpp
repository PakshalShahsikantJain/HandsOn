/*
    Author : Pakshal Shashikant Jain 
    Date : 27/08/2023
    Program : Write a program which 2 strings from user and concat second string
              after first string. (Implement strcat() function).

              Input : "Marvellous Infosystems"
                      "Logic Building"

              Output : "Marvellous Infosystems Logic Building" 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class ConcatString
{
    //Characteristics of Class
    private :
        char *src;
        char *dest;
    
    //Constructor of Class
    public :
        //Parameterised Constructor of Class
        ConcatString(char *SRC,char *DEST)
        {
            src = SRC;
            dest = DEST;
        }
    
    //Behaviour of Class To Concatenate Two Strings
    void StrCatX()
    {
        if((src == NULL)&&(dest == NULL))
        {
            return;
        }   

        //Logic To Concatenate
        while(*src != '\0') 
        {
            src++;
        }

        *src = ' ';
        src++;

        while(*dest != '\0')
        {
            *src = *dest;
            src++;
            dest++;
        }

        *src = '\0';
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};
    
    printf("Jay Ganesh.....\n");

    //Taking Input from user
    printf("Enter First String \n");
    scanf("%[^'\n]s",arr);

    printf("Enter Second String \n");
    scanf(" %[^'\n']s",brr);

    //Creating object of ConcatString Class
    ConcatString *cobj = new ConcatString(arr,brr);
    //Call To Behaviour of Class
    cobj->StrCatX();

    //Printing Concatenated String 
    printf("Concatenated String is : %s",arr);

    return 0;
}