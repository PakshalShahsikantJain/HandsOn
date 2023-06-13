"""
    Author : Pakshal Shashikant Jain
    Date : 07/06/2023
    Program : Accept N numbers from user and display all such elements which are
              divisible by 5.
              
              Input : N : 6
              Elements : 85 66 3 80 93 88
              Output : 85 80 
"""

#################################################################################################################################################

#Class Declaration
class Divisible :
    #Characteristics of Class
    isize = 0;
    arr = [];

    #Constructor of Class
    def __init__(self) : 
        self.isize;
        self.arr;

    #Behaviour of Class To Take Input From User
    def Accept(self) :
        i = 0;
        No = 0;

        #Taking Input From User
        print("Enter Number of Elements You Want in Array : ");
        self.isize = int(input());

        #Inserting Value in Array
        print("Enter Elements in Array : ");
        for i in range(self.isize) :
            print("Enter Element Number : ",i + 1);
            No = int(input());

            self.arr.append(No);
    
    #Behaviour of Class To Display Elements 
    def Display(self) :
        i = 0;
        
        #Printing Elements Which Are Divisible By 5 
        print("Elements Divisible By 5 Are : ");
        for i in range(self.isize) :
            if((self.arr[i] % 5) == 0) :
                print("%d\t"%self.arr[i],end = "");

#############################################################################################################################################

#Main Function
def main() :
    print("Jay Ganesh....");

    #Creating object of Divisible Class
    dobj = Divisible();

    #Call To Behaviours of Class
    dobj.Accept();
    dobj.Display();

###########################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();