/*
    Author : Pakshal Jain
    Date : 15/10/2022
    Program : To Display Digits of Entered Number
*/

//Required Libraries
#include<iostream>
using namespace std;

//Class Declaration
class Digits
{
    //Characteristics of Class
    private :
        int No = 0;
    //Constructor of Class
    public : 
        Digits(int no)
        {
            this->No = no;
        } 
    //Behaviour of Class
    void Display()
    {
        int digit = 0;

        //Logic To Display Digits in Reverse
        while(No != 0)
        {
            digit = No % 10;
            printf("%d\n",digit);
            No = No / 10;
        }
    }   
};

int main() 
{
    int No = 0;

    printf("Ganapti Bappa Morya...\n");

    printf("Enter One Number\n");
    scanf("%d",&No);
    
    //Crearting object of Class
    Digits dobj(No);
    //Calling Behviour of Class
    dobj.Display();

    return 0;
}