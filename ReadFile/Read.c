/*
    Author : Pakshal Shashikant Jain 
    Date : 19/05/2024
    Program : Write application which accept file name from user and read all data from that file
              and display contents on screen.
            
              Input : Demo.txt
              Output : Display all data of file. 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Read File
int ReadFile(char fname[])
{
    int fd = open(fname,O_RDONLY | O_CREAT);
    int ret = 0;
    char arr[40] = {'\0'};
    int i = 0;
    
    //Logic To Read Whole File
    if(fd == -1)
    {
        printf("Unable To Create file Or to Open File");
    }
    else 
    {
        printf("File Successfully Created or Opened With File Descriptor : %d\n",fd);
    }
    
    printf("Data From File is : \n");
    //Reading Whole File
    while((ret = read(fd,arr,sizeof(fd))) != 0)
    {
        write(1,arr,ret);  
    }

    //Getting Size of File
    ret = lseek(fd,0,SEEK_END);
    
    //Closing Opened File
    close(fd);

    //Returing Size of File
    return ret;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
int main()
{
    char name[40] = {'\0'};
    int ret = 0;

    printf("Jay Ganesh....\n");

    //Taking File Name as Input From User
    printf("Enter File Name : \n");
    scanf("%[^'\n']s",&name);

    //Call To Read File Function
    ret = ReadFile(name);

    //Printing Size of File
    printf("\nSize of File is : %d bytes",ret);

    return 0;
}