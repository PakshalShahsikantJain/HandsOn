/*
    Author : Pakshal Shashikant Jain  
    Date : 01/08/2024
    Program : Write a program which accept file name which contains information of
              student and display the average marks of students.
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
using namespace std;
#include<iostream>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Structure to Store Informations of Students into the File 
struct Student 
{
    int RollNo;
    char Sname[50];
    int Marks;
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Start of Class FileIO
class FileIO 
{
    private : //Access Specifier
        char *fname; //Characteristics of Class
    public : //Access Specifier 
        FileIO(char *name)  //Constructor of Class
        {
            this->fname = name;
        }

    //Behaviour of Class to write student information into the file 
    void FileWrite() 
    {
        int fd = 0;
        int i = 0;
        int ino = 0;
        int iret = 0;

        //creating object of Structure 
        struct Student sobj;

        //Opening File in Write mode only 
        fd = open(this->fname,O_WRONLY);
        
        if(fd == -1)
        {
            printf("Unable to open file in write mode \n");
            return;
        }
        else 
        {
            printf("File Successfully Opened in write mode with file Descriptor : %d \n",fd);
        }   

        printf("-----------Writing Students Information into the file-------------\n");

        //Taking Input from user
        printf("Enter Number of Students : ");
        scanf("%d",&ino);

        //Taking Details of student as input from user 
        for(i = 0;i < ino;i++)
        {
            printf("----------Enter Details of %d Student : ---------\n",(i + 1));
            printf("Enter Name of Student : ");
            scanf(" %[^'\n']s",&sobj.Sname);

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
                printf("%d Bytes of Student Data Successfully Written into The File \n",iret);
            }
        }

        if(iret == -1)
        {
            printf("Unable to write data into the file");
            return;
        }

        //Closing file after performing operations 
        close(fd);
    }

    //Behaviour of Class To Read student information from the file 
    int FileRead() 
    {
        int fd = 0;
        int iret = 0;
        int isum = 0;
        int avg = 0;
        int icnt = 0;

        //Creating object of student structure 
        struct Student sobj;


        //opening  file in read mode 
        fd = open(this->fname,O_RDONLY);

        if(fd == -1)
        {
            printf("Unable to Open File in Read Mode\n");
            return -1;
        }
        else 
        {
            printf("File Successfully Opened in Read Mode with file descriptor : %d \n",fd);
        }
        
        cout<<"--------------------Reading Data From File --------------------------------\n";

        //Reading the data 
        while((iret = read(fd,&sobj,sizeof(sobj))) != 0) 
        {
            if(iret == -1)
            {
                break;
            }

            //Adding all Marks of all Students 
            isum = isum + sobj.Marks;
            icnt++;
        }

        //Calculating average of all marks of all students
        avg = isum / icnt;

        if(iret == -1)
        {
            printf("Unable to Read Data From File : ",iret);
            return -1;
        }

        //closing file after performing operations
        close(fd);

        return avg;
    }
};//End of class 

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main() 
{
    char fname[50] = {'\0'};
    int iret = 0;

    cout<<"Jay Ganesh.....\n";

    //Taking file name as input from user 
    cout<<"Enter File Name : ";
    scanf("%s",&fname);
    
    //Creating object of FileIO Class
    FileIO *fobj = new FileIO(fname);
    
    //Call TO Behaviours of Class 
    fobj->FileWrite();
    iret = fobj->FileRead();
    cout<<"Average Marks of all Student is : "<<iret<<"\n";

    //Deallocating Memory of object    
    free(fobj);

    return 0;
}