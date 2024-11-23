/*
    Author : Pakshal Shashikant Jain 
    Date : 20/05/2024
    Program : Write application which accept file name from user and one string from user. Write
              that string at the end of file.

              Input : Demo.txt
                      Hello World

              Output : Write Hello World at the end of Demo.txt file 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
using namespace std;
#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Start of Class
class FileIO
{
    private :
        //Characteristics of Class
        int fd;
    public :
        //constructor of Class
        FileIO()
        {
            this->fd = 0;
        }
    
    //Behaviour of Class To Write Data At The End of File
    void Append(char fname[],char arr[])
    {
        int isize = 0;
        int iret = 0;

        //Opening File in Write Mode Only
        this->fd = open(fname,O_WRONLY);

        if(this->fd == -1)
        {
            cout<<"Unable To Open File \n";

            return;
        }
        else 
        {
            cout<<"File Successfully Opened With File Descriptor : "<<this->fd<<"\n";
        }

        //Changing Position of Cursor To The End of File 
        lseek(fd,0,SEEK_END);

        //Calculating Size of Data To Be Written in File
        while(arr[isize] != '\0')
        {
            isize++;
        }    

        //Writting Data In File 
        iret = write(fd,arr,isize);
        if(iret == -1)
        {
            cout<<"Unable To Write Into File";
        }
        else
        {
            cout<<"Data Successfully Written in File";
        }

        //Closing File 
        close(fd);
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    char fname[40] = {'\0'};
    char data[40] = {'\0'};

    cout<<"Jay Ganesh....\n";
    
    //Taking File Name as Input From User
    cout<<"Enter File Name : ";
    scanf("%[^'\n']s",&fname);

    //Taking Data From User
    cout<<"Enter Data You Want To Enter in File : ";
    scanf(" %[^'\n']s",&data);

    //Creating Object of FileIO Class
    FileIO *fobj = new FileIO();

    //Call To Behaviour of Class
    fobj->Append(fname,data);

    return 0;
}
