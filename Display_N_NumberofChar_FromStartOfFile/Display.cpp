/*
    Author : Pakshal Shashikant Jain 
    Date : 28/05/2024
    Program : Write a program which accepts file name and one count from user and read
              that number of characters from starting position.

              Input : Demo.txt 12
              Output : Display first 12 characters from Demo.txt 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

    //Beghaviour of Class To Display N Number of Characters From File
    void DiplayN(char fname[],int isize)
    {
        int iret = 0;
        char arr[100] = {'\0'};

        this->fd = open(fname,O_RDONLY);

        if(this->fd == -1)
        {
            cout<<"Unable to Open File \n";
        }
        else 
        {
            cout<<"File Successfully Opened With File Descriptor : "<<this->fd<<"\n";
        }

        //Reading N Number of Characters From File 
        iret = read(this->fd,arr,isize);

        //Printing N Number of Character From File
        cout<<"Data From File is : ";
        write(1,arr,iret);

        //Closing File 
        close(this->fd);
    }
};//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function 
int main() 
{
    int iret = 0;
    char arr[40] = {'\0'};
    int ino = 0;

    cout<<"Jay Ganesh.....\n";

    //Taking File Name as Input From User
    cout<<"Enter File Name : ";
    scanf("%[^'\n']s",&arr);

    cout<<"Enter Number of Characters You Want To Read From File : ";
    cin>>ino;

    //Creating object of FileIO Class
    FileIO *fobj = new FileIO();

    //Call To Behaviour of Class
    fobj->DiplayN(arr,ino);

    return 0;
}