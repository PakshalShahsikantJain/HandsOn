/*
    Author : Pakshal Shashikant Jain 
    Date : 16/07/2023
    Program : Accept N numbers from user and return the largest number.
              Input : N : 6
                      Elements : 85 66 3 66 93 88
              Output : 93 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraires
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Max
{
    //Characteristics of Class
    public :
        int isize;
        int *arr;
        int i;

    //Constructor of Class
    public :
        Max()
        {
            this->i = 0;
            this->arr = NULL;
            this->isize = 0;
        }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Taking Input From user
        cout<<"Enter Number of Elements You Want in array\n";
        cin>>this->isize;

        //Handeling Conditions if isize is less than 0
        if(this->isize < 0) 
        {
            this->isize = -this->isize;
        }    

        //Allocating memory To array 
        this->arr = (int *)malloc(this->isize * sizeof(int));

        //Inserting Element in array 
        cout<<"Enter Elements in array \n";
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            cout<<"Enter Element Number : "<<i + 1<<"\n";
            cin>>this->arr[this->i];
        }
    }

    //Behaviour of Class To Find max Element from entered N Numbers
    int max()
    {
        int max = 0;

        //Logic
        max = this->arr[0];
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            if(this->arr[i] > max)
            {
                max = this->arr[i];
            }
        }

        return max;
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main() 
{
    int iret = 0;

    printf("Ganapati Bappa Morya...\n");

    //Creating object of Max Class
    Max obj;

    //Call TO Behaviours of Class
    obj.Accept();
    iret = obj.max();   

    //Printing Max Element From Entered N Numbers 
    cout<<"Maximum Element From Entered N Numbers is : "<<iret;

    //Deallocating Memory of Array 
    free(obj.arr);

    return 0;
}
