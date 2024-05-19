/*
    Author : Pakshal Shashikant Jain 
    Date : 19/05/2024
    Program : Write application which accept file name from user and read all data from that file
              and display contents on screen.
            
              Input : Demo.txt
              Output : Display all data of file. 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Start of Class
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
    
    //Behaviour of Class To Read Entered File
    int ReadFile(char fname[])
    {
        int iret = 0;
        char arr[40] = {'\0'};

        //Logic To Read Whole File
        
        //Opening File Read Mode or Creating File if File is Not Present
        this->fd = open(fname,O_RDONLY | O_CREAT);

        if(this->fd == -1)
        {
            cout<<"Unable To Open File \n";
        }
        else 
        {
            cout<<"File Successfully Opened with File Descriptor : "<<this->fd<<"\n";
        }

        //Reading File
        cout<<"Date From File is : \n";
        while((iret = read(fd,arr,sizeof(this->fd))) != 0)
        {
            write(1,arr,iret);    // 1 means STDOUT, STOUT Means Printing Output On Console or Monitor
        }

        //Calculating Size of File
        iret = lseek(this->fd,0,SEEK_END);

        //Closing File 
        close(this->fd);

        return iret;
    }
};//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int iret = 0;
    char arr[40] = {'\0'};

    printf("Jay Ganesh....\n");

    //Taking Input From User
    printf("Enter File Name : ");
    scanf("%[^'\n']s",&arr);

    //Creating Object of FileIO Class
    FileIO *fobj = new FileIO();

    //Call To Behaviour of Class
    iret = fobj->ReadFile(arr);

    //Printing Size of File Calculated
    cout<<"\nSize of File is : "<<iret<<" bytes";

    //Deallocating Memory of Object of File
    free(fobj);

    return 0;
}