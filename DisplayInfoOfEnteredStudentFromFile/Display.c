/*
    Author : Pakshal Shashikant Jain
    Date : 29/07/2024
    Program : Write a program which accept file name which contains information of
              student as well as accept name of student and dsplay only information of
              that student.
*/

//Required Libraries and Imports
#include "Header.h"

//Structure of Informations of Student
struct Student 
{
    int RollNo;
    char sname[50];
    int Marks;
};

//Function to write data into the file
void FileWrite(char *fname) 
{
    int fd = 0;
    int i = 0;
    int ino = 0;
    int iret = 0;

    printf("--------Writing Data into the File------------\n");

    //Opening file in write mode only
    fd = open(fname,O_WRONLY,0777);

    //creating object of student structure
    struct Student sobj;

    if(fd == -1)
    {
        printf("Unable to Open File \n");

        return;
    }
    else 
    {
        printf("File Successfully Opened with file Descriptor : %d \n",fd);
    }

    //Taking Input From User
    printf("Enter Number of Students : ");
    scanf("%d",&ino);

    //Taking Students information from user
    for(i = 0;i < ino;i++)
    {
        printf("-------Enter Details of %d Student---------\n",(i + 1));
        printf("Enter Name of Student : ");
        scanf(" %[^'\n']s",sobj.sname);

        printf("Enter RollNo of Student : ");
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
            printf("%d Bytes of Data Successfully Written into the file \n",iret);
        }
    }

    if(iret == -1)
    {
        return;
    }

    //closing file after performing operations
    close(fd);
}

//Function to read data from file
void FileRead(char *fname,char *name) 
{
    int fd = 0;
    int iret = 0;
    char value[50] = {'\0'};
    BOOL bret = FALSE;

    struct Student sobj;

    printf("---------Reading Data From File-----------\n");

    //opening file in read mode only 
    fd = open(fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open File in Read Mode \n");

        return;
    }
    else 
    {
        printf("File Successfully Opened in Read Mode with File Descriptor : %d \n",fd);      
    }

    //Reading data from file
    while((iret = read(fd,&sobj,sizeof(sobj))) != 0) 
    {
        if(iret == -1)
        {
            break;
        }


        //Displaying Information of Entered Student 
        bret = StrCmpX(sobj.sname,name);

        if(bret == TRUE)
        {
            break;
        }
    }

    if(iret == -1)
    {
        return;
    }

    if(bret == TRUE)
    {
        printf("Name of Student : %s\n",sobj.sname);
        printf("RollNo of Student : %d\n",sobj.RollNo);    
        printf("Marks of Student : %d\n",sobj.Marks);
    }
    else 
    {
        printf("Unable to Read Data From File");
        return;
    }

    //closing file after performing operations
    close(fd);
}

int main() 
{
    char fname[50] = {'\0'};
    char name[50] = {'\0'};

    printf("Jay Ganesh...\n");

    printf("Enter File Name : ");
    scanf("%[^'\n']s",&fname);

    FileWrite(fname);
 
    printf("Enter Name You Want to Display Information of : ");
    scanf(" %[^'\n']s",&name);
    
    FileRead(fname,name);

    return 0;
}