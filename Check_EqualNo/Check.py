"""
    Author : Pakshal Jain
    Date : 10/10/2022
    Proram : To Check Entered Two Numbers are Equal or Not
"""

########################################################################################################

#Function To Check
def Check(No,No2) :
    if(No == No2) :
        return True;
    else :
        return False;

##########################################################################################################

def main() :
    No = 0;
    bret = True;

    print("Jay Ganesh....");
    
    print("Enter One Number...");
    No = int(input());

    print("Enter Second Number...");
    No2 = int(input());

    #Call To Check Function
    bret = Check(No,No2);

    if(bret == True) :
        print("Entered Numbers",No,"and",No2,"Are Equal");
    else :
        print("Entered Numbers",No,"and",No2,"Are Not Equal");

#Call To Main Function
if __name__ == "__main__" :
    main();