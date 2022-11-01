"""
    Author : Pakshal Jain
    Date : 10/09/2022
    Program : To Print Marvellous Entered Number of Times
"""

######################################################################################################################

def Display(No) :
    i = 0;

    print("Printing Marvellous %d Times" % No);
    for i in range(No) :
        print("Marvellous");

#######################################################################################################################

def main() :
    No = 0;
    print("Ganapati Bappa Morya.....");

    print("Enter One Number.....");
    No = int(input());

    Display(No);

########################################################################################################################

if __name__ == "__main__" :
    main();