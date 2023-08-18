/*
    Author : Pakshal Shashikant Jain 
    Date : 06/07/2023
    Program : Accept N numbers from user and accept one another number as NO ,
              check whether NO is present or not.

              Input : N : 6
                      NO: 66
                      Elements : 85 66 3 66 93 88
              Output : TRUE

              Input : N : 6
                      NO: 12
                      Elements : 85 11 3 15 11 111
              Output : FALSE 
*/

//Required Libraries
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Freq
{
    //Characteristics of Class
    public :
        int isize;
        int *arr;
        int NO;
        int i;

    //Constructor of Class
    public :
        Freq()
        {
            this->isize = 0;
            this->arr = NULL;
            this->NO = 0;
            this->i = 0;
        }
    
    //Behaviour of Class To Take Input From user
    void Accept()
    {
        //Taking Input From user
        printf("Enter Number of Elements you Want in array : \n");
        scanf("%d",&this->isize);

        //Allocating Memory To array 
        arr = (int *)malloc(isize * sizeof(int));

        //Inserting Elements in array
        printf("Enter Elements in array : \n");
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            printf("Enter Element Number : %d\n",i + 1);
            scanf("%d",&arr[this->i]);
        }

        //Taking Another Number from user To Check Whether it is Present or Not In Entered N Numbers
        printf("Enter Any Number To Check if It is Present or Not in Entered N Numbers : \n");
        scanf("%d",&this->NO);
    }

    //Behaviour of Class To Check 
    bool Check()
    {
        //Logic To Check
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            if(this->arr[this->i] == this->NO)
            {
                break;
            }
        }

        //Handeling Conditions
        if(this->arr[this->i] == this->NO)
        {
            return true;
        }
        else 
        {
            return false;
        }

        //Deallocatig Memory of Array
        free(this->arr);
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main() 
{
    int isize = 0;
    bool bret = false;

    printf("Jay Ganesh...\n");

    //Creating object of Freq Class
    Freq *fobj = new Freq();

    //Call To Behaviours of Class
    fobj->Accept();
    bret = fobj->Check();

    //Handeling Condition if Return Value is True
    if(bret == true)
    {
        printf("Number %d is Present in Entered N Numbers \n",fobj->NO);
    }
    //Handeling Condition if Return Value is False
    else
    {
        printf("Number %d is Not Present in Entered N Numbers \n",fobj->NO);
    }

    //Deallocating Memory of Object Created 
    delete(fobj);
    
    return 0;
}