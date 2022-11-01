"""
    Author : Pakshal Jain
    Date : 18/09/2022
    Program : To Check Whether Entered Number is Even or Not
"""

####################################################################################################################

def Check(No) :
    if(No % 2 == 0) :
        return True;
    else :
        return False;

#####################################################################################################################

def main() :
    No = 0;
    bret = False;

    print("Jay Ganesh....");
    
    print("Enter One Number....");
    No = int(input());

    bret = Check(No);

    if(bret == True) :
        print("Entered Number is Even");
    else :
        print("Entered Number is Odd");

####################################################################################################################

if __name__ == "__main__" :
    main();