/*
    Author : Pakshal Shashikant Jain 
    Date : 24/05/2024
    Program : Write a program which accepts file name from user and count number of
              capital characters from that file.

              Input : Demo.txt
              Output : Number of capital characters are 23
*/

//Required Libraries
#include<iostream>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Start of Class
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
    
    //Behaviour of Class To Count Capital Characters From File 
    int CountChar(char fname[]) 
    {
        int iret = 0;
        int i = 0;
        int icnt = 0;
        char Mug[100] = {'\0'};

        //Opening File in Read Mode Only
        this->fd = open(fname,O_RDONLY);

        if(this->fd == -1)
        {
            cout<<"Unable To Open File";

            return -1;
        }
        else 
        {
            cout<<"File Successfully Opened With File Descriptor : "<<this->fd<<"\n";
        }

        //Reading Data From File in Storing it in Local Array
        while((iret = read(this->fd,Mug,sizeof(this->fd))) != 0)
        {
            //Counting Capital Characters From File
            for(i = 0;i < iret;i++)
            {
                if((Mug[i] >= 'A')&&(Mug[i] <= 'Z'))
                {
                    icnt++;
                }
            }
        }

        //Closing File 
        close(this->fd);

        return icnt;    
    }
};//End of Class

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    char arr[40] = {'\0'};
    int iret = 0;

    cout<<"Jay Ganesh......\n";
    
    //Taking File Name as Input From User
    cout<<"Enter File Name : ";
    scanf("%[^'\n']s",&arr);

    //Creating Object of FileIO Class 
    FileIO *fobj = new FileIO();

    //Call To Behaviour of Class
    iret = fobj->CountChar(arr);

    //Printing Count of Capital Characters 
    cout<<"Count of Capital Characters From File is : "<<iret;

    //Deallocating Memory of Object of Class
    free(fobj);
    fobj = NULL;

    return 0;
}