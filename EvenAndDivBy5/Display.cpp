/*
    Author : Pakshal Shashikant Jain 
    Date : 12/06/2023

    Program : Accept N numbers from user and display all such elements which are even and divisible by 5.
              Input : N : 6
              Elements : 85 66 3 80 93 88
              Output : 80 
*/

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class Display 
{
    //Characteristics of Class
    private :
        int isize;
        int *arr;

    //Constructor of Class
    public :
        Display()
        {
            this->isize = 0;
            this->arr = NULL;
        }
    
    //Behaviour of Class To Take Input From User
    void Accept()
    {
        int i = 0;

        printf("Enter number of Rows You Want...\n");
        scanf("%d",&this->isize);

        this->arr = (int *)malloc(this->isize * sizeof(int));
        
        //Inserting Values in Array 
        printf("Enter Element in Array : \n");
        for(i = 0;i < this->isize;i++)
        {
            printf("Enter Element Nmumber %d\n",i + 1);
            scanf("%d",&this->arr[i]);
        }
    }

    //Behaviour of Class To Display Elements According to Given Condition
    void display()
    {
        int i = 0;

        //Printing Elements
        printf("Printing Elements Which are Even and Divisible By 5 : \n");
        for(i = 0;i < this->isize;i++)
        {
            if(((this->arr[i] % 2) == 0)&&((this->arr[i] % 5)== 0))
            {
                printf("%d",this->arr[i]);               
            }
        }

        free(this->arr);
    }
};

//Main Function
int main()
{
    printf("Jay Ganesh....\n");

    //Creating Object of Display Class
    Display *dobj = new Display();

    //Calls To Behaviour of Class
    dobj->Accept();
    dobj->display();

    //Deallocating Memory of Class Object Created
    delete dobj;

    return 0;
}