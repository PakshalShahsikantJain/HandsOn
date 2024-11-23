/*
    Author : Pakshal Shashikant Jain 
    Date : 16/07/2023
    Program : Accept N numbers from user and return the Smallest number.
              Input : N : 6
                      Elements : 85 66 3 66 93 88
              Output : 3 
*/

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class Mini
{
    //Characteristics of Class
    public :
        int isize;
        int *arr;
        int i;
    //Constructor of Class
    public :
        Mini()
        {
            this->isize = 0;
            this->arr = NULL;
            this->i = 0;
        }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Taking Input from user
        cout<<"Enter Number of Elements You Want in Number \n";
        cin>>this->isize;

        if(this->isize < 0)
        {
            this->isize = -this->isize;
        }

        //Allocating Memory To array 
        this->arr = (int *)malloc(this->isize * sizeof(int));

        //Inserting Element in array 
        cout<<"Enter ELements in array \n";
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            cout<<"Enter Element Number "<<this->i + 1<<"\n";
            cin>>this->arr[i];
        }
    }

    //Function To Fin Minimum Number 
    int minimum()
    {
        int imin = 0;

        imin = this->arr[0];

        //Logic To Find Minimum Number
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            if(this->arr[this->i] < imin)
            {
                imin = this->arr[this->i];               
            }
        }

        return imin;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    int iret = 0;

    cout<<"Jay Ganesh.....\n";

    //Creating object of Mini Class
    Mini mobj;

    //Call To Behaviours of Class
    mobj.Accept();
    iret = mobj.minimum();

    //Printing Minimum Number 
    printf("Minimum Number from Entered N Number is : %d",iret);

    free(mobj.arr);
    
    return 0;
}