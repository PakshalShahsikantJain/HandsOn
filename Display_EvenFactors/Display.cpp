/*
    Author : Pakshal Jain
    Date : 20/09/2022
    Program : Accept number from user and print even factors of that number.
*/

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class EvenFact
{
    //Chraracteristics of Class
    private : 
        int No = 0;
    //Constructor of Class(Parameterised)
    public :
        EvenFact(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    void Display()
    {
        int i = 0;
        //Filter To Convert Negative Number To Positive
        if(this->No < 0)
        {
            this->No = -this->No;
        }
        printf("Printing Even Factor of %d\n",this->No);
        for(i = 1;i <= this->No;i++)
        {
            if((this->No % i == 0) && (i % 2 == 0))
            {
                printf("%d\t",i);
            }
        }
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int No = 0;

    cout<<"Ganpati Bappa Morya...\n";
    cout<<"Enter One Number..\n";
    cin>>No;

    //Creating Object of Class
    EvenFact eobj(No);
    //Calling Behaviour of Class
    eobj.Display();

    return 0;
}