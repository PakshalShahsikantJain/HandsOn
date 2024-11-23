/*
    Author : Pakshal Shashikant Jain 
    Date : 20/08/2023
    Program : Write a program which accept string from user and accept one
              character. Return index of first occurrence of that character.
              Input : "Marvellous Multi OS"
                      'M'
              Output : 11

              Input : "Marvellous Multi OS"
                      'W'
              Output : -1

              Input : "Marvellous Multi OS"
                      'e'
              Output : 4  
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class FindLast
{
    //Characteristics of Class
    public :
        char arr[20] = {'\0'};
        char ch;

    //Constructor of Class
    public :
        FindLast()
        {
            this->ch = '\0';
        }
    
    //Behaviour of Class to Take input from user
    void Accept()
    {
        //Taking input from user
        cout<<"Enter one String \n";
        scanf("%[^'\n']s",this->arr);

        cout<<"Enter One Character \n";
        cin>>this->ch;
    }

    //Behaviour of Class to Find Last Occurance of Entered Character
    int Find()
    {
        int i = 0;
        int ipos = -1;

        if(this->arr == NULL)
        {
            return -1;
        }

        //Logic To Find
        while(this->arr[i] != '\0')
        {
            if(this->arr[i] == this->ch)
            {
                ipos = i;
            }
            i++;
        }

        return ipos;
    }
};//End of Class

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int iret = 0;

    cout<<"Ganapati Bappa Morya...\n";

    //Creating object of FindLast Class
    FindLast *fobj = new FindLast();

    //Call To Behaviour of Class
    fobj->Accept();
    iret = fobj->Find();

    //Printing Last Occurance of Entered Character Found
    printf("Last Occurance of Entered Character %c is at index number : %d",fobj->ch,iret);

    return 0;
}