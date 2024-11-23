"""
    Author : Pakshal Shashikant Jain 
    Date : 5/5/2024
    Program : Write a recursive program which accept number from user and return
              summation of its digits.
              Input : 879
              Output : 24 
"""

########################################################################################################################################################

class Digits :
    #Characteristics of Class
    ino = 0;
    isum = 0;

    #Constructor of Class
    def __init__(self,value) :
        self.ino = value;
        self.isum = 0;

    #Behaviour of Class
    def SumDigits(self) :
        Digits = 0;

        Digits = self.ino % 10;
        self.isum = self.isum + Digits;
        self.ino = self.ino // 10;

        if(self.ino != 0) :
            self.SumDigits();

        return self.isum;

#########################################################################################################################################################

#Main Function
def main() :
    ino = 0;
    iret = 0;
    
    print("Jay Ganesh....");

    print("Enter One Number : ");
    ino = int(input());

    #Creating object of Digits Class
    dobj = Digits(ino);
    iret = dobj.SumDigits();

    #Print Summation Calculated
    print("Summation of Digits of Enter Number is : %d"%iret);

##########################################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();