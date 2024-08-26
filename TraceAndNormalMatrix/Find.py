import numpy as np;
import math;

def TraceOfMatrix(arr,irow,icol) :
    i = 0;
    j = 0;
    isum = 0;

    for i in range(irow) :
        for j in range(icol) :
            if(i == j) :
                isum = isum + arr[i][j];

    return isum;

def NormalOfMatrix(arr,irow,icol) :
    i = 0;
    j = 0;
    isum = 0;
    sqrt = 0;

    for i in range(irow) :
        for j in range(icol) :
            isum = isum + arr[i][j];

    sqrt = math.sqrt(isum);

    return sqrt;

def main() :
    i = 0;
    j = 0;
    irow = 0;
    icol = 0;
    arr = [[]];
    iret = 0;
    
    print("Jay Ganesh....");
    print("Enter number of rows : ");
    irow = int(input());

    print("Enter number of cols : ");
    icol = int(input());

    arr = np.zeros((irow,icol));
    print("Enter elements in matrix");
    for i in range(irow) :
        print("----Enter elements of %d row----"%(i + 1));
        for j in range(icol) :
            print("Enter element no %d : "%(j + 1),end="");
            arr[i][j] = int(input());

    print("Elements of matrix are : ");
    for i in range(irow) :
        for j in range(icol) :
            print("%d"%arr[i][j],end = "\t");
        print();

    iret = TraceOfMatrix(arr,irow,icol);
    print("Trace of matrix is : %d"%iret);

    iret = NormalOfMatrix(arr,irow,icol);
    print("Normal of matrix is : %.4f"%iret);

if __name__ == "__main__" :
    main();