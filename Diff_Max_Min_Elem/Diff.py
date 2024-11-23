"""
    Author : Pakshal Shashikant Jain 
    Date : 16/07/2023
    Program : Accept N numbers from user and return the difference between largest
              and smallest number.
              Input : N : 6
                      Elements : 85 66 3 66 93 88
              Output : 90 (93 -3) 
"""

#####################################################################################################################################################

#Class Declaration
class Difference :
    #Characteristics of Class
    isize = 0;
    arr = [];
    i = 0;

    #constructor of Class
    def __init__(self) :
        self.isize = 0;
        self.arr = [];
        self.i = 0;
    
    #Behaviour of Class To Take input from user
    def Accept(self) :
        No = 0;

        #Taking input from user
        print("Enter Number of Elements You Want in array");
        self.isize = int(input());
        
        if(self.isize < 0) :
            self.isize = -self.isize;

        #Inserting Elements in array 
        print("Enter Element in array : ");
        for self.i in range(self.isize) :
            print("Enter Element Number : ",self.i + 1);
            No = int(input());

            self.arr.append(No);

    #Behaviour of Class To Find Difference
    def Diff(self) :
        imax = 0;
        imin = 0;
        idiff = 0;

        #Logic To find Difference
        imax = self.arr[0];
        imin = self.arr[0];
        for self.i in range(self.isize) :
            if(self.arr[self.i] > imax) :
                imax = self.arr[self.i];
            elif(self.arr[self.i] < imin) :
                imin = self.arr[self.i];
        
        idiff = imax - imin;

        return idiff;

#Main function
def main() :
    iret = 0;

    print("Jay Ganesh....");

    #Creating object of Difference Class
    dobj = Difference();

    #Call To behaviours of Class
    dobj.Accept();
    iret = dobj.Diff();

    #Printing Difference Calculated
    print("Difference Between Max and min Element is :",iret);

############################################################################################################################################################

#Call Back Method To Call Main function
if __name__ == "__main__" :
    #Call To main function
    main();