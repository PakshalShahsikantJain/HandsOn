/*
    Author : Pakshal Shashikant Jain 
    Date : 05/06/2023
    Program : We have to design application for tourist company.
              Tourist company provides cars on rent.
              Depends on the running of car they apply rent.
              
              If running is less than 100 kilometres then they charge 25
              rupees per kilometre .
              
              And if running is more than 100 kilometres then they apply 15
              rupees per kilometre after 100 kilometres.
    
              We have to accept number of kilometres from user and return
              the estimated rent.
            
              Input : 73 Output : 1825
              Input : 132 Output : 2980
              Input : 189 Output : 3835  
*/

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Car 
{
    //Characteristcs of Class
    private :
        int No = 0;
    
    //Constructor of Class
    public :
        //Default Constructor of Class
        Car()
        {
            this->No = 0;
        }
    
    //Behaviour of Class To Take Input From User
    int Accept()
    {
        printf("Enter Running of Car in KM\n");
        scanf("%d",&this->No);
    }

    //Behaviour of Class To Calculate Car Rent 
    int Rent()
    {
        int rent = 0;

        //Handeling Condition if Entered Car Runnig is less Than 100 KM
        if(this->No < 100)
        {
            rent = this->No * 25;

            return rent;
        }
        //Handeling Condition if Enterd Car Running is More Than 100 KM
        else 
        {
            rent = this->No * 15;
            
            return rent;
        }
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int iret = 0;

    printf("-----Marvellous Car Rental Services-------\n");

    //Creating object of Car Class
    Car cobj;
    
    //Call To Behaviours of Class
    cobj.Accept();
    iret = cobj.Rent();

    //Printing Car Rent Calculated
    printf("You Have To Pay Car Rent of : %d INR",iret);

    return 0;
}