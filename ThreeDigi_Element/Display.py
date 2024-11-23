"""
    Author : Pakshal Shashikant Jain 
    Date : 18/07/2023
    Program : Accept N numbers from user and display all such numbers which contains
              3 digits in it.
              Input : N : 6
                      Elements : 8225 665 3 76 953 858
              Output : 665 953 858
"""

#############################################################################################################################################

#Class Declaration 
class Digits :
    #Characteristics of Class
    isize = 0;
    i = 0;
    arr = [];

    #Constructor of Class
    def __init__(self) :
        self.isize = 0;
        self.i = 0;
        self.arr = [];
    
    #Behaviour of Class To Take Input from user
    def Accept(self) :
        No = 0;

        #Taking input from user
        print("Number of Elements You Want in array ");
        self.isize = int(input());

        #inserting Elements in array 
        print("Enter Elements in array");
        for self.i in range(self.isize) :
            print("Enter Element Number ",self.i + 1);
            No = int(input());
            self.arr.append(No);

    #Behaviour of Class To Display All Such Elements which Contains 3 digits in it
    def Display(self) :
        ino = 0;
        iDigits = 0;
        icnt = 0;

        #Logic To Display
        print("Printing Such Elements which contains 3 Digits in it");
        for self.i in range(self.isize) :
            ino = self.arr[self.i];

            while(ino != 0) :
                iDigits = ino % 10;
                icnt = icnt + 1;
                ino = ino // 10
            
            if(icnt == 3) :
                print(self.arr[self.i],end = "\t");
            icnt = 0;

#####################################################################################################################################

#Main Function
def main() :
    print("Jay Ganesh.....");

    #Creating object of Digits Class
    dobj = Digits();

    #Call To Behaviours of Class
    dobj.Accept();
    dobj.Display();

#######################################################################################################################################

#Call Back Method To Call Main function
if __name__ == "__main__" :
    #Call to main function
    main();