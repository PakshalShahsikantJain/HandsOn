"""
    Author : Pakshal Jain
    Date : 27/10/2022
    Program : To Accept Number From User and Print That Number of $ and * on Screen
"""

#Function To Print Pattern
def Pattern(No) :
    i = 0;

    #Logic
    for i in range(No) :
        print("$\t*\t",end = "");

#Main Function
def main() :
    No = 0;

    print("Jay Ganesh....");
    
    #Taking Input From User
    print("Enter One Number");
    No = int(input());

    #Call To Pattern Function
    Pattern(No);

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();