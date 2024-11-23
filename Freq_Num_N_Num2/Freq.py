"""
    Author : Pakshal Shashikant Jain 
    Date : 05/07/2023
    Program : Accept N numbers from user and accept one another number as NO return frequency of NO form it.
              Input : N : 6
                      NO: 66
                      Elements : 85 66 3 66 93 88
              Output : 2

              Input : N : 6
                      NO: 12
                      Elements : 85 11 3 15 11 111
              Output : 0 
"""

################################################################################################################################################################

#Class Declaration
class Freq :
    #Characteristics of class
    i = 0;
    arr = [];
    isize = 0;
    no = 0;

    #Constructor of Class
    def __init__(self) :
        self.i = 0;
        self.arr = [];
        self.no = 0;

    #Behaviour of Class To Take input from user
    def accept(self) :
        num = 0;

        #Taking input from user
        print("Enter Number of Elements You want in array : ");
        self.isize = int(input());

        #Inserting Elements in array 
        print("Enter Elements in array : ");
        for self.i in range(self.isize) :
            print("Enter Element Number : ",self.i + 1);
            num = int(input());
            self.arr.append(num);   

        #Taking Another number from user To Count Frequency of 
        print("Enter another number to Count Frequency of : ");
        self.no = int(input());

    #Behaviour of Class To Count Frequency
    def count(self) :
        icnt = 0;

        for self.i in range(self.isize) : 
            if(self.arr[self.i] == self.no) :
                icnt = icnt + 1;

        return icnt;

#############################################################################################################################################

#Main Function
def main() :
    iret = 0;

    print("Ganapati Bappa Morya....");

    #Creating object of Frequency Class
    fobj = Freq();

    #Call To Behaviours of Class
    fobj.accept();
    iret = fobj.count();

    #Priting Frequency Calculated
    print("Printing Frequency of Entered Number in Entered N Numbers : ",iret);

#####################################################################################################################################################

#Call Back Method TO Call Main function
if __name__ == "__main__":
    #Call To main function
    main();