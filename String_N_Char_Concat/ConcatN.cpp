/*
    Author : Pakshal Shashikant Jain 
    Date : 13/09/2023
    Program : Write a program which accepts 2 strings from user and concat N
              characters of second string after first string.Value of N should be
              accepted from user. (Implement strncat() function).

              Note : If third parameter is greater than the size of second string then
              concat whole string after first string.

              Input : "Marvellous Infosystems"
                      "Logic Building"
                       5
              Output : "Marvellous Infosystems Logic"
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<iostream>
using namespace std;

//Class Declaration
class String
{
    //Characteristics of Class
    private :
        char *src;
        char *dest;
        int icnt;
    //Constructor of Class
    public :
        //Parameterised Constructor 
        String(char *SRC,char *DEST,int iCNT)
        {
            src = SRC;
            dest = DEST;
            this->icnt = iCNT;
        }
    //Behaviour of Class To Concatenate Second String after First String Till Entered Size
    void StrNCpyX()
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

        while((*dest != '\0')&&(this->icnt != 0))
        {
            *src = *dest;
            src++;
            dest++;
            this->icnt--;
        }

        *src = '\0';
    }
};//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[50] = {'\0'};
    char brr[30] = {'\0'};
    int icnt = 0;

    cout<<"Jay Ganesh....\n";

    //Taking Input from user
    printf("Enter First String \n");
    scanf("%[^'\n']s",arr);

    printf("Enter Second String \n");
    scanf(" %[^'\n']s",brr);

    printf("Enter Size Till You Want To Concat Second String \n");
    scanf("%d",&icnt);

    //Creatig object of String class
    String *sobj = new String(arr,brr,icnt);
    //Call To Behaviours of Class
    sobj->StrNCpyX();

    //Printing Concatenated String
    cout<<"First String After Concatenatio is : "<<arr;
    return 0;
}