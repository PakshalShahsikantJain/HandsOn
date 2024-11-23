"""
    Author : Pakshal Shashikant Jain 
    Date : 12/06/2023

    Program : Accept N numbers from user and display all such elements which are even and divisible by 5.
              Input : N : 6
              Elements : 85 66 3 80 93 88
              Output : 80 
"""

####################################################################

#Class Declaration
class Display :
    #Characteristics of Class
    isize = 0;
    arr = [];

    #Constructor of Class 
    def __init__(self) :
        self.isize = 0;
        self.arr = [];

    #constructor of Class
    def Accept(self) :
        i = 0;

        #Taking Input From User
        print("Enter Number of Elements You Want in Array : ");
        self.isize = int(input());

        #Inserting Elements in Array 
        for i in range(self.isize) :
            No = 0;

            print("Enter Element Number : %d"%(i + 1));
            No = int(input());

            self.arr.append(No);

    #Behaviour of Class To Display Output According To Gien Condition
    def display(self) :
        i = 0;

        print("Priting Elements Which are Even And Divisible By 5 are : ");
        for i in range(self.isize) :        
            if(((self.arr[i] % 2) == 0)and((self.arr[i] % 5) == 0)) :
                print(self.arr[i]);

########################################################################################################

#Main Function
def main() :
    print("Jay Ganesh....");

    #Creaing object of Display Class
    dobj = Display();

    #Calls To Behaviours of Class
    dobj.Accept();
    dobj.display();

##################################################################################################

#Call Back Method of Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();