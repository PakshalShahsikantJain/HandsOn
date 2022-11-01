"""
    Author : Pakshal Jain
    Date : 14/09/2022
    Program : To Check Whether Entered Number is Divisible By 5 or Not
"""
class Check :
    #Characteristics of Class
    No = 0;
    
    #Constructor of Class
    def __init__(self,no) :
        self.No = no;
    
    #Behaviours of Class
    def check(self) :
        if(self.No % 5 == 0) :
            return True;
        else :
            return False;

#################################################################################################################################################

def main() :
    No = 0;
    bret = False;
    
    print("Ganapati Bappa Morya");
    
    print("Enter One Number....");
    No = int(input());

    cobj = Check(No);
    bret = cobj.check();

    if bret == True : 
        print("Entered Number is Divisible By 5");
    else :
        print("Entered Number is Not Divisible By 5 ");

########################################################################################################################################

if __name__ == "__main__" :
    main();