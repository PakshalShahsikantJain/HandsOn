/*
    Author : Pakshal Shashikant Jain 
    Date : 05/07/2023
    Program : Accept N numbers from user and accept one another number as NO return frequency of NO form it.
              Input : N : 6
                      NO: 66
                      Elements : 85 66 3 66 93 88
              Output : 2

              Input : N : 6
                      NO: 12
                      Elements : 85 11 3 15 11 111
              Output : 0 
*/

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Freq
{
    //Characteristics of Class
    private :
        int isize;
        int *arr;
        int i;    
        int NO;

    //Constructor of Class
    public :
        Freq()
        {
            this->i = 0;
            this->isize = 0;
            this->arr = NULL;
            this->NO = 0;
        }
    
    //Behaviour of Class to Take input From user
    void Accept()
    {
        printf("Enter Number of Elements You Want in array : \n");
        scanf("%d",&this->isize);

        //Allcoating Memory To array 
        this->arr = (int *)malloc(isize * sizeof(int));

        //Handeling Condition if memory to array not allocated properly 
        if(this->arr == NULL)
        {
            cout<<"Unable To allocate Memory \n";
            return;
        }

        //Inserting Elements in array 
        printf("Enter Elements in array : \n");
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            printf("Enter Element Number %d \n",i + 1);
            scanf("%d",&this->arr[this->i]);
        }

        //Taking another number from user To count Frequency of 
        printf("Enter Any Number To You Want To Count Frequency of from Entered n numbers :\n");
        scanf("%d",&this->NO);
    }

    //Behaviour of Class To Count Frequency of 
    int Count()
    {
        int icnt = 0;

        //logic 
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            if(this->arr[i] == this->NO)
            {
                icnt = icnt + 1;
            }
        }

        //Deallocating Memory of array 
        free(arr);

        return icnt;
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    int iret = 0;

    printf("Ganapati Bappa Morya....\n");

    //Creating object of Frequency Class
    Freq *fobj = new Freq();
    
    //Call To Behaviours of Class
    fobj->Accept();
    iret = fobj->Count();

    //Printing Frequency Calculated
    cout<<"Frequency of Entered Number in Entered N Numbers is : "<<iret;

    //Deallocatig memory of Object Created
    delete(fobj);

    return 0;
}