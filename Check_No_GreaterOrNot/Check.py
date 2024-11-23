"""
    Author : Pakshal Jain
    Date : 09/10/2022
    Program : To Check Entered Number is Greater Than 100 or Not
"""

#Function to Check
def Check(No) :

    if(No > 100) :
        return True;
    else :
        return False;

####################################################################################################################################

def main() :
    No = 0;
    bret = False;

    print("Jay Ganesh...");
    
    print("Enter one Number");
    No = int(input());

    #Call To Check Function
    bret = Check(No);
    
    if(bret == True) :
        print("Entered Number",No,"is Greater Than 100");
    else :
        print("Entered Number",No,"is Smaller Than 100");

#####################################################################################################################################

if __name__ == "__main__" :
    #Call To Main Function
    main();