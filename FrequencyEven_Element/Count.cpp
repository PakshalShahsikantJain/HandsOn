/*
    Author : Pakshal Shashikant Jain 
    Date : 26/06/2023
    Program : Accept N numbers from user and return frequency of even numbers.
              Input : N : 6
                      Elements : 85 66 3 80 93 88
              Output : 3 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Frequency
{
    //Characteristics of Class
    private :
        int isize;
        int *arr;
        int i;

    //Constructor of Class
    public :
        Frequecy()
        {
            this->isize = 0;
            this->arr = NULL;
            this->i = 0;
        }
    
    //Behaviour of Class To Take Input From User
    void Accept()
    {
        //Taking Input From User
        cout<<"Enter Number of Elements You Want in array\n";
        cin>>this->isize;

        //Allocating Memory To array 
        this->arr = (int *)malloc(this->isize * sizeof(int *));

        //Inserting Elements in array 
        cout<<"Enter Elements in array...\n";
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            printf("Enter Element Number %d \n",this->i + 1);
            scanf("%d",&this->arr[this->i]);
        }
    }

    //Behaviour of Class To Count Frequency 
    int Count()
    {
        int icnt = 0;

        //Logic 
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            if((this->arr[this->i] % 2) == 0)
            {
                icnt = icnt + 1;
            }
        }

        //Dellocating Memory of Array
        free(this->arr);

        return icnt;
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int iret = 0;

    cout<<"Jay Ganesh....\n";

    //Creating object of Frequency Class
    Frequency *fobj = new Frequency();
    
    //Call To Behaviours of Class
    fobj->Accept();

    iret = fobj->Count();

    //Printing Frequency Calculated
    cout<<"Frequecy of Even Elements is : \n"<<iret;

    //Deallocating Memory of object 
    delete(fobj);

    return 0;
}