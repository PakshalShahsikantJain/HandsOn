"""
    Author : Pakshal Jain
    Date : 18/19/2022
    Program : To Count Frequecy of Digits Which is Less Than 6
"""

#Function To Count Frequecy
def Frequency(No) :
    Digit = 0
    icnt = 0;

    #Logic
    while(No != 0) :
        Digit = No % 10;
        if(Digit < 6) :
            icnt = icnt + 1;
        No = No // 10;

    return icnt;

#Main Function
def main() :
    No = 0;
    iret = 0;

    print("Jay Ganesh....");

    print("Enter Any Number of Two or More Digits");
    No = int(input());

    #Call To Frequency Fuction
    iret = Frequency(No);
    
    print("Frequecy of Digits Less Than 6 is : ",iret);

#Call Back Method TO Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();