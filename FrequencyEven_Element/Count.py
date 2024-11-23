"""
    Author : Pakshal Shashikant Jain 
    Date : 26/06/2023
    Program : Accept N numbers from user and return frequency of even numbers.
              Input : N : 6
                      Elements : 85 66 3 80 93 88
              Output : 3 
"""

#################################################################################################

#Class Declaration
class Frequency :
    #Characterstics of Class
    isize = 0;
    arr = [];
    i = 0;

    #Constructor of Class
    def __init__(self) :
        self.isize = 0;
        self.arr = [];
        self.i = 0;

    #Behaviour of Class To Take Input From User
    def Accept(self) :
        No = 0;

        #Taking Input From  User
        print("Enter Number of Elements You Want in array : ");
        self.isize = int(input());

        #Handeling Condition if Entered Number is Less Than Zero
        if(self.isize < 0) :
            self.isize = -self.isize;

        #Inserting Elements in array
        print("Enter Elements In array : ");
        for self.i in range(self.isize) :
            No = 0;

            print("Enter Element Number : %d"%(self.i + 1));
            No = int(input());

            self.arr.append(No);

    #Behaviour of Class to Count frequency
    def Count(self) :
        icnt = 0;
        
        #Logic To Count Frequency 
        for self.i in range(self.isize) :
            if((self.arr[self.i] % 2) == 0) :
                icnt = icnt + 1;

        return icnt;

##########################################################################################################

def main() :
    iret = 0;

    print("Jay Ganesh....");

    #Creating object of Frequency Class
    fobj = Frequency();

    #Call To Behaviours of Class
    fobj.Accept();
    iret = fobj.Count();
    
    #Printing Frequency Calculated
    print("Frequecy of Even Elements From Entered N Numbers is :",iret);

################################################################################################3333

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();