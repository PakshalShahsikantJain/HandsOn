"""
    Author : Pakshal Jain
    Date : 10/03/2022
    Program : To Print Factors of Entered Number in Reverse order
"""

#####################################################################################################################

def RevFact(No) :
    print("Factor of Entered Number in Reverse order is : ");
    for i in range(No-1,0,-1) :
        if(No % i == 0) :
            print(i,end = "\t");

#####################################################################################################

def main() :
    No = 0;

    print("Jay Ganesh...");
    print("Enter one Number....");
    No = int(input());

    //Call To RevFact Function
    RevFact(No);

###############################################################################################################

if __name__ == "__main__" :
    //Call To Main Function
    main();