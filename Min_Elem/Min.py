"""
    Author : Pakshal Shashikant Jain 
    Date : 16/07/2023
    Program : Accept N numbers from user and return the Smallest number.
              Input : N : 6
                      Elements : 85 66 3 66 93 88
              Output : 3 
"""

############################################################################################################################################################

#Class Declaration
class Minimum :
    #Characteristics of Class
    i = 0;
    arr = [];
    isize = 0;

    #Constructor of Class
    def __init__(self) :
        self.i = 0;
        self.arr = [];
        self.isize = 0;
    
    #Behaviour of Class To Take Input from user
    def Accept(self) :
        No = 0;

        #Taking input from user
        print("Enter Number of Elements You Want in array");
        self.isize = int(input());

        #Inserting Elements in array 
        print("Enter Elements in array : ");
        for self.i in range(self.isize) :
            print("Enter Element Number : ",self.i + 1);
            No = int(input());

    #Behaviour of Class to find Minimum Element From Entered N Numbers
    def Min(self) :
        imin = 0;

        #Logic
        imin = self.arr[0];
        for self.i in range(self.isize) :
            if(self.arr[i] < imin) :
                imin = self.arr[i];
        
        return imin;

##########################################################################################################################################################

#Main function
def main() :
    iret = 0;

    print("Jay Ganesh.....");

    #Creating object of Minimum Class
    mobj = Minimum();

    #Call To Behaviour of Class
    mobj.Accept();
    iret = mobj.Min();

    #Printing Smallest Element From Entered N Numbers
    print("Printing Smallest Element from Entered Number : ",iret);

###############################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main function
    main();