/*
    Author : Pakshal Shashikant Jain 
    Date : 19/08/2023
    Program : Write a program which accept string from user and accept one
              character. Check whether that character is present in string or not.
              Input : "Marvellous Multi OS"
                       e
              Output : TRUE
              
              Input : "Marvellous Multi OS"
                       W
              Output : FALSE 
*/

//Required libraries
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Character 
{
    //Characteristics of Class
    private :
        char *str;
        char ch;

    //Constructor of Class
    public : 
        Character(char *STR,char CH)
        {
            str = STR;
            ch = CH;
        }

    //Behaviour of Class To Check Entered Character is Present or not in Entered String
    bool Check()
    {
        //Handeling Condition if Array to which pointer str is pointing to is NULL or not
        if(str == NULL)
        {
            return -1;
        }

        //Logic To Check
        while(*str != '\0')
        {
            if(*str == ch)
            {
                break;
            }
            *str++;
        }

        if(*str == ch)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};//End of Class

//Main Function
int main()
{
    char arr[20];
    char ch;
    bool bret = false;

    cout<<"Jay Ganesh.....\n";

    //Taking Input from user
    cout<<"Enter One String \n";
    scanf("%[^'\n']s",arr);

    cout<<"Enter Character\n";
    cin>>ch;

    //Creating object of Character Class
    Character *cobj = new Character(arr,ch);
    bret = cobj->Check();

    //Handeling Condition is bret = true 
    if(bret == true)
    {
        printf("Entered Character %c is Present in String",ch);
    }
    else //Handeling Condition if bret = false
    {
        printf("Entered Character %c is Not Present in String",ch);
    }

    return 0;
}