"""
    Author : Pakshal Shashikant Jain
    Date : 04/09/2023
    Program : Write a program which accept one number and position from user and
              check whether bit at that position is on or off. If bit is one return TURE
              otherwise return FALSE.
            
              Input : 10 2
              Output : TRUE 
"""

################################################################################################################################################################################

#Class Declaration
class CheckBit :
    #Characteristics of Class
    iNo = 0;
    iPos = 0;

    #Constructor of Class
    def __init__(self) :
        self.iNo = 0;
        self.iPos = 0;
    
    #Behaviour of Class To Take Input from user
    def Accept(self) :
        #Taking Input from user
        print("Enter One Number");
        self.iNo = int(input());

        print("Enter One Position");
        self.iPos = int(input());

    #Behaviour of Class To Check Entered Bit is ON or Not At Entered Position
    def Check(self) :
        iMask = 0X00000001;
        iResult = 0;

        if(self.iNo < 0) :
            self.iNo = -self.iNo;
        
        if((self.iPos < 1)or(self.iPos > 32)) :
            return False;

        iMask = iMask << (self.iPos - 1);

        iResult = iMask & self.iNo;
        if(iResult == iMask) :
            return True;
        else :
            return False;

###############################################################################################################################################################

#Main function
def main() :
    bret = False;

    print("Jay Ganesh....");

    #Call To CheckBit Function
    cobj = CheckBit();

    #Call To Behaviour of Class
    cobj.Accept();
    bret = cobj.Check();

    #Handeling Conditions if bret is True
    if(bret == True) :
        print("Entered Bit is On At %d Position"%cobj.iPos);
    #Handeling Condition if bret is False
    else :
        print("Entered Bit is Off At %d Position"%cobj.iPos);

############################################################################################################################################################

#Call Back Method to Call Main Function
if __name__ == "__main__" :
    #Call To Main function
    main();