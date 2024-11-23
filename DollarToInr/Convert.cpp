/*
    Author : Pakshal Jain
    Date : 15/12/2022
    Program : To Converted Entered Money From $ to ₹
*/

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Conversion 
{
    //Characterstics of Class
    private : 
        int No = 0;
    //Constructor if Class
    public :
        //Parameterised Constructor of Class
        Conversion(int no)
        {
            this->No = no;
        }
    //Behaviuour of Class
    int convert()
    {
        int ans = 0;
        
        //1$ = 70 ₹
        ans = this->No * 70;

        return ans;
    }
};//End of Class

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function of Class
int main() 
{
    int No = 0;
    int iret = 0;

    cout<<"Jay ganesh..\n";

    //Taking input From user
    cout<<"Enter Money in Dollar\n";
    cin>>No;

    //Creating object of Conversion Class
    Conversion cobj(No);
    
    //Call To Behaviour of Class
    iret = cobj.convert();

    //Printing obtained Output
    cout<<"Converted Money From Dollar to Inr is : "<<iret;

    return 0;
}