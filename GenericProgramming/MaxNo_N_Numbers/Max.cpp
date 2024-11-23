#include<iostream>
using namespace std;

template <class T>
class Array 
{
    private :
        T *arr;
        int isize;
    public : 
        Array(T *Arr,int value) 
        {
            this->arr = Arr;
            this->isize = value;
        }
    
    T MaxN() 
    {
        int i = 0;
        T Max = 0;

        Max = this->arr[0];
        for(i = 0;i < this->isize;i++)
        {
            if(this->arr[i] > Max)
            {
                Max = this->arr[i];
            }
        }

        return Max;
    }
};

int main() 
{
    int iret = 0;
    int fret = 0.0f;
    int iarr[] = {10,20,50,40,30};
    float farr[] = {10.0,3.7,9.8,8.7};

    cout<<"Jay Ganesh....\n";

    Array<int> *aobj = new Array<int>(iarr,5);
    Array<float> *aobj2 = new Array<float>(farr,4);

    iret = aobj->MaxN();
    cout<<"Max number from array is : "<<iret;

    fret = aobj2->MaxN();
    cout<<"\nMax number from array is : "<<fret;

    return 0;
}