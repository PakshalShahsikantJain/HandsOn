"""
    Author : Pakshal Shashikant Jain 
    Date : 07/09/2023
    Program : Write a program which accept one number from user and toggle contents 
              of first and last nibble of the number. Return modified number. (Nibble is a
              group of four bits) 

"""

##############################################################################################################################################

#Class Declaration
class Nibble :
    #Characteristics of Class
    iNo = 0;

    #Constructor of Class
    def __init__(self) :
        self.iNo = 0;

    #Behaviour of Class To Take input from user
    def Accept(self) :
        print("Enter One Number");
        self.iNo = int(input());
    
    #Behaviour of Class To Toggle Bit
    def ToggleBit(self) :
        iMask = 0XF000000F;
        iResult = 0;

        #Logic To Toggle Bit
        if(self.iNo < 0) :
            self.iNo = -self.iNo;
        
        iResult = iMask ^ self.iNo;

        return iResult;

###########################################################################################################################################################

#Main Function
def main() :
    iRet = 0;

    print("Jay Ganes....");

    #Creating object of Nibble Class
    nobj = Nibble();

    #Call To Behaviour of Class
    nobj.Accept();
    iret = nobj.ToggleBit();

    #Printing Modified Number
    print("Modified Number is : ",iret);

#############################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();