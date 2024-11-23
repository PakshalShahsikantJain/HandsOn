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
    
    T MinN() 
    {
        int i = 0;
        T Min = 0;

        Min = this->arr[0];
        for(i = 0;i < this->isize;i++)
        {
            if(this->arr[i] < Min)
            {
                Min = this->arr[i];
            }
        }

        return Min;
    }
};

int main() 
{
    int iret = 0;
    float fret = 0.0f;
    int iarr[] = {10,20,50,40,30};
    float farr[] = {10.0,3.7,9.8,8.7};

    cout<<"Jay Ganesh....\n";

    Array<int> *aobj = new Array<int>(iarr,5);
    Array<float> *aobj2 = new Array<float>(farr,4);

    iret = aobj->MinN();
    cout<<"Min number from array is : "<<iret;

    fret = aobj2->MinN();
    printf("\nSmall number from array is : %.2f\n",fret);

    delete aobj;
    delete aobj2;

    return 0;
}