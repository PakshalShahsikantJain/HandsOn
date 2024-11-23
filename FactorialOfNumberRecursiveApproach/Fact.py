"""
    Author : Pakshal Shashikant Jain 
    Date : 08/05/2024
    Program : Write a recursive program which accept number from user and return its
              factorial.
              
              Input : 5
              Output : 120 
"""

###################################################################################################################################

class Factorial :
    imult = 1;

    #Constructor of Class
    def __init__(self,value) :
        self.ino =  value;
    
    #Behaviour of Class
    def Factorial(self) :
        if(self.ino != 0) :
            Factorial.imult = Factorial.imult * self.ino;
            self.ino = self.ino - 1;
            self.Factorial();

        return Factorial.imult;

###########################################################################################################################################

#Main Function
def main() :
    ino = 0;
    iret = 0;

    print("Jay Ganesh....");

    #Taking Input From User
    print("Enter One Number : ");
    ino = int(input());

    #Creating object of Factorial Class
    fobj = Factorial(ino);
    iret = fobj.Factorial();

    #Printing Factorial of Number Calculated
    print("Factorial of Entered Number is : %d"%iret);

###########################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To main Function
    main();