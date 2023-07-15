"""
    Author : Pakshal Shashikant Jain 
    Date : 15/07/2023
    Program : Accept N numbers from user and return product of all odd elements.
              Input : N : 6
                      Elements : 15 66 3 70 10 88
                      Output : 45
              Input : N : 6
                      Elements : 44 66 72 70 10 88
                      Output : 0
"""

#########################################################################################################################################################

#Class Declaration
class Product :
    #Characteristics of Class
    isize = 0;
    arr = [];
    i = 0;

    #Constructor of Class
    def __init__(self) :
        self.isize = 0;
        self.arr = [];
        self.i = 0;

    #Behaviour of Class To Take Input From user
    def Accept(self) :
        No = 0;

        #Taking Input From user
        print("Enter Number of Elements You Want in array");
        self.isize = int(input());

        #Inserting Elements in array 
        print("Enter Elements in array : ");
        for self.i in range(self.isize) :
            print("Enter Element Number : ",self.i + 1);
            No = int(input());

            self.arr.append(No);

    #Behaviour of Class To Calculate Product 
    def prod(self) :
        imult = 1;

        for self.i in range(self.isize) :
            if((self.arr[self.i] % 2) != 0) :
                imult = imult * self.arr[self.i];

        if(imult == 1) :
            imult = 0;

        return imult; 

###############################################################################################################################################

#Main function
def main() :
    iret = 0;

    print("Jay Ganesh...");

    #Creating object of Product 
    pobj = Product();

    #Call To Behaviours of Class
    pobj.Accept();
    iret = pobj.prod();
    print("Product of Odd Elements from Entered N Numbers is :",iret);

#################################################################################################################################################

#Call Back Method To Call Main Class
if __name__ == "__main__" :
    #Call To Main Function
    main();