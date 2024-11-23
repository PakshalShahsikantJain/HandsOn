/*
    Author : Pakshal Shashikant Jain 
    Date : 07/06/2023
    Program :  Accept N numbers from user and return difference between summation
               of even elements and summation of odd elements.
               Input : N : 6
               Elements : 85 66 3 80 93 88
               Output : 53 (234 - 181) 
*/

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Diff
{
    //Characterstics of Class
    private :
        int isize;
        int *arr;
    //Constructor of Class
    public :
        //Default Constructor of Class
        Diff()
        {
            this->arr = NULL;
            this->isize = 0;
        }

    //Behaviour of Class To Take Input From User
    int Accept()
    {
        int i = 0;

        printf("Enter Number of Elements You Want in Array\n");
        scanf("%d",&this->isize);

        //Allocating Memory To Array using malloc()
        this->arr = (int *)malloc(this->isize * sizeof(int));

        if(this->arr == NULL)
        {
            cout<<"Unable to Allocate Memory To Array";

            return - 1;
        }

        //Taking Input From User       
        printf("Enter Elements in Array\n");
        for(i = 0;i < this->isize;i++)
        {
            printf("Enter Element Number : %d\n",i + 1);
            scanf("%d",&this->arr[i]);
        }
    }

    //Behaviour of Class To Calcualte Differnce 
    int difference()
    {
        int i = 0;

        int diff = 0;
        int SumEven = 0;
        int SumOdd = 0;

        //Logic To Calculate Differnce
        for(i = 0;i < this->isize;i++)
        {
            if(this->arr[i] % 2 == 0)
            {
                SumEven = SumEven + this->arr[i];
            }
            else 
            {
                SumOdd = SumOdd + this->arr[i];
            }
        }
        
        //Deallocating Memory of Array 
        free(this->arr);

        diff = SumEven - SumOdd;

        return diff;
    }
};//End of Class

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int iret = 0;

    printf("Jay Ganesh....\n");

    //Creating object of Diff Class
    Diff dobj;

    //Call To Behaviours of Class
    dobj.Accept();
    iret = dobj.difference();

    //Printing Difference Calculated
    printf("Difference Between Summation of Even and Odd Elements is : %d",iret);

    return 0;
}