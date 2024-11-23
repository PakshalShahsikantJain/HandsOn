/*
    Author : Pakshal Shashikant Jain 
    Date : 15/07/2023
    Program : Accept N numbers from user and return product of all odd elements.
              Input : N : 6
                      Elements : 15 66 3 70 10 88
                      Output : 45
              Input : N : 6
                      Elements : 44 66 72 70 10 88
                      Output : 0
*/

//Required Libraries
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Product 
{
    //Characteristics of Class
    private :
        int isize;
        int *arr;
        int i;
    //Constructor of Class
    public :
        Product()
        {
            this->isize = 0;
            this->arr = NULL;
            this->i = 0; 
        }
    //Behaviour of Class To Take Input From user
    void Accept()
    {
        //Taking Input From user
        cout<<"Enter Number of Elements You want in array \n";
        cin>>this->isize;

        if(this->isize < 0)
        {
            this->isize = -this->isize;
        }

        //Allocating Memory To array 
        arr = (int *)malloc(this->isize * sizeof(int));

        //Inserting Elements in array
        cout<<"Enter Elements in array \n";
        for(this->i = 0;this->i < this->isize;this->i++)
        {
            printf("Enter Element Number %d\n",i + 1);
            scanf("%d",&this->arr[this->i]);
        }
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Behaviour of Class To Calculate Product
    int product()
    {
        int imult = 1;

        for(this->i = 0;this->i < this->isize;this->i++)
        {
            if((arr[this->i] % 2) != 0)
            {
                imult = imult * this->arr[this->i];   
            }
        }

        if(imult == 1)
        {
            imult = 0;
        }

        return imult;
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    int iret = 0;

    cout<<"Jay Ganesh....\n";

    //Creating Object of Product Class   
    Product *pobj = new Product();

    //Call to Behaviours of Class
    pobj->Accept();
    iret = pobj->product();

    //Priting Procduct Calculate
    cout<<"Product of Odd Element in Entered N Number is : "<<iret<<"\n";

    return 0;
}