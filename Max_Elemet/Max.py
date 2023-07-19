"""
    Author : Pakshal Shashikant Jain 
    Date : 16/07/2023
    Program : Accept N numbers from user and return the largest number.
              Input : N : 6
                      Elements : 85 66 3 66 93 88
              Output : 93 
"""

##############################################################################################################################################################

#Class Declaration
class Max :
    #Characteristics of Class
    isize = 0;
    arr = [];
    i = 0;

    #constructor of Class
    def __init__(self) :
        self.isize = 0;
        self.arr = [];
        self.i = 0;
    
    #Behaviour of Class To Take Input from user
    def Accept(self) :
        No = 0;

        #Inserting Elements in array 
        print("Enter Number of Elements You Want in array : ");
        self.isize = 0;

        for self.i in range(self.isize) :
            print("Enter Element Number : ",self.i + 1);
            No = int(input());

            self.arr.append(No);

    #Behaviour of Class To Find Maximum Number
    def maximum() :
        imult = 0;

        imult = self.arr[0];

        #Logic
        for self.i in range(self.isize) :
            if(self.arr[self.i] > max) :
                max = self.arr[self.i];
        
        return max;

##########################################################################################################################################################

#Main function
def main() :
    iret = 0;
    print("Jay Ganesh.....");

    #Creating object of Max Class
    mobj = Max();

    #Call To behaviours of Class
    mobj.Accept();
    iret = mobj.maximum();

    #Printing max Elements 
    print("Maximum Number from Enterd N Numbers is : ",iret);

#################################################################################################################################################################

#Call back Method to call to main function
if __name__ == "__main__" :
    #Call TO Main function
    main();