/*
    Author : Pakshal Shashikant Jain 
    Date : 23/06/2023
    Program : Accept N numbers from user and display all such elements which are
              divisible by 3 and 5.
              
              Input :  N : 6
                       Elements : 85 66 3 15 93 88
              
              Output : 15 
*/

//Required Libraries
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Display 
{
    //Characteristics of Class
    private :
        int i;
        int isize;
        int *arr;

    //Constructor of Class
    public :
        Display()
        {
            this->i = 0;
            this->isize = 0;
            this->arr = NULL; 
        }
    //Behaviour of Class To Take input From User
    void Accept()
    {
        //Taking input From User
        printf("Enter Number of elements you want in array \n");
        scanf("%d",&this->isize);

        //allocating memory to array using malloc function
        this->arr = (int *)malloc(this->isize * sizeof(int *));

        //Inserting element in array 
        printf("Enter Elements in array : \n");
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            printf("Enter Element Number : %d\n",(this->i + 1));
            scanf("%d",&this->arr[this->i]);
        }
    }

    //Behaviour of Class To Display Elements Which are Divisible by 3 and 5
    void display()
    {
        printf("Elements Divisible by 3 and 5 are : \n");
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            if(((this->arr[this->i] % 3) == 0)&&((this->arr[this->i] % 5) == 0))
            {
                printf("%d",this->arr[this->i]);
            }
        }

        //Deallcating memory of array
        free(this->arr);
    }
};//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    cout<<"Jay Ganesh...\n";
    
    //Creating object of Display Class
    Display *dobj = new Display();
    
    //Call To Behaviours of Class
    dobj->Accept();
    dobj->display();

    //Deallocating memory of object created
    delete(dobj);

    return 0;
}
