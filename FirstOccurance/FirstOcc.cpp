/*
    Author : Pakshal Shashikant Jain 
    Date : 07/07/2023
    Program : Accept N numbers from user and accept one another number as NO ,
                return index of first occurrence of that NO.

    Input : N : 6
            NO: 66
            Elements : 85 66 3 66 93 88
    Output : 1

    Input : N : 6
            NO: 12
            Elements : 85 11 3 15 11 111
    Output : 0 
*/

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Occurance
{
    //Characteristics of Class
    public :
        int isize;
        int *arr;
        int NO;
        int i;

    //Constructor of Class
    public :
        Occurance()
        {
            this->isize = 0;
            this->arr = NULL;
            this->NO = 0;
            this->i = 0;
        }

    //Behaviour of Class To Take Input From User
    void Accept()
    {
        //Taking Input From user 
        cout<<"Enter Number of Elements You want in array : \n";
        cin>>this->isize;

        //Allocating Memory To Array 
        arr = (int *)malloc(this->isize * sizeof(int));

        //Inserting Elements in array 
        printf("Enter Elements in array : \n");
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            printf("Enter Element Number : %d\n",this->i + 1);
            scanf("%d",&this->arr[this->i]);
        }

        //Logic To First Array 
        printf("Enter Number To find first Occurance of Entered Number : \n");
        scanf("%d",&this->NO);
    }

    //Function To Find First Occurance of Entered Number in Entered array 
    int FirstOccurance()
    {
        for(i = 0;i < isize;i++)
        {
            if(this->arr[this->i] == this->NO)
            {
                break;
            }
        }

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

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    int iret = 0;

    printf("Jay Ganesh....\n");

    //Creating Object Occurance Class   
    Occurance *obj = new Occurance();

    //Call To Behaviours of Class
    obj->Accept();
    iret = obj->FirstOccurance();

    //Handeling Condition if Return value is -1
    printf("Number %d is Present at Index Number %d\n",obj->NO,iret);

    return 0;
}