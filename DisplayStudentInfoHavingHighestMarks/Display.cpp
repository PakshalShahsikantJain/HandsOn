/*
    Author : Pakshal Shashikant Jain
    Date : 31/07/2023
    Program : Write a program which accept file name which contains information of
              student and display the information of student having highest marks.
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Importing Required libraries from Header.h file
#include "Header.h"
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class FileIO 
{
    public :
        FileIO()
        {
            cout<<"Inside constructor"<<"\n";
        }

    //Function to write data into the file
    void FileWrite(char *fname) 
    {
        int fd = 0;
        int no = 0;
        int i = 0;
        int iret = 0;

        //creating object of student structure
        struct Student sobj;

        //Opening file in Write mode
        fd = open(fname,O_WRONLY,0777);

        if(fd == -1)
        {
            printf("Unable to open file in write mode");
            return;
        }
        else 
        {
            printf("File Successfully Opened with file Descriptor : %d \n",fd);
        }

        printf("-------------Writing data into the File--------------\n");

        //Taking input from user
        printf("Enter Number of Students : ");
        scanf("%d",&no);

        for(i = 0;i < no;i++)
        {
            printf("----Enter Details of %d Student----\n",(i + 1));
            printf("Enter Name : ");
            scanf(" %[^'\n']s",&sobj.sname);

            printf("Enter RollNo : ");
            scanf("%d",&sobj.RollNo);

            printf("Enter Marks of Student : ");
            scanf("%d",&sobj.Marks);

            //Writing data into the file
            iret = write(fd,&sobj,sizeof(sobj));

            if(iret == -1)
            {
                break;
            }
            else 
            {
                printf("%d Bytes of Successfully Written into the file \n",iret);
            }
        }

        if(iret == -1)
        {
            printf("Unable to write data into the file");
            return;
        }

        //closing file after performing operations
        close(fd);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Function to read data from the file
    void FileRead(char *fname) 
    {
        int fd = 0;
        int i = 0;
        int iret = 0;
        int Max = 0;

        //creating object of student structure 
        struct Student sobj;

        //Opening file in read mode only
        fd = open(fname,O_RDONLY,0777);

        if(fd == -1)
        {
            printf("Unable to Open File in Read mode\n");
            return;
        }
        else 
        {
            printf("File Successfully Opened with file descriptor : %d \n",fd);
        }

        printf("---------Reading Data from the file-----------\n");

        //Finding student having max marks
        Max = FindMaxMarks(fname);  

        //Reading info of student having max marks
        printf("Details of Student having max marks are as follows : \n");
        while((iret = read(fd,&sobj,sizeof(sobj))) != 0)
        {
            if(iret == -1)
            {
                break;
            }

            if(sobj.Marks == Max)
            {
                printf("Name of Student %s\n",sobj.sname);
                printf("RollNo of Student %d\n",sobj.RollNo);
                printf("Marks of Student %d\n",sobj.Marks);
            }
        }

        if(iret == -1)
        {
            printf("Unable to read data from the file");
            return;
        }

        //closing file after performing operations
        close(fd);  
    }
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Entry point function
int main()
{
    char fname[50] = {'\0'};

    printf("Jay Ganesh.....\n");

    FileIO fobj;

    //Taking file name as input from user
    printf("Enter File name : ");
    scanf("%s",&fname);

    //Call to FileWrite Function
    fobj.FileWrite(fname);

    //Call to FileRead Function
    fobj.FileRead(fname);
    
    return 0;
}   