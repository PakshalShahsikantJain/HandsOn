"""
    Author : Pakshal Jain
    Date : 18/09/2022
    Program : To Print Hello if Entered Number is Less 10 or else Print Demo
"""

####################################################################################################################

#Function To Print Output
def Display(No) :
    if(No < 10) :
        print("Hello");
    else :
        print("Demo");

#####################################################################################################################

def main() :
    No = 0;

    print("Ganapati Bappa Morya.....");
    
    print("Enter one Number.....");
    No = int(input());

    Display(No);

######################################################################################################################

if __name__ == "__main__" :
    main();