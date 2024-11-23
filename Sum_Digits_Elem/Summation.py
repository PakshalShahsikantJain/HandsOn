"""
    Author : Pakshal Shashikant Jain 
    Date : 18/07/2021
    Program : Accept N numbers from user and display summation of digits of each number.
              Input : N : 6
                      Elements : 8225 665 3 76 953 858
              Output : 17 17 3 13 17 21 
"""

################################################################################################################################3

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
    
    #Behaviour of Class To Accept Input from user
    def Accept(self) :
        No = 0;

        #Taking input from user
        print("Enter Number of Elements You Want in array");
        self.isize = int(input());

        #inserting Elements in array
        print("Enter Elements in array ");
        for self.i in range(self.isize) :
            print("Enter Element Number : ",self.i + 1);
            No = int(input());
            self.arr.append(No);
    
    #Behaviour of Class To Calculate Summation
    def Summation(self) :
        Digits = 0;
        No = 0;
        Sum = 0;
        
        #logic To find Summation
        print("Summation of Digits of Each Number is as Follows : ");
        for self.i in range(self.isize) :
            No = self.arr[self.i];

            while(No != 0) :
                Digits = No % 10;
                Sum = Sum + Digits;
                No = No // 10;

            print("%d"%Sum,end = "\t");
            Sum = 0;

########################################################################################################################

#Main function
def main() :
    print("Jay Ganesh....");

    #Creating object of Digits Class
    dobj = Digits();

    #Call To Behaviours of Class
    dobj.Accept();
    dobj.Summation();

##################################################################################################################

#Main function
if __name__ == "__main__" :
    #Call To Main function
    main();