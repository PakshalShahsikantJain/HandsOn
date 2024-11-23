/*
    Author : Pakshal Shashikant Jain 
    Date : 30/06/2023
    Program : Accept N numbers from user check whether that numbers contains 11 in it or not.
              Input : N : 6
                      Elements : 85 66 11 80 93 88
              Output : 11 is present

              Input : N : 6
                      Elements : 85 66 3 80 93 88
              Output : 11 is absent
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Num 
{
    //Characteristics of Class
    private :
        int isize;
        int *arr;
        int i;
    //Constructor of Class
    public :
        Num()
        {
            this->isize = 0;
            this->arr = NULL;
            this->i = 0;
        }
    //Behaviour of Class To Take Input From user
    void Accept()
    {
        cout<<"Enter Number of Elements you want in array \n";
        cin>>this->isize;

        arr = (int *)malloc(this->isize * sizeof(int));

        cout<<"Enter Elements in array \n";
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            cout<<"Enter Element Number : "<<this->i + 1<<"\n";
            cin>>this->arr[this->i];
        }
    }

    //Behaviour of Class To Check 11 is Present or Not in N Numbers
    bool Check()
    {
        //Logic 
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            if(this->arr[this->i] == 11)
            {
                break;
            }
        }

        if(this->arr[this->i] == 11)
        {
            return true;
        }
        else
        {
            return false;
        }

        //Deallocating Memory of Array
        free(arr);
    }
};//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    bool bret = false;

    cout<<"Ganapati Bappa Morya...\n";

    //Creating object of Num Class
    Num *nobj = new Num();

    //Call To Behaviours of Class
    nobj->Accept();
    bret = nobj->Check();

    //Handeling Condition if return value is True
    if(bret == true)
    {
        cout<<"11 is Present in Entered N Number \n";
    }
    //Handeling condition if return value is false
    else 
    {
        cout<<"11 is not Present in Entered N Number \n";
    }

    //Deallocating Memory of object 
    delete(nobj);

    return 0;
}