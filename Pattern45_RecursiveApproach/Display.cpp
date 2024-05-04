/*
    Author: Pakshal Shashikant Jain
    Date: 04/05/2024
    Program: Write a recursive program which display below pattern.
             Output : A B C D E F 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern
{
    private :
        int ino;
        char ch;

    public :
        Pattern(int ivalue,char cvalue)
        {
            this->ino = ivalue;
            this->ch = cvalue;
        }

    void Display()
    {
        if(this->ino < 1)
        {
            return;
        }
        else 
        {
            cout<<this->ch<<"\t";
            this->ch++;
            this->ino--;
            Display();
        }
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    int ino = 0;
    char ch = '\0';

    cout<<"Jay Ganesh......\n";

    cout<<"Enter any One Number Till You Want to print character :"<<"\n";
    cin>>ino;

    cout<<"Enter Starting Character :\n";
    cin>>ch;

    Pattern *pobj = new Pattern(ino,ch);

    cout<<"Output : \n";
 
    //Call To Dislay Function
    pobj->Display();

    free(pobj);
    pobj = NULL;

    return 0;
}