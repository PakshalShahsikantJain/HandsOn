/*
    Author : Pakshal Shashikant Jain 
    Date : 18/07/2023
    Program : Accept N numbers from user and display all such numbers which contains
              3 digits in it.
              Input : N : 6
                      Elements : 8225 665 3 76 953 858
              Output : 665 953 858
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Digits
{
    //Characteristics of Class
    public :     
        int isize;
        int i;
        int *arr;

    //Constructor of Class
    public :
        Digits()
        {
            this->isize = 0;
            this->arr = NULL;
            this->i = 0;
        }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        cout<<"Enter Number of Elements you want in array \n";
        cin>>this->isize;

        if(this->isize < 0)
        {
            this->isize = -this->isize;
        }
        
        //Allocating Memory To Array
        this->arr = (int *)malloc(this->isize * sizeof(int));

        //Inserting Elements in array 
        cout<<"Enter Elements in array \n";
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            cout<<"Enter Element Number : "<<this->i + 1<<"\n";
            cin>>this->arr[this->i];
        }        
    }

    //Behaviour of Class To Display All Such Element Which contains Digits in it 
    void Display()
    {
        int No = 0;
        int Digit = 0;
        int icnt = 0;

        //Printing Elements Which Contains 3 Digits in it
        cout<<"Printing Elements Which contains 3 Digits in it :\n";
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            No = this->arr[this->i];

            while(No != 0)
            {
                Digit = No % 10;
                icnt = icnt + 1;
                No = No / 10;
            }

            if(icnt == 3)
            {
                cout<<this->arr[i]<<"\t";
            }
            icnt = 0;
        }
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    cout<<"Jay Ganesh....\n";

    //Creating object of Display Class
    Digits *dobj = new Digits();

    //Call To Behaviours of Class
    dobj->Accept();
    dobj->Display();

    //Deallocating Memory Of array 
    free(dobj->arr);

    return 0;
}