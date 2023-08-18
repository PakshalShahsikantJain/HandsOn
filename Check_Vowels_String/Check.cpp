/*
    Author : Pakshal Shashikant Jain 
    Date : 09/08/2023
    Program : Write a program which accept string from user and check whether
              it contains vowels in it or not.

             Input : "marvellous"
             Output : TRUE

             Input : "Demo"
             Output : TRUE

             Input : "xyz"
             Output : FALSE 
 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Check
{
    //Characteristics of Class
    private :
        char *str;

    //Constructor of Class
    public :
        Check(char *STR)
        {
            str = STR;
        }

    //Function To Find Entered String Contains Vowels or Not
    bool Find()
    {
        if(str == NULL)
        {
            return -1;
        }

        //Logic To Find 
        while(*str != '\0')
        {
            if((*str >= 'A')&&(*str <= 'Z'))
            {
                *str = *str + 32;
            }
            
            if((*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u'))
            {
                break;
            }
            str++;
        }
        
        if((*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u'))
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    char arr[20] = {'\0'};
    bool bret = false;

    cout<<"Jay Ganesh.....\n";

    cout<<"Enter One String \n";
    scanf("%[^'\n']s",arr);
    
    Check *cobj = new Check(arr);
    bret = cobj->Find();

    //Handeling Conditions According To Output 
    if(bret == true)
    {
        printf("Entered String Contains Vowels\n");
    } 
    else 
    {
        printf("Entered String Does Not Contains Vowels\n");
    }

    return 0;
}