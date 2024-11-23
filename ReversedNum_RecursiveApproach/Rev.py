"""
    Author : Pakshal Shashikant Jain 
    Date : 14/5/2024
    Program :  Write a recursive program which accept number from user and return its
               reverse number.

               Input : 523
               Output : 325  
"""

##############################################################################################################

#Start of Class
class RevNum :
    #Characteristics of Class
    ino = 0;
    rno = 0;

    #Constructor of Class
    def __init__(self,ivalue) :
        self.ino = ivalue;
        self.rno = 0;
    
    #Behaviour of Class
    def Reverse(self) :
        Digit = 0;

        #Logic To Reverse Number
        if(self.ino != 0) :
            Digit = self.ino % 10;
            self.rno = (self.rno * 10) + Digit;
            self.ino = self.ino // 10;

            #Recursive Call To Behaviour of Class
            self.Reverse();
    
        return self.rno;

#######################################################################################

#Main Function
def main() :
    iret = 0;
    ino = 0;

    print("Jay Ganesh.....");

    #Taking Input From User
    print("Enter One Number : ");
    ino = int(input());

    #Creating object of RevNum Class
    robj = RevNum(ino);

    #Call To Bheaviour of Class
    iret = robj.Reverse();

    #Printing Reversed Number
    print("Reversed Number of Number %d is : %d"%(ino,iret));

##########################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();