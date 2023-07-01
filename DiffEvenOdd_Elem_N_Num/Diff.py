"""
    Author : Pakshal Shashikant Jain 
    Date : 27/06/2023
    Program : Accept N numbers from user and return difference between frequency of
              even number and odd numbers.
              Input : N : 7
                      Elements : 85 66 3 80 93 88 90

              Output : 1 (4 -3)

"""

###################################################################################################################################################

#Class Declaration
class Difference :
    #Characteristics of Class
    i = 0;
    isize = 0;
    arr = [];

    #Constructor of Class
    def __init__(self) :
        self.i = 0;
        self.isize = 0;
        self.arr = [];

    #Behaviour of Class To Take Input From User
    def accept(self) :
        No = 0;

        #Taking input From User
        print("Enter Number of Elements You Want in array : ");
        self.isize = int(input());

        #Inserting Elements in array
        print("Enter Elements in array : ");
        for self.i in range(self.isize) :
            print("Enter Element Number : ",self.i + 1);
            No = int(input());
            self.arr.append(No);

    #Behaviour of Class To Calculate Difference
    def Diff(self) :
        icntEven = 0;
        icntOdd = 0;
        diff = 0;

        #Logic To Calculate Difference
        for self.i in range(self.isize) :
            if((self.arr[self.i] % 2) == 0) :
                icntEven = icntEven + 1;
            else :
                icntOdd = icntOdd + 1;
        
        diff = icntEven - icntOdd;

        return diff;

#######################################################################################################################################################

#Main Function
def main() :
    iret = 0;

    print("Jay Ganesh....");

    #Creating object of Difference
    dobj = Difference();

    #Call To Behaviours of Class
    dobj.accept();
    iret = dobj.Diff();

    #Printing Difference Calculated
    print("Difference Between Frequency of Even and Odd Elements is : ",iret);

########################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To main Function
    main();