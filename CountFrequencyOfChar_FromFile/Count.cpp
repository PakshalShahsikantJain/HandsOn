/*
    Author : Pakshal Shashikant Jain 
    Date : 27/05/2024
    Program : Write a program which accepts file name and one character from user and
              count number of occurrences of that characters from that file.

              Input : Demo.txt ‘M’
              Output : Frequency of M is 7 
*/

///////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////

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

    //Behaviour of Class To Count Frequency of Entered Character
    int CountChar(char fname[],char ch) 
    {
        int iret = 0;
        int i = 0;
        int icnt = 0;
        char arr[100] = {'\0'};

        //Opening File in Read Mode Only
        this->fd = open(fname,O_RDONLY);

        if(this->fd == -1)
        {
            cout<<"Unable To Open File";
            return -1;
        }
        else 
        {
            cout<<"File Successfully Opened With File Descriptor :"<<this->fd;
        }

        //Reading File and Storing Data in Local Array
        while((iret = read(this->fd,arr,sizeof(this->fd))) != 0)
        {
            write(1,arr,iret);

            //Counting Frequency of Entered Character
            for(i = 0;i < iret;i++)
            {
                if(arr[i] == ch)
                {
                    icnt++;
                }
            }
        }

        //Closing File 
        close(this->fd);

        //Returing Count of Entered Character
        return icnt;
    }
};//End of Class

///////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    int iret = 0;
    char arr[40] = {'\0'};
    char ch = ' ';

    cout<<"Jay Ganesh.....\n";

    //Taking File Name and Character As Input From User 
    cout<<"Enter File Name : ";
    scanf("%[^'\n']s",&arr);

    cout<<"Enter Character You Want To Count Frequency of : ";
    cin>>ch;

    //Creating Object of FileIO Class
    FileIO *fobj = new FileIO();

    //Call To Behaviour of Class
    iret = fobj->CountChar(arr,ch);

    //Printing Count of Entered Character
    cout<<"\nCount of Entered Charater From File is : "<<iret;
    
    //Deallocating Memory of Object
    delete(fobj);
    fobj = NULL;

    return 0;
}