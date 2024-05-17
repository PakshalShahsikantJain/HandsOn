/*
    Author : Pakshal Shashikant Jain 
    Date : 17/05/2024
    Program : Write application which accept file name from user and create that file.
              
              Input : Demo.txt
              Output : File created successfully. 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Create File
void CreateFile(char fname[]) 
{
    int fd = 0;

    //Creating File
    fd = creat(fname,0x777);

    if(fd == -1)
    {
        printf("Unable To Create File \n");
    }
    else 
    {
        printf("File Successfully Create With File Descriptor : %d",fd);
    }

    close(fd);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char fname[40] = {'\0'};

    printf("Jay Ganesh....\n");

    //Taking File Name From User
    printf("Enter File Name You Want To Create: ");
    scanf("%[^'\n']s",&fname);

    //Call To CreateFile Function
    CreateFile(fname);

    return 0;
}