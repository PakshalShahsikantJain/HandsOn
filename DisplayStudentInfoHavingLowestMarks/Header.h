//Required Libraries
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

//Structure to store student information
struct Student 
{
    int RollNo;
    char sname[50];
    int Marks;
};

int FindMinMarks(char *); //Protoype of FindMinMarks Function