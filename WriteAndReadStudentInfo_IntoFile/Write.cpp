/*
    Author : Pakshal Shashiaknt Jain 
    Date : 23/07/2024
    Program :Write a program which accept oinformation of students from user and
             write that information into the file and Read the information From File. 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
#include<unistd.h>
#include<fcntl.h>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Structure To Store Student Info
struct Student
{
    int RollNo;
    char sname[40];
    int Marks;
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//class Declaration
class FileIO 
{
    //Characteristics of Class
    private :
        char *fname;

    public :
        //Constructor of Class
        FileIO(char *name)
        {
            this->fname = name;
        }

    //Behaviour of Class To Write Student Information into File
    void FileWrite() 
    {
        int fd = 0;
        int isize = 0;
        int i = 0;
        int iret = 0;

        //Creating object of Structure of Student
        struct Student sobj;
        
        //Opening File in Write Mode Only 
        fd = open(this->fname,O_WRONLY);

        if(fd == -1) 
        {
            cout<<"Unable to Open file";
            return;
        }    
        else 
        {
            cout<<"File Successfully Opened with File Descriptor : "<<fd<<"\n";
        }

        cout<<"Enter Number of Students : \n";
        cin>>isize; 

        for(i = 0;i < isize;i++)
        {
            printf("Enter Details of %d Student \n",(i+1));
            cout<<"Enter Roll no of Student\n";
            cin>>sobj.RollNo;
            cout<<"Enter Marks of Student \n";
            cin>>sobj.Marks;
            cout<<"Enter Name of Student \n";
            cin>>sobj.sname;

            iret = write(fd,&sobj,sizeof(sobj));
            printf("%d Bytes Successfully written into File\n",iret);
        }

        close(fd);
    }

    //Behaviour of Class To Read Data From File
    void FileRead() 
    {
        int fd = 0;
        int iret = 0;
        
        //Create object of Student Structure
        struct Student sobj;

        //Opening File in Read Mode Only
        fd = open(this->fname,O_RDONLY);
        
        if(fd == -1)
        {
            cout<<"Unable to Open File";
            return;
        }
        else 
        {
            cout<<"File Successfully Opened with File Descriptor : "<<fd<<"\n";
        }

        //Reading Data From File
        cout<<"Students Information From File is as Follow\n";
        while((iret = read(fd,&sobj,sizeof(sobj))) != 0) 
        {
            cout<<"Name of Student is : "<<sobj.sname<<"\n";
            cout<<"Roll No of Student is : "<<sobj.RollNo<<"\n";
            cout<<"Marks of Student is : "<<sobj.Marks<<"\n";
        }

        //Closing File after performing operations
        close(fd);
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    char fname[50] = {'\0'};

    cout<<"Jay Ganesh....\n";

    //Taking Input from User
    cout<<"Enter File Name \n";
    scanf("%s",fname);

    //Creating object of FileIO class
    FileIO *fobj = new FileIO(fname);

    //Call To Behaviour of Class
    fobj->FileWrite();

    //Call To Behaviour of class
    fobj->FileRead();

    return 0;
}