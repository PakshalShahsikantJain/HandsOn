/*
    Author : Pakshal Jain
    Date : 17/10/2022
    Program : To Count Frequecy of Two Present in Entered number
*/

//Required Libraries
/*
    Author : Pakshal Jain
    Date : 17/10/2022
    Program : To Count Frequency of Two in Entered Present in Entered Number
*/

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Frequency
{
    //Characteristics of Class
    private :
        int No = 0;
        int icnt = 0;
    //Constructor of Class
    public :
        Frequency(int no)
        {
            this->No = no;
        }
    //Behaviour of Class
    int Count()
    {
        int Digit = 0;

        //Logic To Count Frequency
        while(this->No != 0)
        {
            Digit = this->No % 10;
            if(Digit == 2)
            {
                this->icnt++;
            }
            this->No = this->No / 10;
        }

        return this->icnt;
    }
};//End of Class

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int No = 0;
    int iret = 0;

    cout<<"Jay Ganesh....\n";

    //Taking Input From User   
    cout<<"Enter One Number\n";
    cin>>No;

    //Creating object of Find Class
    Frequency fobj(No);
    //Calling Behaviour of Class
    iret = fobj.Count();

    //Printing Frequecy of Two
    printf("Frequency of Two in Entered Number is : %d",iret);

    return 0;
}