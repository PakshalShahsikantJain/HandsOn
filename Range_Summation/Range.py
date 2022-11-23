"""
    Author : Pakshal Jain
    Date : 22/11/2022
    Program : To Calculate Summation of Numbers in Entered Range
"""

################################################################################################################################

#Function To Calculate Summation  
def Summation(No,No2) :
    i = 0;
    Sum = 0;

    for i in range(No,No2 + 1) :
        Sum = Sum + i;

    return Sum;

##############################################################################################################

#Main Function
def main() :
    No = 0;
    No2 = 0;
    
    iret = 0;

    print("Jay ganesh....");

    #Taking Input From User
    print("Enter Starting Number");
    No = int(input());

    print("Enter Ending Number");
    No2 = int(input());

    #Handeling Condition if Entered Number is Negative
    if((No < 0)or(No2 < 0)) :
        print("Invalid Range");
        exit();
    #Handeling Condition if Starting Number is Greater Than Ending Number
    elif(No > No2) :
        print("Invalid Range");
        exit();

    #Call To Summation Function
    iret = Summation(No,No2);
    #Printing obtained output
    print("Summation of Numbers in Entered Range is :",iret);

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();