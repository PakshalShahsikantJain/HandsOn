"""
    Author : Pakshal Jain
    Date : 29/10/2022
    Program : To Convert Entered Temperature From Fahrenheit To Celcius
"""

###################################################################################

#Function To Convert Temperature
def Convert(No) :
    ans  = 0;

    ans = (No - 32) * 5 / 9;

    return ans;

################################################################################################

#Main Function
def main() :
    No = 0.0;
    fret = 0.0;

    print("Jay Ganesh...");

    #Taking Input From User
    print("Enter Temperature in Fahrenheit");
    No = float(input());

    #Call To Convert Function
    fret = Convert(No);

    #Printing Converted Function
    print("Converted Temperature is : ",fret);

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();