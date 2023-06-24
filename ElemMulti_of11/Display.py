"""
    Author : Pakshal Shashikant Jain 
    Date : 24/06/2023
    Program : Accept N numbers from user and display all such elements which are
              multiples of 11.

              Input : N : 6
                      Elements : 85 66 3 55 93 88
                
              Output : 66 55 88 
"""

####################################################################################################

#CLass Declaration
class Display :
    #Characteristics of CLass
    isize = 0;
    arr = 0;
    i = 0;

    #Constructor of Class
    def __init__(self) :
        self.isize = 0;
        self.i = 0;
        self.arr = [];

    #Behaviour of Class To Take Input From User    
    def Accept(self) :
        #Taking input From User
        print("Enter Number of Elements You Want in array : ");
        self.isize = int(input());

        #Inserting Elements in array
        print("Enter ELements in array : ");
        for self.i in range(self.isize) :
            No = 0;
            
            print("Enter Element Number : ",self.i + 1);
            No = int(input());

            self.arr.append(No);
    
    #Behaviour of Class To Display Output 
    def display(self) :
        #Logic 

        print("Elements Which are Multiples of 11 are : ");
        for self.i in range(self.isize) :
            if((self.arr[self.i] % 11) == 0) :
                print(self.arr[self.i],end = "\t");

###########################################################################################################

#Main Function
def main() :
    print("Ganapati Bappa Morya");

    #Creating object of Display Class
    dobj = Display();

    #Call TO Behaviours of Class
    dobj.Accept();
    dobj.display();

#####################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();