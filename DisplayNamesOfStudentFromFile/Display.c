/*
    Author : Pakshal Shashikant Jain  
    Date : 27/07/2024
    Program : Write a program which accept file name which contains information of
              student and Display only names of students.
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
    char Sname[50];
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

    printf("---------------Writing Student Information Into The File-------------------\n");
    
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

    //Taking Input From User
    printf("Enter Number of Students : \n");
    scanf("%d",&ino);

    //Writing Data into the file
    for(i = 0;i < ino;i++)
    {
        printf("------Enter Informations %d Student : ---------\n",(i + 1));
        
        printf("Enter Roll No Student : ");
        scanf("%d",&sobj.RollNo);

        printf("Enter Marks of Student : ");
        scanf("%d",&sobj.Marks);

        printf("Enter Name of Student : ");
        scanf(" %[^'\n']s",&sobj.Sname);

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
void ReadFile(char *fname) 
{
    int iret = 0;
    int fd = 0;
    int i = 0;

    struct Student sobj;

    printf("-----------------Reading Student Information From File-----------------\n");
    //Opening File in Read mode only
    fd = open(fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open File \n");
        return;
    }
    else 
    {
        printf("File Successfully Opened with File Descriptor : %d \n",fd);
    }

    //Reading Data From File
    printf("Displaying Only Names of Students from File : \n");
    while((iret = read(fd,&sobj,sizeof(sobj))) != 0)
    {
        if(iret == -1)
        {
            break;
        }

        printf("Name of %d Student is : %s\n",(i + 1),sobj.Sname);

        i++;
    }

    if(iret == -1)
    {
        printf("Unable to Read Data From File");
        return;
    }

    close(fd);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    char fname[50] = {'\0'};

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