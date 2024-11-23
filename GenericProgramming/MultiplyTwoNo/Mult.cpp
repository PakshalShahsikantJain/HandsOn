#include<iostream>
using namespace std;

template <class T>
class Calculator 
{
    private :
        T ino1;
        T ino2;
    public :  
        Calculator(T No1,T No2) 
        {
            this->ino1 = No1;
            this->ino2 = No2;
        }
        ~Calculator() 
        {
            cout<<"Inside Destructor \n";
        }

    T Mult() 
    {
        T ans;

        ans = this->ino1 * this->ino2;

        return ans;
    }
};

int main() 
{
    int iret = 0;
    float iret2 = 0.0;
    char cret = '\0';

    cout<<"Jay Ganesh....\n";
    
    Calculator <int>* cobj = new Calculator<int>(10,20);
    iret = cobj->Mult();
    cout<<"Multplication of two number is : "<<iret<<"\n";

    Calculator <float>* cobj2 = new Calculator<float>(2.5,9.3);
    iret2 = cobj2->Mult();
    printf("Multiplication of two numbers is : %.2f\n",iret2);

    Calculator <char>* cobj3 = new Calculator<char>('A','C');
    cret = cobj3->Mult();
    printf("Multiplication of two numbers is : %c\n",cret);

    delete cobj;
    delete cobj2;
    delete cobj3;
    
    return 0;
}