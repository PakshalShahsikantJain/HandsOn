/*
    Author : Pakshal Shashikant Jain
    Date : 29/07/2024
    Program : Write a program which accept file name which contains information of
              student as well as accept name of student and dsplay only information of
              that student.
*/

//Required Libraries 
using namespace std;
#include<iostream>
#include "Header.h"

//structure to store students information
struct Student
{
    int RollNo;
    char sname[50];
    int Marks;
};

//Start of Class
class FileIO
{
    private :  //Access Specifier
        char *fname; //characteristics of class
 
    public : //Access Specifier
        FileIO(char *path)  //consturctor of class
        {
            this->fname = path;
        }
    
    //Behaviour of class to write data into the file 
    void FileWrite()
    {
        int fd = 0;
        int ino = 0;
        int i = 0;
        int iret = 0;

        //creting object of student structure 
        struct Student sobj;

        printf("--------------Writing Student Information into the file---------------\n");
        fd = open(this->fname,O_WRONLY);

        if(fd == -1)
        {
            printf("Unable to open file");

            return;
        }
        else 
        {
            printf("File Successfully opened with file Descriptor : %d \n",fd);
        }

        //taking input from the user 
        printf("Enter Number of Students : ");
        scanf("%d",&ino);

        for(i = 0;i < ino;i++)
        {
            printf("-----Enter Details of %d Student-----\n",(i + 1));
            printf("Enter Name of Student : ");
            scanf(" %[^'\n']s",&sobj.sname);

            printf("Enter Roll No of Student : ");
            scanf("%d",&sobj.RollNo);

            printf("Enter Marks of Student : ");
            scanf("%d",&sobj.Marks);

            iret = write(fd,&sobj,sizeof(sobj));

            if(iret == -1)
            {
                break;
            }
            else 
            {
                printf("%d Bytes of Data Successfully Written into the File \n",iret);
            }
        }

        if(iret == -1)
        {
            return;
        }

        close(fd);
    }  

    //Behaviour of class to read data from the file 
    void FileRead(char *name) 
    {
        int fd = open(this->fname,O_RDONLY);
        BOOL bret = FALSE;
        int iret = 0;

        struct Student sobj;

        printf("--------------Reading Student Information From the file---------------\n");
        if(fd == -1)
        {
            printf("Unable to open File in Read Mode");

            return;
        }
        else 
        {
            printf("File Successfully Opened with file Descriptor : %d \n",fd);
        }

        //Reading data from the file according the condition 
        while((iret = read(fd,&sobj,sizeof(sobj))) != 0)
        {
            if(iret == -1)
            {
                break;
            }

            bret = StrCmpX(sobj.sname,name);

            if(bret == TRUE)
            {
                break;
            }
        }

        if(iret == -1)
        {
            printf("Unable to read Data From File");
            return;
        }

        if(bret == TRUE)
        {
            cout<<"Name of Student : "<<sobj.sname<<"\n";
            cout<<"RollNo of Student : "<<sobj.RollNo<<"\n";
            cout<<"Marks of Student : "<<sobj.Marks<<"\n";
        }
        else 
        {
            cout<<"Unable to print data"<<"\n";
            return;
        }

        close(fd);
    }
}; //End of class

//Main function
int main()
{
    char fname[50] = {'\0'};
    char sname[50] = {'\0'};

    printf("Jay Ganesh....\n");

    //Creating object of FileIO class
    FileIO *fobj = new FileIO(fname);

    //Taking input from the user 
    printf("Enter File Name : ");
    scanf("%[^'\n']s",&fname);

    //call to Behaviours of class
    fobj->FileWrite();

    printf("Enter Student Name : ");
    scanf(" %[^'\n']s",&sname);

    //call to Behaviour of class
    fobj->FileRead(sname);

    free(fobj);
    
    return 0;
}