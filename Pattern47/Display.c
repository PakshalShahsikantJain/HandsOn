#include<stdio.h>

void Display(int ino) 
{
    int i = 0;
    int j = 0;
    char ch = 'A';

    for(i = 0;i < ino;i++)
    {
        for(j = 0;j < (ino * 2) - 1;j++)
        {
            if (j < ino - i - 1) 
            {
                printf(" \t");
            } 
            else if (j < ino) 
            {
                // printf(" \t");
                // printf("%d%d\t",i,j);
                printf("%c\t",ch);
                ch++;            
            } 
            else if (j < ino + i) 
            {
                ch -= 2;
                // printf("%d%d\t",i,j);
                printf("%c\t",ch);
                ch++;
            }
        }
        ch = 'A';
        printf("\n");
    }
}

int main() 
{
    int ino = 0;

    printf("Jay Ganesh...\n");

    printf("Enter one number : \n");
    scanf("%d",&ino);
    
    Display(ino);

    return 0;
}