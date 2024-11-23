"""
    Author : Pakshal Shashikant Jain 
    Date : 14/5/2024
    Program : Write a recursive program which accept number from user and return
              smallest digit

              Input : 87983
              Output : 3  
"""

####################################################################################################################################

class MinDigit :
    #Characteristics of Class
    imin = 0;
    ino = 0;
    
    #Constructor of Class
    def __init__(self,ivalue) :
        self.ino = ivalue;
        self.imin = self.ino % 10;
        self.ino = self.ino // 10;

    #Behaviour of Class To Find Smallest Digit
    def Min(self) :
        Digit = 0;

        #Logic to Find
        Digit = self.ino % 10;
        if(Digit < self.imin) :
            self.imin = Digit;
        self.ino = self.ino // 10;

        if(self.ino != 0) :
            self.Min();
        
        return self.imin;

################################################################################################################################################

#Main Function
def main() :
    ino = 0;
    iret = 0;

    print("Jay Ganesh....");

    #Taking Input From User
    print("Enter One Number : ");
    ino = int(input());
    
    #Creating object of MinDigit Class
    mobj = MinDigit(ino);

    #Call To Behaviour of Class
    iret = mobj.Min();

    #Printing Smallest Digit
    print("Smallest Digit in Entered Number %d is : %d"%(ino,iret));

###################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();