/*
    Author : Pakshal Shashikant Jain 
    Date : 17/05/2024
    Program : Write application which accept file name from user and create that file.
              
              Input : Demo.txt
              Output : File created successfully. 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
using namespace std;
#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Starting of Class
class FileIO 
{
    //Characteristics of Class
    private :
        int fd;
    public : 
        //Constructor of Class 
        FileIO()
        {
            this->fd = 0;
        }

    //Behaviour of Class To Create Entered File
    void CreateFile(char fname[]) 
    {
        this->fd = creat(fname,0x777);

        if(this->fd == -1)
        {
            cout<<"Unable To Create File";
        }
        else 
        {
            cout<<"File Created Successfully with File Descriptor : "<<this->fd;
        }
        
        close(this->fd);
    }

}; //End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    char name[40] = {'\0'};
    
    cout<<"Jay Ganesh.....\n";
    
    //Taking Input From User
    cout<<"Enter File Name To Create : ";
    cin>>name;

    //Creating Object of FileIO Class
    FileIO *fobj = new FileIO();

    //Call To Behaviour of Class
    fobj->CreateFile(name);

    return 0;
}