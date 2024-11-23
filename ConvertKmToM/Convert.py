"""
    Author : Pakshal Jain
    Date : 29/10/2022
    Program : To Converted Entered Km into M
"""

###################################################################################

#Function To Convert Km into M
def Convert(No) :
    ans = 0;

    #Logic
    ans = No * 1000;

    return ans;

########################################################################################

#Main Function
def main() :
    No = 0;
    iret = 0;

    print("Jay Ganesh....");
    
    #Taking Input From User
    print("Enter one Number..");
    No = int(input());

    #Call To Convert Function
    iret = Convert(No);

    print("Convereted Km into M is :",iret);

#Call Back Method To Call Main function
if __name__ == "__main__" :
    #Call To Main Function
    main();