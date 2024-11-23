"""
    Author : Pakshal Shashikant Jain 
    Date : 12/07/2023
    Program : Accept N numbers from user and accept Range, Display all elements from
              that range.
              
              Input : N : 6
                      Start: 60
                      End : 90
                      Elements : 85 66 3 76 93 88
              Output : 66 76 88

              Input : N : 6
                      Start: 30
                      End : 50
                      Elements : 85 66 3 76 93 88
              Output : 
"""

######################################################################################################################################################################3

#Class Declaration
class Range :
    #Characteristics of Class
    isize = 0;
    i = 0;
    arr = [];
    start = 0;
    end = 0;

    #Constructor of Class
    def __init__(self) :
        self.isize = 0;
        self.i = 0;
        self.start = 0;
        self.end = 0;
        self.arr = [];

    #Behaviour of Class To Take Input From user
    def Accept(self) :
        No = 0;

        #Taking input from user
        print("Enter Number of Elements You Want in array ");
        self.isize = int(input());

        #inserting Elements in array 
        print("Enter Elements in array");
        for self.i in range(self.isize) :
            print("Enter Element Number : ",self.i + 1);
            No = int(input());
            self.arr.append(No);

        #Taking Starting Number from user of Range
        print("Enter Starting Number : ");
        self.start = int(input());

        #taking Ending Number from user for Range
        print("Enter Ending Number : ");
        self.end = int(input());

    #Behaviour of Class TO Display Element Which are in Entered Range
    def Display(self) :
        brr = [];

        #Logic 
        for self.i in range(self.isize) :
            if((self.arr[self.i] >= self.start)and(self.arr[self.i] <= self.end)) :
                brr.append(self.arr[self.i]);

        return brr;

#Main function
def main() :
    i = 0;

    iret = [];

    print("Jay ganesh....");

    #Creating Objet of Range Class
    robj = Range();

    #Call To Behaviour of Class
    robj.Accept();
    iret = robj.Display();

    #print Elements which are in Entered Range
    for i in range(len(iret)) :
        print("%d"%iret[i],end = "\t");

#################################################################################################################################################################

#Call Back Method To Call Main function
if __name__ == "__main__" :
    #Call To main Function
    main();