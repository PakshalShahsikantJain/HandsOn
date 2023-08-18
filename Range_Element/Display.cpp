/*
    Author : Pakshal Shashikant Jain 
    Date : 12/07/2023
    Program : Accept N numbers from user and accept Range, Display all elements from
              that range.
              
              Input : N : 6
                      Start: 60
                      End : 90
                      Elements : 85 66 3 76 93 88
              Output : 66 76 88

              Input : N : 6
                      Start: 30
                      End : 50
                      Elements : 85 66 3 76 93 88
              Output : 
*/

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Range
{
    //Characteristics of Class
    public :
        int isize;
        int *arr;
        int start;
        int end;
        int i;

    //Constructor of Class
    public :
        Range()
        {
            this->isize = 0;
            this->arr = NULL;
            this->start = 0;
            this->end = 0;
            this->i = 0;
        }
    //Behaviour of Class To Take Input From User
    void Accept()
    {
        //Taking Input From user
        printf("Enter Number of Elements You Want in array \n");
        scanf("%d",&this->isize);

        //Allocating Memory To Array 
        this->arr = (int *)malloc(this->isize * sizeof(int));

        //Inserting Elements in array 
        printf("Enter Elements in array\n");
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            printf("Enter Element Number : %d\n",this->i + 1);
            scanf("%d",&this->arr[this->i]);
        }

        //Taking Starting Number From user
        printf("Enter Starting Number \n");
        scanf("%d",&this->start);

        //Taking Ending Number From User
        printf("Enter Ending Number \n");
        scanf("%d",&this->end);
    }

    //Behaviour of Class To Display Elements Which are in Entered Range
    int* Display()
    {
        static int brr[100];

        //Logic To Display Elements Which are in entered Number
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            if((this->arr[this->i] >= this->start)&&(this->arr[this->i] <= this->end))
            {
                brr[this->i] = arr[this->i];
            }
        }

        return brr;
    }
};//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int *iret = NULL;
    int i = 0;

    printf("Jay Ganesh....\n");

    //Creating object of Range Class
    Range *robj = new Range();

    //Call To Behaviours of Class
    robj->Accept();
    iret = robj->Display();

    //Printing Elements Which are in Entered Range
    printf("Printing Elements Which are in Range in Between %d and %d number \n",robj->start,robj->end);
    for(i = 0;i < robj->isize;i++)
    {
        if(iret[i] != 0)
        {
            printf("%d\t",iret[i]);
        }
    } 

    //Deallocating memory of arrays
    free(robj->arr);
    free(iret);

    return 0;
}