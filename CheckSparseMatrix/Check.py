import numpy as np;

def CheckSparse(arr,irow,icol) :
    i = 0;
    j = 0;
    icnt = 0;
    icnt2 = 0;

    for i in range(irow) :
        for j in range(icol) :
            if(arr[i][j] == 0) :
                icnt = icnt + 1;
            else :
                icnt2 = icnt2 + 1;

    if(icnt > icnt2) :
        return True;
    else :
        return False;

def main() :
    i = 0;
    j = 0;
    irow = 0;
    icol = 0;
    arr = [[]];
    bret = False;

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

    bret = CheckSparse(arr,irow,icol);
    if(bret == True) :
        print("Entered matrix is sparse matrix");
    else :
        print("Entered matrix is not a sparse matrix");

if __name__ == "__main__" :
    main();