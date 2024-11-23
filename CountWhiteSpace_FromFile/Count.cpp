/*
    Author : Pakshal Shashikant Jain 
    Date : 26/05/2024
    Program : Write a program which accepts file name from user and count number of
              white spaces from that file.

              Input : Demo.txt
              Output : Number of white spaces are 13 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Start of Class
class FileIO 
{
    //Charactersitics of Class
    private :
        int fd;

    //Constructor of Class
    public :
        FileIO()
        {
            this->fd = 0;
        }

    //Behaviour of Class To Count White Space From File 
    int CountWhiteSpace(char fname[])
    {
        int iret = 0;
        char arr[100] = {'\0'};
        int icnt = 0;
        int i = 0;

        //Opening File in Read Mode
        this->fd = open(fname,O_RDONLY);

        if(this->fd == -1)
        {
            cout<<"Unable to Open File \n";

            return -1;
        }
        else 
        {
            cout<<"File Successfully Opened With File Descriptor : "<<this->fd<<'\n';
        }

        //Reading Data From File in Chunks of bytes
        cout<<"Data From File is : \n";
        while((iret = read(this->fd,arr,sizeof(this->fd))) != 0)
        {
            write(1,arr,iret);

            //Counting Number of White Spaces
            for(i = 0;i < iret;i++)
            {
                if(arr[i] == ' ')
                {
                    icnt++;
                }
            }
        }   

        close(fd);

        //Returning Count of White Space
        return icnt;
    }
};//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char arr[40] = {'\0'};
    int iret = 0;

    cout<<"Jay Ganesh......\n";

    //Taking File Name As Input From User
    cout<<"Enter Name of File...\n";
    scanf("%[^'\n']s",&arr);

    //Creating Object of FileIO Class
    FileIO *fobj = new FileIO();

    //Call To Behaviour of Class   
    iret = fobj->CountWhiteSpace(arr);
    cout<<"\nCount of White Spaces From File is : "<<iret;

    //Deallocating Memory of Object
    free(fobj);
    fobj = NULL;

    return 0;
}