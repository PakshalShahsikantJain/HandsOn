/*
    Author : Pakshal Shashikant Jain 
    Date : 14/5/2024
    Program : Write a recursive program which accept number from user and return
              smallest digit

              Input : 87983
              Output : 3  
*/

//Required Libraries
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find Smallest Digit
int Min(int ino)
{
    static int imin = 0;
    int Digit = 0;

    //Logic To Find
    if(imin == 0)
    {
        imin = ino % 10;
        ino = ino / 10;
    }

    Digit = ino % 10;
    
    if(Digit == 0)
    {
        imin = 0;
        return imin;
    }
    else if(Digit < imin)
    {
        imin = Digit;
    }
    ino = ino / 10;
    
    if(ino != 0)
    {
        //Recursive Function Call
        Min(ino);
    }
    
    return imin;
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

    //Call To Min Function
    iret = Min(ino);
    cout<<"Smallest Digit in Number "<<ino<<" is : "<<iret;

    return 0;
}