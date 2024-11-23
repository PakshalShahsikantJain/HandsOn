#include<iostream>
using namespace std;

template <class T>
class Max 
{
    private :
        T ino1;
        T ino2;
        T ino3;

    public :
        Max(T value1,T value2,T value3) 
        {
            this->ino1 = value1;
            this->ino2 = value2;
            this->ino3 = value3;
        }

    T Find() 
    {
        T max;

        if((this->ino1 > this->ino2)&&(this->ino1 > this->ino3))
        {
            max = this->ino1;
        }
        else if((this->ino2 > this->ino1)&&(this->ino2 > this->ino3))
        {
            max = this->ino2;
        }
        else 
        {                                           
            max = this->ino3;
        }

        return max;
    }
};

int main() 
{
    int iret = 0;
    float fret = 0.0f;
    char cret = '\0';

    cout<<"Jay Ganesh....\n";

    Max<int> * mobj = new Max<int>(10,30,40);
    iret = mobj->Find();
    cout<<"Largest number is : "<<iret<<"\n";

    Max<float> * mobj2 = new Max<float>(30.4,20.7,20.6);
    fret = mobj2->Find();
    cout<<"Largest number is : "<<fret;

    Max<char> * mobj3 = new Max<char>('G','E','F');
    cret = mobj3->Find();
    cout<<"\nLargest Character is : "<<cret;

    return 0;
}