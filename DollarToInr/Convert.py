"""
    Auhtor : Pakshal Jain
    Date : 15/12/2022
    Program : To Convert Entered Money From Dollar To Inr
"""

#################################################################################################################################3

#Function To Convert Money
def Convert(No) :
    ans = 0;

    #Handeling Condition if Entered Number is Negative
    if(No < 0) :
        No = -No;

    #Logic
    ans = No * 70;

    return ans;

##############################################################################################################################

#Main Function
def main() :
    No = 0;
    iret = 0;

    print("Jay Ganesh...");

    #Taking input From User
    print("Enter Money in Dollar");
    No = int(input());

    #Call To Convert Function
    iret = Convert(No);

    #Printing Obtained Output
    print("Mone Converted From Dollar To Inr is :",iret);

##########################################################################################################################################

#Call Back Method To Call Main Function
if __name__=="__main__" :
    #Call To Main Function
    main();