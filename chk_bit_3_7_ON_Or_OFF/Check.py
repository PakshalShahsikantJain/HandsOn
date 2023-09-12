"""
    Author : Pakshal Shashikant Jain
    Date : 12/09/2023
    Program : Write a program which accept one number , two positions from user and
              check whether bit at first or bit at second position is ON or OFF.

              Input : 10 3 7
              Output : FALSE 
"""

###############################################################################################################################################################

#Class Declaration
class Bit :
    #Characteristics of Class
    iNo = 0;
    iPos1 = 0;
    iPos2 = 0;

    #Constructor of Class
    def __init__(self) :
        self.iNo = 0;
        self.iPos1 = 0;
        self.iPos2 = 0;
    
    #Behaviour of Class To Take Input from user
    def Accept(self) :
        #Taking Input from user
        print("Enter One Number");
        self.iNo = int(input());

        print("Enter First Position");
        self.iPos1 = int(input());

        print("Enter Second Position");
        self.iPos2 = int(input());
    
    #Behaviour of Class To Check Bit is ON Or OFF
    def Check(self) :
        iMask = 0X00000001;
        iMask2 = 0X00000001;

        iResult = 0;
        iResult2 = 0;

        #Logic To Check
        iMask = iMask << (self.iPos1 - 1);
        iMask2 = iMask2 << (self.iPos2 - 1);

        iResult = iMask & self.iNo;
        iResult2 = iMask2 & self.iNo;

        if((iResult == iMask)or(iResult2 == iMask2)) :
            return True;
        else :
            return False;

####################################################################################################################################################################
            
#Main Function
def main() :
    bret = False;
    print("Jay Ganesh....");

    #Creating objec of a Class
    bobj = Bit();

    #Call To Behaviours of Class
    bobj.Accept();
    bret = bobj.Check();

    if(bret == True) :
        print("One or Bit is ON");
    else :
        print("Both Bits are OFF");

########################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();