/*
    Author : Pakshal Shashikant Jain 
    Date : 28/05/2024
    Program : Write a program which accepts file name and one count from user and read
              that number of characters from starting position.

              Input : Demo.txt 12
              Output : Display first 12 characters from Demo.txt 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

//Function To Display Entered N Number of Characters From File
void DisplayN(char fname[],int isize) 
{
    int fd = 0;
    char arr[100] = {'\0'};
    int iret = 0;

    //Opening File in Read Mode Only 
    fd = open(fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable To open File");

        return;
    }
    else 
    {
        printf("File Successfully Opened with File Descriptor : %d \n",fd);
    }

    //Reading N Number of Characters From File
    iret = read(fd,arr,isize);
    if(iret == 0)
    {
        printf("Unable To Read File");
        return;
    }

    //Printing Readed Data From File
    printf("Data From File is : \n");
    write(1,arr,iret);

    //Closing File After Reading 
    close(fd);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char fname[40] = {'\0'};
    int ivalue = 0;

    printf("Jay Ganesh.....\n");

    //Taking Input From User
    printf("Enter File Name : ");
    scanf("%[^'\n']s",&fname);

    printf("Enter Number of Characters You Want To Read From File : ");
    scanf(" %d",&ivalue);

    //Call To DisplayN Function
    DisplayN(fname,ivalue);

    return 0;
}