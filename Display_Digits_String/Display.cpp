/*  
    Author : Pakshal Shashikant Jain 
    Date : 15/08/2023
    Program : Write a program which accept string from user and display only
              digits from that string.

              Input : “marve89llous121”
              Output : 89121
              Input : “Demo”
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class String
{
    //Characteristics of Class
    private :
        char *str;

    //Constructor of Class
    public :
        String(char *STR)
        {
            str = STR;
        }

    //Behaviour of Class To DisplayDigit
    void DisplayDigit()
    {
        //Logic To display
        cout<<"Digits Present in Entered String is as Follows : \n";
        while(*str != '\0')
        {
            if((*str >= '0')&&(*str <= '9'))
            {
                printf("%c",*str);
            }
            str++;       
        }
    }
};//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[20];

    cout<<"Jay Ganesh...\n";

    //Taking input from user
    cout<<"Enter One String \n";
    scanf("%[^'\n']s",arr);

    //Creating object of String Class
    String *sobj = new String(arr);
    //Call To Behaviour of Class
    sobj->DisplayDigit();

    return 0;
}