import numpy as np 

def CheckIdentity(arr,irow,icol) :
    flag = True;
    
    for i in range(irow) :
        for j in range(icol) :
            if(i == j) :
                if(arr[i][j] != 1) :
                    flag = False;
            else :
                if(arr[i][j] != 0) :
                    flag = False;
    
    return flag;

def main() :
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

    print("Enter element in matrix : ");
    for i in range(irow) :
        print("---Enter element of row %d---"%(i + 1));
        for j in range(icol) :
            print("Enter element no %d : "%(j + 1),end = "");
            arr[i][j] = int(input());        

    print("Elements of matrix are : ");
    for i in range(irow) :
        for j in range(icol) :
            print("%d"%arr[i][j],end="\t");
        print();

    bret = CheckIdentity(arr,irow,icol);
    
    if(bret == True) :
        print("Entered Matrix is identity matrix");
    else :
        print("Entered Matrix is not a identity matrix");

if __name__ == "__main__" :
    main();