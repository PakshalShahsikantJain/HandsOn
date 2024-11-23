/*
    Author : Pakshal Shashikant Jain 
    Date : 16/05/2024
    Program : Write application which accept file name from user and open that file in read mode.

              Input : Demo.txt
              Output : File opened successfully. 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class FileIO
{
    //Characteristics of Class
    private :
        int fd;

    //Constructor of Class
    public :
        FileIO()
        {
            this->fd = 0;
        }    

    //Behaviour of Class To Open File In Read Mode
    void OpenFile(char name[])
    {
        //Opening File in Read Mode using Open Function
        this->fd = open(name,O_RDONLY);

        if(this->fd == -1)
        {
            cout<<"Unable to Open File";
        }
        else 
        {
            cout<<"File Successfully Opened With File Descriptor : "<<this->fd;
        }

        //Closing File
        close(fd);
    }
};//End of Class

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[30] = {'\0'};

    cout<<"Jay Ganesh....\n";

    //Taking Input From User
    cout<<"Enter One String : ";
    scanf("%[^'\n']s",&arr);

    //Creating Object of FileIO Class
    FileIO *fobj = new FileIO();

    //Call To Behaviour of Class
    fobj->OpenFile(arr);

    return 0;
}