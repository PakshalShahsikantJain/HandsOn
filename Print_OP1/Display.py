"""
    Author : Pakshal Jain
    Date : 20/09/2022
    Program : Accept one number from user and print that number of even numbers on screen
"""
#Class Declartion
class Display :
    #Characteristics of Class
    No = 0;
    #Constructor of Class
    def __init__(self,no) :
        self.No = no;
    #Behaviour of Class
    def display(self) :
        for i in range(1,self.No + 1) :
            print(i*2,end = " ");

##################################################################################################################

def main() :
    No = 0;
    print("Jay ganesh....");

    print("Enter Any Number");
    No = int(input());

    #Creating Object of Class
    dobj = Display(No);
    #Calling Behaviour of Class
    dobj.display();

##########################################################################################################

if __name__ == "__main__" :
    main();