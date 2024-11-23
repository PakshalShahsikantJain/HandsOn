"""
    Author : Pakshal Jain
    Date : 16/10/2022
    Program : To check Enterd Number constains Zero or Not
"""

##############################################################################################################################

#Class Declaration
class Check :
    #Characteristics of Class
    No = 0;
    
    #Constructor of Class
    def __init__(self,no) :
        self.No = no;
    
    #Behaviour of Class
    def find(self) :
        Digit = 0;

        #Logic To Check Entered Number Constains Zero or Not
        while(self.No != 0) :
            Digit = self.No % 10;
            
            if(Digit == 0) :
                break;
            
            self.No = self.No // 10;
        
        #Handeling Condition if Number Contains Zero
        if(Digit == 0) :
            return True;
        #Handeling Condition if Number Does Not Contains Zero
        else :
            return False;

#####################################################################################################################################

#Main Function
def main() :
    No = 0;
    bret = False;

    print("Jay Ganesh...");
    
    #Taking Input From User
    print("Enter one Number");
    No = int(input());

    #Creating object of Check class
    cobj = Check(No);
    #Calling Behaviour of Check Class
    bret = cobj.find();

    #Handeling Condition if Return Value is True 
    if(bret == True) :
        print("Entered Number Contains Zero in it");
    #Handeling Condition if Return Value is False
    else :
        print("Entered Number Does Not Constains Zero in it");

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main()