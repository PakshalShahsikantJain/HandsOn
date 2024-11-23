/* 
    Author : Pakshal Shashikant Jain 
    Date : 30/07/2022
    Program : Write a program which accept file name which contains information of
              student and display names of all students whose length of the name is 6.
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Structure to store student information
struct Student
{
    int RollNo;
    char sname[50];
    int Marks;
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To write data into the file
void FileWrite(char *fname)
{
    int fd = 0;
    int ino = 0;
    int i = 0;
    int iret = 0;

    //creating object of structure 
    struct Student sobj;
    
    //Opening file in write Mode
    fd = open(fname,O_WRONLY,0777);

    if(fd == -1)
    {
        printf("Unable to Open File in write mode \n");

        return;
    }
    else 
    {
        printf("File Successfully Opened in write mode with file descriptor : %d \n",fd);
    }

    printf("------------Writing Student information into the file----------------\n");

    //Taking Input from the user 
    printf("Enter Number of Students : ");
    scanf("%d",&ino);

    for(i = 0;i < ino;i++)
    {
        printf("-------Enter Deatils of %d Student-------:\n",(i + 1));
        printf("Enter Name of Student : ");
        scanf(" %[^'\n']s",&sobj.sname);

        printf("Enter RollNo of Student : ");
        scanf("%d",&sobj.RollNo);

        printf("Enter Marks of Student : ");
        scanf("%d",&sobj.Marks);

        //writing data into the file 
        iret = write(fd,&sobj,sizeof(sobj));

        if(iret == -1)
        {
            break;
        }       
        else 
        {
            printf("%d bytes of Successfully Written into the file : \n",iret);
        }
    }

    if(iret == -1)
    {
        printf("Unable to write data into the file\n");

        return;
    }
    
    //closing while after performing operations
    close(fd);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to read data from the file 
void FileRead(char *fname) 
{
    int fd = 0;
    int iret = 0;
    int i = 0;
    int j = 0;
    int icnt = 0;

    struct Student sobj;

    //Opening file in read mode 
    fd = open(fname,O_RDONLY,0777);

    if(fd == -1)
    {
        printf("Unable to Open File \n");

        return;
    }
    else 
    {
        printf("File Successfully Opened With File Descriptor : %d \n",fd);
    }

    printf("-----------Reading data from the file-------------\n");

    printf("Displaying Names of Students whose length of the name is 6 : \n");

    //reading data from the file
    while((iret = read(fd,&sobj,sizeof(sobj))) != 0)
    {
        i = 0;
        icnt = 0;
        
        if(iret == -1)
        {
            break;
        }

        //Counting name length
        while(sobj.sname[i] != '\0')
        {
            icnt++;
            i++;
        }

        if(icnt == 6)
        {
            printf("Name of %d Student : %s\n",(j + 1),sobj.sname);
            j++;
        }
    } 
    
    if(iret == -1)
    {
        printf("Unable to read data from the file \n");
        return;
    }

    close(fd);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Entry point function
int main() 
{
    char fname[50] = {'\0'};

    printf("Jay Ganesh.....\n");

    //Taking input from the user 
    printf("Enter File Name : ");
    scanf("%[^'\n']s",&fname);

    //Call To FileWrite Function
    FileWrite(fname);

    //Call To FileRead Function
    FileRead(fname);

    return 0;
}