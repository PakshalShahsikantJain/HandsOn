"""
    Author : Pakshal Shashikant Jain 
    Date : 04/06/2023
    Program : Design application for school management system.
              As school is primary there are 4 standards from 1 to 4.
              School fees of each standard is different.
              For first standard fees are 8900, for second standard 12790, for
              third standard 21000 and for fourth standard fees are 23450.
              We have to accept standard from user and display the
              corresponding fees. 
"""

###################################################################################################################################################

#Class Declaration
class School :

    #Characteristics of Class
    No = 0;
    
    #Constrcutor of Class
    def __init__(self) :
        self.No = 0;
    
    #Behaviour of Class
    def accept(self) :
        print("Enter Your Standard");
        self.No = int(input());

    #Behaviour of Class
    def SchoolFee(self) :
        fee = 0;

        #Logic To Print Fee According To Output 
        if(self.No == 1) :
            fee = 8900;
            return fee;
        elif(self.No == 2) :
            fee = 12790;
            return fee;
        elif(self.No == 3) :
            fee = 21000;
            return fee;
        elif(self.No == 4) :
            fee = 23450;
            return fee;
        else :
            print("Invalid Input");
            exit();

###################################################################################################################################################

#Main Function
def main() :
    iret = 0;

    print("Jay Ganesh....");

    print("-----Marvellous Internation Primary School-----------");

    #Creating object of School Class
    sobj = School();

    #Call To Behaviour of Class
    sobj.accept();
    
    iret = sobj.SchoolFee();

    print("Your School Fees is : %d"%iret);

#####################################################################################################################################################

#Call Back Method To Call Main Function 
if __name__ == "__main__" :
    #Call To Main Function
    main();