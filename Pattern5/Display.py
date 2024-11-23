"""
    Author : Pakshal Jain
    Date : 19/01/2023
    Program : Accept number from user and display below pattern.

    Input : 5
    Output : 5 # 4 # 3 # 2 # 1 # 
"""

##################################################################################################################

#Class Declaration
class Display :

    #Characteristics of Class
    No = 0;

    #Constructor of Class
    def __init__(self,no) :
        self.No = no;

    #Behaviour of Class
    def Pattern(self) :
        i = 0;

        for i in range(self.No,0,-1) :
            print("%d\t#\t"%(i),end = "");

########################################################################################################################################################

#Main Function
def main() :
    No = 0;

    print("Jay Ganesh....");

    #Taking Input From User
    print("Enter Any Number You Want");
    No = int(input());

    #Creating Object of Display Class
    dobj = Display(No);

    #Call To Behaviour of Class
    dobj.Pattern();

####################################################################################################################################################

#Callback Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();