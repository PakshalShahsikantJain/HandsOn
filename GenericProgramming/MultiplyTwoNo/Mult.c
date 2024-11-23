#include<stdio.h>

template<class T>

T Mult(T no1,T no2) 
{
    T ans = 0;

    ans = no1 * no2;

    return ans; 
}

int main() 
{
    T ino = 0
    printf("Jay Ganesh....\n");

    int iret = Mult(10,20);
    printf("%d\n",iret);

    float fret = Mult(20.5,30.5);
    printf("%f\n",fret);

    return 0;
}