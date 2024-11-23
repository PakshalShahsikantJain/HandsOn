/*
    Author : Pakshal Shashikant Jain 
    Date : 11/5/2024
    Program : Write a recursive program which accept number from user and return
              largest digit

              Input : 87983
              Output : 9   
*/

//Required Libraries
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find Largest Digit
int Max(int ino)
{
    static int imax = 0;
    int Digit = 0;

    //Logic To Find
    Digit = ino % 10;
    if(imax < Digit)
    {
        imax = Digit;
    }
    ino = ino / 10;
    
    if(ino != 0)
    {
        //Recursive Function Call
        Max(ino);
    }
    else
    {
        return imax;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int ino = 0;
    int iret = 0;

    cout<<"Jay Ganesh....\n";

    //Taking Input From User
    cout<<"Enter One Number : ";
    cin>>ino;

    //Call To Max Function
    iret = Max(ino);
    cout<<"Largest Digit in Number "<<ino<<"is : "<<iret;

    return 0;
}