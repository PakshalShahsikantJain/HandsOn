"""
    Author : Pakshal Shashikant Jain 
    Date : 31/08/2023
    Program : Write a program which checks whether first and last bit is On or
              OFF. First bit means bit number 1 and last bit means bit number 32. 
"""

##############################################################################################################################################################

#Class Declaration
class CheckBit :
    #Characteristics of Class
    No = 0;

    #Constructor of Class
    def __init__(self) :
        self.No = 0;

    #Behaviour of Class to Take Input from user
    def Accept(self) :
        #Taking Input from user
        print("Enter One Number");
        self.No = int(input());

    #Behaviour of Class To Check Bit is On or OFF
    def Check(self) :
        iResult = 0;
        iMask = 0X80000001;

        if(self.No < 0) :
            self.No = -self.No;

        #Logic To Check Bit is ON Or OFF
        iResult = self.No & iMask;
        print(iResult);

        if(iResult == iMask) :
            return True;
        else :
            return False;

############################################################################################################################################################
             
#Main Function
def main() :
    bret = True;

    print("Jay Ganesh.....");

    #Creating object of CheckBit Class
    cobj = CheckBit();

    #Call To Behaviour of Class
    cobj.Accept();
    
    bret = cobj.Check();

    #Handeling Condition According To Output 
    if(bret == True) :
        print("First and Last Bits are ON");
    else :
        print("First or Last Bit is OFF");

###################################################################################################################################################33

#Call Back Method to Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();