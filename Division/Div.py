"""
    Author : Pakshal Jain 
    Date : 04/09/2022
    Program : To calculate Divsion of Two Numbers
"""

###############################################################################################################################

def Division(No,No2) :
    ans = 0;

    if No2 == 0 :
        print("Invalid Input....");
        return;
    elif No2 < 0 :
        No2 = -No2;

    ans = No / No2;

    return ans;

#######################################################################################################

def main() :
    No = 0;
    ret = 0;

    print("Jay Ganesh.....");

    print("Enter First Number....");
    No = int(input());

    print("Enter Second Number.....");
    No2 = int(input());

    ret = Division(No,No2);
    print("Division of Numbers is : ",ret)

############################################################################################################

if __name__ == "__main__" :
    main();