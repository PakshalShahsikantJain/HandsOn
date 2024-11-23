/*
    Author : Pakshal Shashikant Jain 
    Date : 04/06/2023
    Program : Design application for school management system.
              As school is primary there are 4 standards from 1 to 4.
              School fees of each standard is different.
              For first standard fees are 8900, for second standard 12790, for
              third standard 21000 and for fourth standard fees are 23450.
              We have to accept standard from user and display the
              corresponding fees. 
*/

//Required Libraries
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class SchoolFee
{
    //Characteristics of Class
    private :   
        int No = 0;
    //Constructor of Class
    public :
        SchoolFee(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    int Fee()
    {
        int fee = 0;

        //Logic To Print School Fees According To Standard
        switch(this->No)
        {
            case 1 :
                fee = 8900;
                return fee;
            case 2 :
                fee = 12790;
                return fee;
            case 3 :
                fee = 21000;
                return fee;
            case 4 :
                fee = 23450;
                return fee;
            default :
                printf("Invalid Input");
                exit(0); 
        }
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int No = 0;
    int iret = 0;

    cout<<"Jay Ganesh....\n";

    cout<<"-----------Marvellous Internation Primary School-----------\n";

    //Taking Input From User
    cout<<"Enter Your Standard \n";
    cin>>No;

    //Creating object of SchoolFee Class
    SchoolFee fobj(No);

    //Call To Behaviour of Class
    iret = fobj.Fee();

    //Printing Fees According To Standard
    cout<<"Your Fees is : "<<iret;

    return 0;
}