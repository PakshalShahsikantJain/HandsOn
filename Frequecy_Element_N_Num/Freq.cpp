/*
    Author : Pakshal Shashikant Jain 
    Date : 04/07/2023
    Program : Accept N numbers from user and return frequency of 11 form it.
              Input : N : 6
                      Elements : 85 66 3 15 93 88
              Output : 0

              Input : N : 6
                      Elements : 85 11 3 15 11 111
              Output : 2
*/

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Frequency 
{
    //Characteristisc of Class
    private:
        int isize;
        int *arr;
    //Constructor of Class
    public :    
        Frequency()
        {
            this->isize = 0;
            this->arr = NULL;
        }
    //Behaviour of Class To Take Input From user
    void Accept()
    {
        int i = 0;

        //Enter Number of Elements you Want in array
        cout<<"Enter Number of Elements you want in array\n";
        cin>>this->isize;

        //Allocating Memory to Array 
        arr = (int *)malloc(this->isize * sizeof(int));

        //Enter Elements in array
        cout<<"Enter Elements in array : \n";
        for(i = 0;i < this->isize;i++)
        {
            cout<<"Enter Element Number : "<<i + 1<<"\n";
            scanf("%d",&arr[i]);
        }
    }

    //Behaviour of Class To Count Frequency of 11 in Entered N Numbers
    int freq()
    {
        int i = 0;
        int icnt = 0;

        for(i = 0;i < this->isize;i++)
        {
            if(this->arr[i] == 11)
            {
                icnt = icnt + 1;
            }
        }

        return icnt;
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int iret = 0;

    cout<<"Jay Ganesh...\n";

    //Creating object of Frequency Class
    Frequency *fobj = new Frequency();

    //Call To Behaviours of Class
    fobj->Accept();
    iret = fobj->freq();

    //Printing Frequency of 11 Calculated
    printf("Frequency of 11 Number in Entered N Number is : %d",iret);

    //Deallocating Memory of Object Created 
    delete(fobj);

    return 0;
}