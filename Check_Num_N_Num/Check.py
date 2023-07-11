"""
    Author : Pakshal Shashikant Jain 
    Date : 06/07/2023
    Program : Accept N numbers from user and accept one another number as NO ,
              check whether NO is present or not.

              Input : N : 6
                      NO: 66
                      Elements : 85 66 3 66 93 88
              Output : TRUE

              Input : N : 6
                      NO: 12
                      Elements : 85 11 3 15 11 111
              Output : FALSE 
"""

#########################################################################################################################################################

#Class Declaration
class Freq :
    #Characteristics of Class
    isize = 0;
    arr = [];
    NO = 0;
    i = 0;

    #Constructor of Class
    def __init__(self) :
        self.isize = 0;
        self.arr = [];
        self.NO = 0;
        self.i = 0;

    #Behaviour of Class To Take input From user
    def Accept(self) :
        no = 0;

        #Taking input From user
        print("Enter Number of Elements You Want in array : ");
        self.isize = int(input());

        #Inserting Elements in Array 
        print("Enter Elements in array : ");
        for self.i in range(self.isize) :
            print("Enter Element Number : %d"%(self.i + 1));
            no = int(input());
            
            self.arr.append(no);

        #Taking Another Number from user To Check if it is Present or Not in Entered N Numbers
        print("Enter Number To Check if it is Present or Not in Entered Numbers : ");
        self.NO = int(input());
    
    #Behaviour of Class To Check 
    def check(self) :
        
        #Logic To Check
        for self.i in range(self.isize) :
            if(self.arr[self.i] == self.NO) :
                break;

        if(self.arr[self.i] == self.NO) :
            return True;
        else :
            return False;

###############################################################################################################################################

#Main function
def main() :
    bret  = False;
    
    print("Jay Ganesh...");

    #Creating object of Frequency Class 
    fobj = Freq();

    #Call To Behaviours of Class
    fobj.Accept();
    bret = fobj.check();

    #Handeling conditions
    if(bret == True):
        print("Number %d is Present in Entered N Numbers"%fobj.NO);
    else :
        print("Number %d is Not Present in Entered N Numbers"%fobj.NO);

################################################################################################################################################

#Call Back Method To Call main function
if __name__ == "__main__" :
    #Call To main Function
    main();