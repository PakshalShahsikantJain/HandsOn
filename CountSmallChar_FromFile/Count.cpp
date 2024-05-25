/*
    Author : Pakshal Shashikant Jain 
    Date : 25/05/2024
    Program : Write a program which accepts file name from user and count number of
              small characters from that file.

              Input : Demo.txt
              Output : Number of small characters are 21
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Start of Class
class FileIO 
{
    //Characteristics of Class
    private :
        int fd;   //Instance Variable of Class
    public :
        //Constructor of Class
        FileIO()
        {
            this->fd = 0;
        }

    //Behaviour of Class To Count Small Characters From File
    int CountSmall(char fname[]) 
    {
        int iret = 0;
        int i = 0;
        int icnt = 0;
        char arr[100] = {'\0'};

        //Opening File In Read Mode
        this->fd = open(fname,O_RDONLY);
        
        if(this->fd == -1)
        {
            cout<<"Unable To Open File \n";
            
            return -1;
        }
        else 
        {
            cout<<"File Successfully Opened With File Descriptor : "<<this->fd<<"\n";
        }

        //Read Data From File in Chunks of Bytes
        cout<<"Data From File is : \n";
        while((iret = read(this->fd,arr,sizeof(this->fd))) != 0)
        {
            write(1,arr,iret);

            for(i = 0;i < iret;i++)
            {
                if((arr[i] >= 'a')&&(arr[i] <= 'z'))
                {
                    icnt++;
                }
            }
        }
        
        close(fd);
        
        return icnt;
    }
};//End of Class

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    char arr[40] = {'\0'};
    int iret = 0;

    cout<<"Jay Ganesh.....\n";

    //Taking File Name as Input From User
    cout<<"Enter File Name : ";
    scanf("%[^'\n']s",&arr);

    //Creating object of FileIO Class
    FileIO *fobj = new FileIO();

    //Call To Behaviour of Class
    iret = fobj->CountSmall(arr);

    //Printing Count of Small Characters
    printf("\nCount of Small Charaters From File is : %d",iret);

    //Deallocating Memory of Object of File 
    free(fobj);

    return 0;
}