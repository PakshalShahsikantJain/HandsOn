"""
    Author : Pakshal Jain
    Date : 24/09/2022
    Program : To Print Factors of Entered Number
"""

#Function to Display Factors of Entered Number
def Display(No) :
    if(No < 0) :
        No = -No;

    print("Factors of Entered Number is As Follows");
    for i in range(1,No+1) :
        if(No % i == 0) :
            print(i,end = "\t");

#####################################################################################################################

def main() :

    No = 0;

    print("Jay ganesh....");
    
    print("Enter One Number....");
    No = int(input());

    Display(No);

###########################################################################################################################

if __name__ == "__main__" :
    main();