//Importing Required libraries from Header.h file
#include "Header.h"

//Function To find student having max marks 
int FindMaxMarks(char *fname) 
{
    int MaxMarks = 0;
    int iret = 0;
    int fd = 0;

    //Creating object of student structure
    struct Student sobj;

    //opening file in read mode 
    fd = open(fname,O_RDONLY,0777);

    if(fd == -1)
    {
        printf("Unable to open file in write mode");
        return -1;
    }
    else 
    {
        printf("File Successfully Opened with file Descriptor : %d \n",fd);
    }

    while((iret = read(fd,&sobj,sizeof(sobj))) != 0)
    {
        if(iret == -1)
        {
            break;
        }

        //Finding max marks
        if(sobj.Marks > MaxMarks)
        {
            MaxMarks = sobj.Marks;
        }
    }

    if(iret == -1)
    {
        printf("Unable to Find Max Marks from the File\n");
        return -1;
    }

    //closing file after performing operations
    free(fname);
    close(fd);

    return MaxMarks;
}