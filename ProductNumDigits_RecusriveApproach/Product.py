"""
    Author : Pakshal Shashikant Jain 
    Date : 9/5/2024
    Program : Write a recursive program which accept number from user and return its
              product of digits.

              Input : 523
              Output : 30 
"""

########################################################################################################################################################

class Digits :
    #Characteristics of Class
    ino = 0;
    imult = 0;

    #Constructor of Class
    def __init__(self,value) :
        self.ino = value;
        self.imult = 1;

    #Behaviour of Class
    def Mult(self) :
        Digits = 0;

        Digits = self.ino % 10;
        self.imult = self.imult * Digits;
        self.ino = self.ino // 10;

        if(self.ino != 0) :
            self.Mult();

        return self.imult;

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
    iret = dobj.Mult();

    #Print Products Calculated
    print("Products of Digits of Enter Number is : %d"%iret);

##########################################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();