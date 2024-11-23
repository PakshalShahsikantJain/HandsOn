"""
    Author : Pakshal Shashikant Jain 
    Date : 04/09/2023
    Program : Write a program which accept one number and position from user and off
              that bit. Return modified number.

              Input : 10 2
              Output : 8 
"""

#############################################################################################################################################################

#Class Declaration
class Bit :
    #Characteristics of Class
    iNo = 0;
    iPos = 0;

    #Constructor of Class
    def __init__(self) :
        self.iNo = 0;
        self.iPos = 0;

    #Behaviour of Class To Take Input from user
    def Accept(self) :
        #Enter one Number
        print("Enter One Number");
        self.iNo = int(input());

        print("Enter One Position");
        self.iPos = int(input());

    #Behaviour of Class To off Bit At Entered Position
    def OffBit(self) :
        iMask = 0X00000001;
        iResult = 0;

        if(self.iNo < 0) :
            self.iNo = -self.iNo;
        
        if((self.iPos < 1)or(self.iPos > 32)) :
            return 0;

        #Logic To Off Bit
        iMask = iMask << (self.iPos - 1);

        iResult = iMask & self.iNo;

        if(iResult == iMask) :
            iResult = iMask ^ self.iNo;

        return iResult;

################################################################################################################################################

#Main Function
def main() :
    iret = 0;

    print("Jay Ganesh......");

    #Creating object of Bit Class
    bobj = Bit();

    #Call To Behaviours of Class
    bobj.Accept();
    iret = bobj.OffBit();

    #Printing Modified Number
    print("Modified Number is : %d"%iret);

#########################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #call To Main Function
    main();