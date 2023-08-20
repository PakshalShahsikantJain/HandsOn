/*
    Author : Pakshal Shashikant Jain 
    Date : 20/08/2023
    Program : Write a program which accept string from user and accept one
              character. Return index of first occurrence of that character.
              Input : "Marvellous Multi OS"
                      'M'
              Output : 0
              Input : "Marvellous Multi OS"
                      'W'
              Output : -1

              Input : "Marvellous Multi OS"
                      'e'
              Output : 4  
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class FirstChar
{
    //Characteristics of Class
    public :
        char arr[20];
        char ch;

    //Constructor of Class
    public : 
        Check()
        {
            this->ch = '\0';
        }

    //Behaviour of Class To Accept Input from user
    void Accept()
    {
        cout<<"Enter one String \n";
        scanf("%[^'\n']s",this->arr);

        //Taking Input from user
        cout<<"Enter Character\n";
        cin>>this->ch;
    }

    //Behaviour of Class To Find First Occurance
    int Find()
    {
        int i = 0;

        if(this->arr == NULL)
        {
            return -1;
        }

        //Logic To Find
        while(this->arr[i] != '\0')
        {
            if(this->arr[i] == this->ch)
            {
                break;
            }
            i++;
        }

        //Handeling Conditions
        if(this->arr[i] == this->ch)
        {
            return i;;
        }
        else
        {
            return -1;
        }
    }
};//End of Class

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[20] = {'\0'};    
    int iret = 0;
    char ch = '\0';

    printf("Jay Ganesh....\n");

    //Creating object of FirstChar Class To Take Input from user
    FirstChar *cobj = new FirstChar();

    //Call To Behaviour of Class
    cobj->Accept();
    iret = cobj->Find();

    //Printing Occurance of Character
    printf("First Occuracnce of Entered Character %c is at index number : %d",cobj->ch,iret);

    return 0;
}