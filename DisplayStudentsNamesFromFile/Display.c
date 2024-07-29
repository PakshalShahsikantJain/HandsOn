/*
    Author : Pakshal Shashikant Jain 
    Date : 30/07/2023
    Program : Write a program which accept file name which contains information of
              student and display all names of students whose name starts with the
              letter P
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libaries and imports
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Structure to store students information
struct Student 
{
    char sname[50];
    int RollNo;
    int Marks;
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Write data into the file 
void FileWrite(char *fname)
{
    int fd = 0;
    int ino = 0;
    int i = 0;
    int iret = 0;

    //creating object of structure 
    struct Student sobj;

    printf("---------------Writing Student information into the file--------------------\n");
    
    //Oening File in write mode only 
    fd = open(fname,O_WRONLY);

    if(fd == -1)
    {
        return;
    }
    else 
    {
        printf("File Successfully opened with file Descriptor %d \n",fd);
    }

    //Taking Input From User 
    printf("Enter Number of Students : ");
    scanf("%d",&ino);

    for(i = 0;i < ino;i++)
    {
        printf("---------Enter Details of %d Student---------\n",(i + 1));
        
        printf("Enter Name of Student : ");
        scanf(" %[^'\n']s",&sobj.sname);

        printf("Enter RollNo of Student : ");
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
            printf("%d bytes of data successfully written into the file \n",iret);
        }
    }

    if(iret == -1)
    {
        printf("Unable to write data into the file");
        return;
    }

    close(fd);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to read data from the file 
void FileRead(char *fname) 
{
    int fd = 0;
    int iret = 0;
    int i = 0;

    //Reading Data from the file
    printf("-----------Reading Data From File------------\n");
    struct Student sobj;

    //Opening File in read mode only 
    fd = open(fname,O_RDONLY,0777);

    if(fd == -1)
    {
        printf("Unable to Open File in read mode \n");
        return;
    }
    else 
    {
        printf("File Successfully Opened with file Descriptor : %d \n",fd);
    }

    //Reading Data from the file 
    while((iret = read(fd,&sobj,sizeof(sobj))) != 0)
    {
        if(iret == -1)
        {
            break;
        }

        //Printing All Students names whose names starts with P
        if(sobj.sname[0] == 'P')
        {
            printf("Name of %d Student : %s\n",(i + 1),sobj.sname);
            i++;
        }
    }

    //Closing file after Performing Operations 
    close(fd);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char fname[50] = {'\0'};

    printf("Jay Ganesh....\n");

    //Taking File name as input from user
    printf("Enter File Name : ");
    scanf("%[^'\n']s",&fname);

    //Call To Functions 
    FileWrite(fname);
 
    FileRead(fname);

    return 0;
}