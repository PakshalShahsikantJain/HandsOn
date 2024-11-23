//Importing Required libraries from Header.h file
#include "Header.h"

//Function To find student having min marks 
int FindMinMarks(char *fname) 
{
    int MinMarks = 0;
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

    MinMarks = sobj.Marks;

    while((iret = read(fd,&sobj,sizeof(sobj))) != 0)
    {
        if(iret == -1)
        {
            break;
        }

        //Finding min marks
        if(sobj.Marks < MinMarks)
        {
            MinMarks = sobj.Marks;
        }
    }

    if(iret == -1)
    {
        printf("Unable to Find Min Marks from the File\n");
        return -1;
    }

    //closing file after performing operations
    free(fname);
    close(fd);

    return MinMarks;
}