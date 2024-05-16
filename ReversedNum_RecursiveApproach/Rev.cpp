/*
    Author : Pakshal Shashikant Jain 
    Date : 14/5/2024
    Program :  Write a recursive program which accept number from user and return its
               reverse number.

               Input : 523
               Output : 325  
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class RevNum
{
    //Characteristics of Class
    private :
        int ino;
        int rno;
    public :
        RevNum(int ivalue)
        {
            this->ino = ivalue;
            this->rno = 0;
        }

    //Behaviour of Class
    int Reverse()
    {
        int Digit = 0;


        if(this->ino != 0)
        {
            Digit = this->ino % 10;
            this->rno = (this->rno * 10) + Digit;
            this->ino = this->ino / 10;

            this->Reverse();
        }

        return this->rno;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int iret = 0;
    int ino = 0;

    cout<<"Jay Ganesh........\n";

    //Taking Input From User
    cout<<"Enter One Number : ";
    cin>>ino;
    
    //Creating Object of RevNum Class
    RevNum *robj = new RevNum(ino);

    //Call To Behaviour of Class
    iret = robj->Reverse();

    //Printing Reversed Number
    printf("Reversed Number of %d is : %d",ino,iret);

    //Deallocating Memory of Object of Class
    free(robj);
    robj = NULL;

    return 0;
}