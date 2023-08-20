/*
    Author : Pakshal Shashikant Jain 
    Date : 19/08/2023
    Program : Write a program which accept string from user and accept one
              character. Return frequency of that character.
             
              Input : “Marvellous Multi OS”
                       M
              Output : 2

              Input : “Marvellous Multi OS”
                       W
              Output : 0 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class CountChar
{
    //Characteristics of Class
    private :
        char *str;
        char ch;

    //Constructor of Class
    public :
        //Parameterised Constructor of Class
        CountChar(char *STR,char CH)
        {
            str = STR;
            ch = CH;
        }
    
    //Behaviour of Class To Count 
    int Count()
    {
        int i = 0;
        int icnt = 0;

        if(str == NULL)
        {
            return -1;
        }

        //Logic To Count
        while(*str != '\0')
        {
            if(*str == ch)
            {
                icnt++;
            }
            *str++;
        }

        return icnt;

    }
};//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[20] = {'\0'};
    char ch = '\0';
    int iret = 0;

    printf("Jay Ganesh.....\n");

    //Taking input from user
    printf("Enter One String \n");
    scanf("%[^'\n']s",arr);

    printf("Enter Character To Check \n");
    scanf(" %c",&ch);

    //Creating object of CountChar Class 
    CountChar *cobj = new CountChar(arr,ch);

    //Call To Behaviour of Class
    iret = cobj->Count();

    //Printing Count of Entered Character Calculate Present in Entered Character
    printf("Count of Entered Character %c in Entered Character is %d",ch,iret);

    return 0;
}