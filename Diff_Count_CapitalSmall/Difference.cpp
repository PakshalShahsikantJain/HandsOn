/*
    Author : Pakshal Shashikant Jain 
    Date : 08/08/2023
    Program : Write a program which accept string from user and return
              difference between frequency of small characters and frequency of
              capital characters.

              Input : “MarvellouS”
              Output : 6 (8-2) 
*/

//Required Librarires
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Difference
{
    //Characteristics 
    private :
        char *str;
    //Constructor of Class
    public :
        //Parameterised  Constructor of Class
        Difference(char *STR)
        {
            str = STR;
        }
    //Function To Calulate Difference
    int Count()
    {
        int i = 0;
        int icnt = 0;
        int icnt2 = 0;
        int diff = 0;

        //Logic To Find Difference
        while(*str != '\0')
        {
            if((*str >= 'A')&&(*str <= 'Z'))
            {
                icnt++;
            }
            else if((*str >= 'a')&&(*str <= 'z'))
            {
                icnt2++;
            }
            str++;
        }

        diff = icnt2 - icnt;

        return diff;
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    char arr[20];
    int iret = 0;

    cout<<"Jay Ganesh.....\n";

    //Taking input from user
    cout<<"Enter String\n";
    scanf("%[^'\n']s",arr);

    //Creating object of Difference Class
    Difference *dobj = new Difference(arr);

    //Call To Behaviour of Class
    iret = dobj->Count();

    //Printing Difference Calculated
    printf("Difference Between Frequency of Small and Capital Letters is : %d",iret);

    //Deallocating memory of object Created
    delete(dobj);

    return 0;
}