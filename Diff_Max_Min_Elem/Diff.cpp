/*
    Author : Pakshal Shashikant Jain 
    Date : 16/07/2023
    Program : Accept N numbers from user and return the difference between largest
              and smallest number.
              Input : N : 6
                      Elements : 85 66 3 66 93 88
              Output : 90 (93 -3) 
*/

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Diff
{
    //Characteristics of Class
    public :    
        int isize;
        int *arr;
        int i;
    //Constructor of Class
    public :
        Diff()
        {
            this->isize = 0;
            this->arr = NULL;
            this->i = 0;
        }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Taking input from user
        cout<<"Enter Number of Elements Yo Want in array \n";
        cin>>this->isize;

        if(this->isize < 0)
        {
            this->isize = -this->isize;
        }

        //Allocating Memory To Array 
        arr = (int *)malloc(this->isize * sizeof(int));

        //Inserting Elements in array 
        cout<<"Enter Elements in array \n";
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            cout<<"Enter Element Number : "<<this->i + 1<<"\n";
            cin>>this->arr[this->i];            
        }
    }

    //Behaviour of Class To Calculate Difference
    int Difference()
    {
        int imax = 0;
        int imin = 0;
        int diff = 0;

        //Logic
        imax = this->arr[0];
        imin = this->arr[0];
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            if(this->arr[i] > imax)
            {
                imax = this->arr[i];
            }
            else if(this->arr[i] < imin)
            {
                imin = this->arr[i];
            }
        }

        diff = imax - imin;

        return diff;
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    int iret = 0;

    printf("Ganapati Bappa Morya....\n");

    //Creating object of Difference Class
    Diff *dobj = new Diff();

    //Calls To Behaviour of Class
    dobj->Accept();
    iret = dobj->Difference();

    //Printing Difference Calculated
    cout<<"Differece Betwee max and min element is : "<<iret;

    free(dobj->arr);
    
    return 0;
}