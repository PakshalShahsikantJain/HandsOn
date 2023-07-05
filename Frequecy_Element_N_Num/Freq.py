"""
    Author : Pakshal Shashikant Jain 
    Date : 04/07/2023
    Program : Accept N numbers from user and return frequency of 11 form it.
              Input : N : 6
                      Elements : 85 66 3 15 93 88
              Output : 0

              Input : N : 6
                      Elements : 85 11 3 15 11 111
              Output : 2
"""

##########################################################################################################################################################

#Class Declaration
class Num :

    #Characteristics of Class
    isize = 0;
    i = 0;
    arr = [];

    #Constructor of Class
    def __init__(self) :
        self.isize = 0;
        self.i = 0;
        self.arr = [];

    #Behaviour of Class TO Take Input From user
    def Accept(self) :
        No = 0;

        print("Enter Number of Elements you Want in array : ");
        self.isize = int(input());

        print("Enter Elements in array : ");
        for self.i in range(self.isize) :
            print("Enter Element Number : ",self.i + 1);
            No = int(input());

            self.arr.append(No);

    #Behaviour of Class To Count Frequency 
    def count(self) : 
        icnt = 0;   

        #Logic To Calculate
        for self.i in range(self.isize) :
            if(self.arr[self.i] == 11) :
                icnt = icnt + 1;
        
        return icnt;

##############################################################################################################################################################

#Main Function
def main() :
    iret = 0;

    print("Jay Ganesh....");

    #Creating object of Num Class
    nobj = Num();
    
    #Call To Behaviours of Class
    nobj.Accept();
    iret = nobj.count();    

    #Printing Frequency of 11 Number Calculated
    print("Frequency of 11 Number in Entered N Numbers is : ",iret);

#########################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To main Function
    main();