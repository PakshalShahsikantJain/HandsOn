/*
    Author : Pakshal Shashikant Jain 
    Date : 08/08/2023
    Program : Write a program which accept string from user and count number of
              small characters.

              Input : “Marvellous”
              Output : 9  
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class SmallLetter
{
    //Characteristics of Class
    private :
        char *str;

    //Constructor of Class
    public :
        //Parameterised Constructor of Class
        SmallLetter(char *STR)
        {
            str = STR;
        }

    //Behaviour of Class To Count Small Letter 
    int Count()
    {
        int i = 0;
        int icnt = 0;

        //Logic To Count 
        while(*str != '\0')
        {
            if((*str >= 'a')&&(*str <= 'z'))
            {
                icnt++;
            }
            str++;
        }

        return icnt;
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int iret = 0;
    char arr[20];

    cout<<"Jay Ganesh....\n";

    //Taking input from user
    printf("Enter String \n");
    scanf("%[^'\n']s",arr);

    //Creating object of SmallLetter Class 
    SmallLetter *sobj = new SmallLetter(arr);
    
    //Call To Behaviour of Class
    iret = sobj->Count();

    //Printing Count of Capital Letter
    printf("Count of Small Letters in Entered String (%s) is : %d",arr,iret);

    delete(sobj);
    
    return 0;
}