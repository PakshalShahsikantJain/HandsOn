/*
    Author : Pakshal Jain
    Date : 29/10/2022
    Program : To accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter) 
*/

//Required Libraries
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Convert 
{
    //Characteristics of Class
    private :
        int No = 0;
    //Constructor of Class
    public :
        Convert(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    int KmToM()
    {
        int ans = 0;

        ans = this->No * 1000;

        return ans;
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    int iret = 0;

    cout<<"Jay Ganesh...\n";

    //Taking Input From User
    cout<<"Enter Distance in KM..\n";
    cin>>No;

    //Creating Object of Convert Class
    Convert cobj(No);
    
    //Call To Behvaiour of Class
    iret = cobj.KmToM();

    printf("Converted KM TO M is : %d",iret);

    return 0;
}