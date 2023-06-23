"""
    Author : Pakshal Shashikant Jain 
    Date : 23/06/2023
    Program : Accept N numbers from user and display all such elements which are
              divisible by 3 and 5.
              
              Input :  N : 6
                       Elements : 85 66 3 15 93 88
              
              Output : 15 
"""

##############################################################################################################################################3

#Class Declaration
class Display :
    #Characteristics of Class
    isize = 0;
    arr = [];
    i = 0;

    #Constructor of Class
    def __init__(self) :
        self.isize = 0;
        self.arr = [];
        self.i = 0;

    #Behaviour of Class To Take input From User
    def Accept(self) :
        print("Enter Number of Elements You Want in array : ");
        self.isize = int(input());

        print("Enter Elements in array : ");
        for self.i in range(self.isize) :
            No = 0;

            print("Enter Element Number %d"%(self.i + 1));
            No = int(input());
            self.arr.append(No);

    #Behaviour of Class To Display Elements Divisible By 3 and 5 
    def display(self) :
        print("Elements Divisible By 3 and 5 are : ");
        for self.i in range(self.isize) :
            if(((self.arr[self.i] % 3) == 0)and((self.arr[self.i] % 5) == 0)) :
                print(self.arr[self.i]);

######################################################################################################################################

#Main Function
def main() :
    print("Jay Ganesh....");

    #Creating object of Display Class
    dobj = Display();

    #Call To Behaviours of Class
    dobj.Accept();
    dobj.display();

#################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To main Function
    main();