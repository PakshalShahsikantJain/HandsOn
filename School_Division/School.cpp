/*
    Author : Pakshal Shashikant Jain 
    Date : 30/07/2023
    Program : Accept division of student from user and depends on the division
              display exam timing. There are 4 divisions in school as A,B,C,D. Exam
              of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
              (Application should be case insensitive)
            
              Input : C
              Output : Your exam at 9.20 AM
            
              Input : d
              Output : Your exam at 10.30 AM
*/

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class School 
{
    //Characterstics of Class
    public :
        char ch;

    //Constructor of Class
    public :
        School()
        {
            this->ch = '\0';
        }
        
    //Behaviour of Class To Take Input from users
    void Accept()
    {
        //Taking Input from user
        cout<<"Enter Your Division \n";
        cin>>this->ch;
    }

    //Behaviour of Class To Display Division
    void Display()
    {
        if((this->ch >= 'a')&&(this->ch <= 'z'))
        {
            this->ch = this->ch - 32;
        }

        switch(this->ch)
        {
            case 'A' : 
            {
                cout<<"Your Exam is at 7 AM \n";
                break;
            }
            case 'B' :
            {
                cout<<"Your Exam is at 8:30 AM \n";
                break;
            }
            case 'C' :
            {
                cout<<"Your Exam is at 9:20 AM \n";
                break;
            }
            case 'D' :
            {
                cout<<"Your Exam is at 10:30 AM \n";
                break;
            }
            default :
            {
                cout<<"Invalid Division \n";
            }
        }
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    cout<<"Jay Ganesh....\n";

    //Creating objec to School Class
    School *sobj = new School();

    //Call To Behaviour of Class
    sobj->Accept();
    sobj->Display();

    delete(sobj);
    
    return 0;
}