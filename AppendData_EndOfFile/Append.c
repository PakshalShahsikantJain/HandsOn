/*
    Author : Pakshal Shashikant Jain 
    Date : 20/05/2024
    Program : Write application which accept file name from user and one string from user. Write
              that string at the end of file.

              Input : Demo.txt
                      Hello World

              Output : Write Hello World at the end of Demo.txt file 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Librariess
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Write Data At The End of File
void Append(char fname[],char arr[]) 
{
    int fd = 0;
    int ret = 0;
    int isize = 0;

    //Opening File in Write Mode Only
    fd = open(fname,O_WRONLY);
    if(fd == -1)
    {
        printf("Unable To Open File. \n");

        return;
    }
    else 
    {
        printf("File Opened With File Descriptor : %d \n",fd);
    }

    //Changing Cursor Position To End of The File
    lseek(fd,0,SEEK_END);

    //Calculating Size of Data That to be Written in File 
    while(arr[isize] != '\0')
    {
        isize++;
    }

    //Writing Data in File
    ret = write(fd,arr,isize);
    if(ret == -1)
    {
        printf("Unable To Write Data in File\n");
    }
    else
    {
        printf("Data Has Been Successfully written in File\n");
    }

    //Closing File
    close(fd);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char fname[40] = {'\0'};
    char data[40] = {'\0'};

    printf("Jay Ganesh.....\n");
    
    //Taking File Name as Input From User
    printf("Enter File Name : ");
    scanf("%[^'\n']s",&fname);

    //Taking Data From User To Write in File
    printf("Enter Data You Want To Enter in End of Given File : ");
    scanf(" %[^'\n']s",&data);

    //Call To Append Function
    Append(fname,data);

    return 0;
}