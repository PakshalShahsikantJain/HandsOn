/*
    Author : Pakshal Shashikant Jain 
    Date : 22/07/2024
    Program : Write a program which accept oinformation of students from user and
              write that information into the file and Read that Information From File
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

//Using Structure to store Information of Student in form of Data Structure eg linked list
struct Student
{
    char sname[50];
    int rno;
    int Marks;
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Write Data into file
void FileWrite(char *fname) 
{
    int fd = 0;
    int isize = 0;
    int i = 0;
    struct Student sobj;

    //Opening File in Write Mode only 
    fd = open(fname,O_WRONLY);

    if(fd == -1)
    {
        printf("Unable to Open file");
        return;
    }
    else
    {
        printf("File Successfully Opened With File Descriptor : %d\n",fd);
    }

    //Taking Input from user 
    printf("Enter Number of Students You Want to Enter : \n");
    scanf("%d",&isize);

    for(i = 0;i < isize;i++) 
    {
        printf("Enter Roll No of Student : \n");
        scanf("%d",&sobj.rno);

        printf("Enter Marks of Student : \n");
        scanf("%d",&sobj.Marks);

        printf("Enter Name of Student : \n");
        scanf(" %[^'\n']s",&sobj.sname);

        write(fd,&sobj,sizeof(sobj));
    }

    //Closing File after process is completed
    close(fd);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Read Student Information From File
void FileRead(char *fname) 
{
    int fd = 0;
    int iret = 0;

    //Creating object of Student Structure
    struct Student sobj;

    //Opening File in Read Mode Only 
    fd = open(fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open File");

        return;
    }
    else
    {
        printf("File Successfully Opened With File Descriptor : %d\n",fd);
    }

    //Reading Data From File 
    while((iret = read(fd,&sobj,sizeof(sobj))) != 0) 
    {
        printf("Name of Student : %s\n",sobj.sname);
        printf("RollNo of Student : %d\n",sobj.rno);
        printf("Marks of Student : %d\n",sobj.Marks);
    }

    //Closing File after Performing Operations 
    close(fd);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Entry point function of our code
int main() 
{
    char fname[50] = {'\0'};

    printf("Jay Ganesh.....\n");
    
    //Taking file name as input from user
    printf("Enter File Name : ");
    scanf("%s",fname);

    //Call To FileWrite Function
    FileWrite(fname);
 
    //Call To FileRead Function
    FileRead(fname);
    
    return 0;
}