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
        ~Array() 
        {
            delete this->arr;
            cout<<"Inside Destructor\n";
        }

    T AddN() 
    {
        int i = 0;
        T Sum = 0;

        for(i = 0;i < this->isize;i++) 
        {
            Sum = Sum + this->arr[i];
        }

        return Sum;
    }
};

int main() 
{
    int isum = 0;
    float fsum = 0.0f;

    int iarr[] = {10,20,30,40,50};
    float farr[] = {10.0,3.7,9.8,8.7,10.234};

    cout<<"Jay Ganesh....\n";

    Array<int> *aobj = new Array<int>(iarr,5);
    isum = aobj->AddN();
    cout<<"Addition is : "<<isum<<"\n";

    Array<float> *aobj2 = new Array<float>(farr,5);
    fsum = aobj2->AddN();
    cout<<"Addition is : "<<fsum<<"\n";

    delete aobj;
    delete aobj2;

    return 0;
}