"""
    Author : Pakshal Jain
    Date : 27/10/2022
    Program : To accept number from user and print numbers till that number
"""

######################################################################################################

#Class Declaration
class Pattern :
    #Characteristics of Class
    No = 0;

    #Constructor of Class
    def __init__(self,no) :
        self.No = no;

    #Behaviour of Class
    def Display(self) :
        i = 0;

        for i in range(1,self.No + 1) :
            print(i,end = "\t");

#########################################################################################################

#Main Function
def main() :
    No = 0;

    print("Jay Ganesh...");
    
    #Taking Input From User
    print("Enter One Number");
    No = int(input());

    #Creating object of Pattern Class
    pobj = Pattern(No);
    #Call To Behaviour of Class
    pobj.Display();

##########################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main()