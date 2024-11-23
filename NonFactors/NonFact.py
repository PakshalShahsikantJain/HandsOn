"""
    Author : Pakshal Jain
    Date : 04/10/2022
    Program : To Print Nonfactors of Entered Number
"""

####################################################################################################################

def NonFact(No) :
    print("Printing NonFactors of Entered Number");
    for i in range(1,No) :
        if(No % i != 0) :
            print(i,end = "\t");

#####################################################################################################################

def main() :
    print("Jay Ganesh...");
    
    print("Enter One Number");
    No = int(input());

    #Call TO Non Fact Function    
    NonFact(No);

#Call To Main Function
if __name__ == "__main__" :
    main();