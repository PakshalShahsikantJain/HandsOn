#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

struct Student 
{
    int RollNo;
    char sname[50];
    int Marks;
};

int FindMaxMarks(char *);