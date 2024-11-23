/*
    Author : Pakshal Shashikant Jain 
    Date : 24/06/2023
    Program : Accept N numbers from user and display all such elements which are
              multiples of 11.

              Input : N : 6
                      Elements : 85 66 3 55 93 88
                
              Output : 66 55 88 
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

//Class Declration
class Display 
{
    //Characteristics of Class
    private :   
        int isize;
        int *arr;
        int i;
    //Constructor of Class
    public :
        Display()
        {
            this->isize = 0;
            this->arr = NULL;
            this->i = 0;
        }
    
    //Behaviour of Class To Take Input From user
    void Accept()
    {
        cout<<"Enter Number of Elements You Want in array \n";
        cin>>this->isize;

        //Allocating memory to array using malloc function
        arr = (int *)malloc(this->isize * sizeof(int *));

        cout<<"Enter Elements in array : \n";
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            printf("Enter Element Number %d\n",(this->i + 1));
            cin>>this->arr[this->i];
        }
    }

    //Behaviour of Class To Display Elements Which are Multiple of 11
    void display()  
    {
        cout<<"Elements Which are Multiples of 11 are : \n";
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            if((this->arr[this->i] % 11) == 0)
            {
                cout<<this->arr[this->i]<<"\t";
            }
        }

        //Deallocting Memory of array
        free(arr);
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    printf("Jay Ganesh.....\n");

    //Creating Object of Display Class
    Display *dobj = new Display();

    //Call To Behaviour of Class
    dobj->Accept();
    dobj->display();

    //Deallocating memory of object 
    delete(dobj);

    return 0;
}