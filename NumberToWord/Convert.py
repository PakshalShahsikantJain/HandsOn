"""
    Author : Pakshal Jain
    Date : 22/10/2022
    Program : To Convert Entered Number into Word
"""

#Function TO Convert Entered Number into Word
def Convert(No) :
    #Handeling Condition if Entere Number is Less Zero
    if(No < 0) :
        No = -No;

    #Logic To Convert Entered Number into Word    
    if(No == 0) :
        print("Zero");
    elif(No == 1) :
        print("One");
    elif(No == 2) :
        print("Two");
    elif(No == 3) :
        print("Three");
    elif(No == 4) :
        print("Four");
    elif(No == 5) :
        print("Five");
    elif(No == 6) :
        print("Six");
    elif(No == 7) :
        print("Seven");
    elif(No == 8) :
        print("Eight");
    elif(No == 9) :
        print("Nine");
    else :
        print("Invalid Numer");

#Main Function
def main() :
    No = 0;

    print("Jay Ganesh...");

    print("Enter One Number...");
    No = int(input());

    #Call To Convert Function
    Convert(No);

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();