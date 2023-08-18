/*
    Author : Pakshal Shashikant Jain 
    Date : 06/08/2023
    Program : Write a program which accept string from user and count number of
              capital characters.

              Input : “Marvellous Multi OS”
              Output : 4 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class CapitalLetter
{
    //Characteristics of Class
    private :
        char *str;

    //Constructor of Class
    public :
        CapitalLetter(char *STR)
        {
            str = STR;
        }

    //Behaviour of Class To Count Capital Letters
    int Count()
    {
        int icnt = 0;

        //Filter
        if(str == NULL)
        {
            return -1;
        }

        //Logic To Count
        while(*str != '\0')
        {
            if((*str >= 'A')&&(*str <= 'Z'))
            {
                icnt++;
            }
            str++;
        }

        return icnt;
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    char arr[20];
    int iret = 0;

    cout<<"Jay Ganesh....\n";
    
    //Taking input from user
    printf("Enter One String \n");
    scanf("%[^'\n']s",arr);

    //Creating object of CapitalLetter Class 
    CapitalLetter *cobj = new CapitalLetter(arr);
    
    //Call To Behaviour of Class
    iret = cobj->Count();

    //Printing Count Calculated
    printf("Count of Capital Letter is : %d",iret);

    //Deallocating memory of object Created
    delete(cobj);

    return 0;
}