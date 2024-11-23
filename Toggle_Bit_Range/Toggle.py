"""
    Author : Pakshal Shashikant Jain
    Date : 12/09/2023
    Program : Write a program which accept one number from user and range of
              positions from user. Toggle all bits from that range.
              Input : 897 9 13
              Toggle all bits from position 9 to 13 of input number ie 879.

              UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
              {
                // Logic
              } 
"""

##############################################################################################################################

#Class Declaration
class Bit :
    #Characteristics of Class
    iNo = 0;
    iStart = 0;
    iEnd = 0;

    #Constructor of Class
    def __init__(self) :
        self.iNo = 0;
        self.iStart = 0;
        self.iEnd = 0;
    
    #Behaviour of Class To Take Input from user
    def Accept(self) :
        #Taking input from user
        print("Enter One Number");
        self.iNo = int(input());

        print("Enter Starting Number");
        self.iStart = int(input());

        print("Enter Ending Number");
        self.iEnd = int(input());

    #Behaviour of Class To ToggleBits in Entered Range
    def ToggleBitRange(self) :
        i = 0;
        iResult = 0;
        iMask = 0X00000001;

        #Logic To Toggle Bits 
        iResult = self.iNo;
        for i in range(self.iStart,self.iEnd + 1):
            iMask = iMask << (i - 1);
            iResult = iMask ^ iResult;
            iMask = 0X00000001;

        return iResult;
    
#Main function
def main() :
    iRet = 0;

    print("Jay Ganesh....");

    #Creating object of Bit Class
    bobj = Bit();
    #Call To beahviours of Class
    bobj.Accept();
    iRet = bobj.ToggleBitRange();
    
    #printing Moidifed number
    print("Modified Number is : ",iRet);

##########################################################################################################################

#Call Back Method to call Main Function
if __name__ == "__main__" :
    #Call TO Main Function
    main();