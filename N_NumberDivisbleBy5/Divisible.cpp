/*
    Author : Pakshal Shashikant Jain
    Date : 07/06/2023
    Program : Accept N numbers from user and display all such elements which are
              divisible by 5.
              
              Input : N : 6
              Elements : 85 66 3 80 93 88
              Output : 85 80 
*/

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Divisible 
{
    //Characteristics of Class
    private :   
        int isize;
        int *arr;
    //Constructor of Class
    public :
        Divisible()
        {
            this->isize = 0;
            this->arr = NULL;
        }

    //Behaviour of Class
    void Accept()
    {
        int i = 0;
        
        //Taking Input From User
        cout<<"Enter Number of Elements You Want in Array \n";
        cin>>this->isize;   

        this->arr = (int *)malloc(this->isize * sizeof(int));

        //Inserting ELements in Array
        cout<<"Enter Elements in Array \n";
        for(i = 0;i < this->isize;i++)
        {
            printf("Enter Element Number %d\n",i + 1);
            scanf("%d",&this->arr[i]);
        }
    }

    //Behaviour of Class To Display Elements Divisible By 5
    void Display()
    {
        int i = 0;

        cout<<"Elements of array Which Are Divisible By 5 are : \n";
        for(i = 0;i < isize;i++)
        {
            if((this->arr[i] % 5) == 0)
            {
                printf("%d\t",this->arr[i]);
            }
        }
    }
};//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int i = 0;

    cout<<"Jay Ganesh....\n";
    
    //Creating object od Divisible Class
    Divisible dobj;

    //Call To Behaviours of Class
    dobj.Accept();
    
    dobj.Display();

    return 0;
}