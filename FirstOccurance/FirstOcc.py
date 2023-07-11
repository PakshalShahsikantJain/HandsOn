"""
    Author : Pakshal Shashikant Jain 
    Date : 07/07/2023
    Program : Accept N numbers from user and accept one another number as NO ,
                return index of first occurrence of that NO.

    Input : N : 6
            NO: 66
            Elements : 85 66 3 66 93 88
    Output : 1

    Input : N : 6
            NO: 12
            Elements : 85 11 3 15 11 111
    Output : 0 
"""

###################################################################################

#Class Declaration
class Occurance :
    #Characteristics of Class
    arr = [];
    isize = 0;
    i = 0;
    no = 0;

    #Constructor of Class
    def __init__(self) :
        self.arr = [];
        self.no = 0;
        self.i = 0;
        self.isize = 0;
    
    #Behaviour of Class To Take Input From user
    def Accept(self) :
        value = 0;

        #Taking Input From User
        print("Enter Number of Element you want in array : ");
        self.isize = int(input());

        #Inserting Elements in Array 
        print("Enter Elements in array : ");
        for self.i in range(self.isize) :
            print("Enter Element Number : ",self.i + 1);
            value = int(input());

            self.arr.append(value);
        
        #Taking Another Number From User To Check
        print("Enter Number You Want To Find Occurance of : ");
        self.no = int(input());

    #Behaviour of Class To Find Number Is Present or Not
    def Find(self) :
        #Logic 
        for self.i in range(self.isize) :
            if(self.arr[self.i] == self.no) :
                break;

        if(self.arr[self.i] == self.no) :
            return self.i;
        else :
            return -1;        

##########################################################################################

#Main Function 
def main() :
    iret = 0;

    print("Jay Ganesh....");

    #Creating object of Occurance Class
    obj = Occurance();

    #Call To Behaviours of Class
    obj.Accept();
    iret = obj.Find();

    #Printing First Occurance of Entered Number
    print("Entered Number %d is Present at index Number %d"%(obj.no,iret));

##############################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();