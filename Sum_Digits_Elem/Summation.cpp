/*
    Author : Pakshal Shashikant Jain 
    Date : 18/07/2021
    Program : Accept N numbers from user and display summation of digits of each number.
              Input : N : 6
                      Elements : 8225 665 3 76 953 858
              Output : 17 17 3 13 17 21 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Digits
{
    //Characteristics of Class
    public :
        int isize;
        int *arr;
        int i;

    //Constructor of Class
    public :
        Digits()
        {
            this->isize = 0;
            this->arr = NULL;
            this->i = 0;
        }

    //Behaviour of Class To take Input from user
    void Accept()
    {
        //Taking input from user
        cout<<"Enter Number of Elements You want in array \n";
        cin>>this->isize;

        //Allocating Memory To array 
        arr = (int *)malloc(this->isize * sizeof(int));

        //Inserting Elements in array 
        cout<<"Enter Elements in array \n";
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            cout<<"Enter Element Number : "<<this->i + 1<<"\n";
            cin>>this->arr[this->i];
        }
    }

    //Behaviour of Class To Calculate Summation
    void Summation()
    {
        int sum = 0;
        int Digits = 0;
        int No = 0;

        //Logic
        cout<<"Summation of Digits of all Elements is as follows \n";
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            No = this->arr[this->i];

            while(No != 0)
            {
                Digits = No % 10;
                sum = sum + Digits;
                No = No / 10;
            }

            cout<<sum<<"\t";
            sum = 0;
        }
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    cout<<"Jay Ganesh....\n";

    //Creating object of Digits Class
    Digits *dobj = new Digits();

    //Call TO Behaviours of Class
    dobj->Accept();
    dobj->Summation();

    //Deallocating memory of array
    free(dobj->arr);

    return 0;
}