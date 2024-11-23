/*
    Author : Pakshal Shashikant Jain  
    Date : 01/08/2024
    Program : Write a program which accept file name which contains information of
              student and display the studnt names having even number of marks.
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Structure of Student to Store student information
struct Student 
{
    int RollNo;
    char sname[50];
    int Marks;
};

//Function To Write Student information into  the file
void WriteFile(char *fname) 
{   
    int fd = 0;
    int ino = 0;
    int i = 0;
    int iret = 0;

    //Creating object of Student structure
    struct Student sobj;

    //Opening File in write mode only 
    fd = open(fname,O_WRONLY);

    if(fd == -1)
    {
        printf("Unable to Open File \n");
        
        return;
    }
    else 
    {
        printf("File Successfully Opened with File Descriptor %d \n",fd);
    }

    printf("---------------Writing Student Information Into The File-------------------\n");

    //Taking Input From User
    printf("Enter Number of Students : ");
    scanf("%d",&ino);

    //Writing Data into the file
    for(i = 0;i < ino;i++)
    {
        //Taking Input from user
        printf("------Enter Details of %d Student : ---------\n",(i + 1));
        
        printf("Enter Name of Student : ");
        scanf(" %[^'\n']s",&sobj.sname);

        printf("Enter Roll No Student : ");
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
            printf("%d Bytes of Data Successfully written into file \n",iret);
        }
    }

    if(iret == -1)
    {
        printf("Unable to write Data into File");
        return;
    }

    close(fd);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to read data from file 
int ReadFile(char *fname) 
{
    int i = 0;
    int fd = 0;
    int iret = 0;

    struct Student sobj;

    //Opening File in Read mode only
    fd = open(fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open File \n");
        return -1;
    }
    else 
    {
        printf("File Successfully Opened with File Descriptor : %d \n",fd);
    }

    printf("-----------------Reading Student Information From File-----------------\n");
    
    printf("Printing Deatils of those Students who have Even number of marks :\n");
    //Reading Data From File
    while((iret = read(fd,&sobj,sizeof(sobj))) != 0)
    {
        if(iret == -1)
        {
            break;
        }

        if((sobj.Marks % 2) == 0)
        {
            printf("----Details of %d Student is as Follows----\n",(i + 1));
            printf("Name of Student : %s\n",sobj.sname);
            printf("RollNo of Student : %d\n",sobj.RollNo);
            printf("Marks of Student : %d\n",sobj.Marks);

            i++;
        }
    }

    if(iret == -1)
    {
        printf("Unable to Read Data From File");
        return -1;
    }

    close(fd);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    char fname[50] = {'\0'};
    int iret = 0;

    printf("Jay Ganesh.....\n");

    //Taking File name as input from user 
    printf("Enter File Name : \n");
    scanf("%s",&fname);

    //Call to WriteFile Function
    WriteFile(fname);
    
    //Call To ReadFile Function
    ReadFile(fname);

    return 0;
}