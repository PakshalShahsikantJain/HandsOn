"""
    Author : Pakshal Shashikant Jain 
    Date : 07/06/2023
    Program :  Accept N numbers from user and return difference between summation
               of even elements and summation of odd elements.
               Input : N : 6
               Elements : 85 66 3 80 93 88
               Output : 53 (234 - 181) 
"""

################################################################################################################################################

#Class Declaration
class EvenOdd :
    isize = 0;
    arr = [];

    #Constructor of Class
    def __init__(self) :
        self.isize = 0;
        self.arr = [0];
    
    #Behaviour of Class To Take Value From User
    def accept(self) :
        i = 0;
        No = 0;

        #Taking Input From User
        print("Enter Number of Elements You Want in Array : ");
        self.isize = int(input());

        #Inserting Value in Array 
        print("Enter Elements in array");
        for i in range(self.isize) :
            print("Enter Element Number : %d"%(i + 1));
            No = int(input());

            self.arr.append(No);
        
    #Behaviour of Classs To Calculate Difference 
    def Diff(self) :
        i = 0;
        diff = 0;
        SumEven = 0;
        SumOdd = 0;

        #Logic To Calculate Difference 
        for i in range(self.isize + 1) :
            if((self.arr[i] % 2) == 0) :
                SumEven = SumEven + self.arr[i];
            else :
                SumOdd = SumOdd + self.arr[i];
        
        diff = SumEven - SumOdd;

        return diff;

######################################################################################################################################################

#Main Function
def main() :
    iret = 0;

    print("Jay Ganesh.....");

    #Creating Object of Even Odd Class
    eobj = EvenOdd();

    #Calls To Behaviours of Class
    eobj.accept();
    iret = eobj.Diff();

    #Printing Difference Calculated
    print("Difference Between Even and Odd Elements is : %d"%iret);

#####################################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();