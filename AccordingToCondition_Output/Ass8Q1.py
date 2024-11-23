"""
    Author : Pakshal Jain
    Date : 21/10/2022
    Program : To accept number from user and if number is less than 50 then print small, 
              if it is greater than 50 and less than 100 then print medium, 
              if it is greater than 100 then print large
"""

#Function To Display Output
def Number(No) :
    #Logic
    if(No < 50) :
        print("Small");
    elif((No >= 50)and(No <= 100)) :
        print("Medium");
    elif(No > 100) :
        print("Large");

####################################################################################################################################

#Main Function
def main() :
    No = 0;

    print("Jay Ganesh...");

    #Taking Input From User
    print("Enter One Number..");
    No = int(input());

    #call To Number Function
    Number(No);

#Call Back Method To call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();