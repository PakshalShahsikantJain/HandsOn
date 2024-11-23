/*
    Author : Pakshal Shashikant Jain 
    Date : 27/06/2023
    Program : Accept N numbers from user and return difference between frequency of
              even number and odd numbers.
              Input : N : 7
                      Elements : 85 66 3 80 93 88 90

              Output : 1 (4 -3)

*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class DiffFreq
{
    //Characterstics of Class
    private :
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
    
    //Behaviour of Class To Take Input From User
    void Accept()
    {
        printf("Enter Number of Elements You Want in array : \n");
        scanf("%d",&this->isize);

        this->arr = (int *)malloc(this->isize * sizeof(int *));
        printf("Enter Elements In array : \n");
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            printf("Enter Element Number : %d\n",this->i + 1);
            scanf("%d",&this->arr[this->i]);
        }
    }

    //Behaviour of Class To Calculate Frequency 
    int diff()
    {
        int icntEven = 0;
        int icntOdd = 0;
        int diff = 0;

        //Logic To Calculate
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            if(this->arr[this->i] % 2 == 0)
            {
                icntEven = icntEven + 1;
            }
            else 
            {
                icntOdd = icntOdd + 1;
            }
        }

        diff = icntEven - icntOdd;

        free(this->arr);

        return diff;
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int iret = 0;

    cout<<"Ganapati Bappa Morya...\n";

    //Creating object of DiffFreq Class
    DiffFreq *dobj = new DiffFreq();

    //Call To Behaviours of Clsas
    dobj->Accept();
    iret = dobj->diff();

    //Printing Difference Calculated 
    cout<<"Difference Between Frequency of Enve and Odd Elements is : "<<iret;

    //Deallocating Memory of Object Created
    delete(dobj);

    return 0;
}