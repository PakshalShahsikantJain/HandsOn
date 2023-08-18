/*
    Author : Pakshal Shashikant Jain 
    Date : 11/07/2023
    Program : Accept N numbers from user and accept one another number as NO ,
              return index of last occurrence of that NO.

              Input : N : 6
                      NO: 66
                      Elements : 85 66 3 66 93 88
              Output : 3

              Input : N : 6
                      NO: 93
                      Elements : 85 66 3 66 93 88
              Output : 4
            
              Input : N : 6
                      NO: 12
                      Elements : 85 11 3 15 11 111
              Output : -1 
*/

//Requried Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Find
{   
    //Characteristics of Class 
    public :
        int isize;
        int *arr;
        int i;
        int NO;
    //Constructor of Class
    public :
        Find()
        {
            this->isize = 0;
            this->arr = NULL;
            this->NO = 0;
            this->i = 0;
        }
    //Behaviour of Class To Take Input From user 
    void Accept()
    {
        //Taking Input from user
        cout<<"Enter Number of Elements You Want in array \n";
        cin>>this->isize;

        //Allocating Memory to array 
        this->arr = (int *)malloc(this->isize * sizeof(int));

        //Inserting Element in array 
        cout<<"Enter Elements in array \n";
        for(i = 0;i < isize;i++)
        {
            printf("Enter Element Number %d\n",i + 1);
            cin>>this->arr[this->i];
        }

        //Taking Another Number from to find Occurance of 
        cout<<"Enter Number You Want Find Last Occurance of : ";
        cin>>this->NO;
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Behaviour of Class To Find Last Occurance of Entered Number
    int LastOcc()
    {
        for(this->i = this->isize;this->i > 0;this->i--)
        {
            if(this->arr[this->i] == this->NO)
            {
                break;
            }
        }

        //Checking Conditions
        if(this->arr[this->i] == this->NO)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    int iret = 0;

    cout<<"Jay Ganesh....\n";

    //Creating Object of Find Class 
    Find *fobj = new Find();

    //Call To Behaviours of Class
    fobj->Accept();
    iret = fobj->LastOcc();
    printf("Last Occurance of %d number is At index Number %d\n",fobj->NO,iret);

    //Deallocating Memory of array and object of Class
    free(fobj->arr);
    delete(fobj);

    return 0;
}