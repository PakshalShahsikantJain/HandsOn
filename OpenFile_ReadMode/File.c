/*
    Author : Pakshal Shashikant Jain 
    Date : 16/05/2024
    Program : Write application which accept file name from user and open that file in read mode.

              Input : Demo.txt
              Output : File opened successfully. 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Open Entered File In ReadMode Only
void OpenFile(char name[])
{
    int fd = 0;

    //Opening File In Read Mode Only
    fd = open(name,O_RDONLY);

    //Handling Condition if Unable To Open File
    if(fd == -1)
    {
        printf("Unable To Open File\n");
        return;
    }
    else    //Handling Condition if File is Successfully Opened 
    {
        printf("File Opened With File Descriptor : %d",fd);
    }

    //Closing File
    close(fd);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char name[40] = {'\0'};

    printf("Jay Ganesh....\n");
    
    //Taking File Name From User
    printf("Enter File Name : ");
    scanf("%[^'\n']s",&name);

    //Call To OpenFile Function
    OpenFile(name);

    return 0;
}