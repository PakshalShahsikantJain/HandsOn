"""
    Author : Pakshal Shashikant Jain 
    Date : 11/5/2024
    Program : Write a recursive program which accept number from user and return
              largest digit

              Input : 87983
              Output : 9   
"""

####################################################################################################################################

class MaxDigit :
    #Characteristics of Class
    imax = 0;

    #Constructor of Class
    def __init__(self,ivalue) :
        self.imax = 0;
        self.ino = ivalue;

    #Behaviour of Class To Find Largest Digit
    def Max(self) :
        Digit = 0;

        #Logic to Find
        Digit = self.ino % 10;
        if(self.imax < Digit) :
            self.imax = Digit;
        self.ino = self.ino // 10;

        if(self.ino != 0) :
            self.Max();
        
        return self.imax;

################################################################################################################################################

#Main Function
def main() :
    ino = 0;
    iret = 0;

    print("Jay Ganesh....");

    #Taking Input From User
    print("Enter One Number : ");
    ino = int(input());
    
    #Creating object of MaxDigit Class
    mobj = MaxDigit(ino);

    #Call To Behaviour of Class
    iret = mobj.Max();

    #Printing Largest Digit
    print("Largest Digit in Entered Number %d is : %d"%(ino,iret));

###################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();