"""
    Author : Pakshal Shashikant Jain 
    Date : 11/07/2023
    Program : Accept N numbers from user and accept one another number as NO ,
              return index of last occurrence of that NO.

              Input : N : 6
                      NO: 66
                      Elements : 85 66 3 66 93 88
              Output : 3

              Input : N : 6
                      NO: 93
                      Elements : 85 66 3 66 93 88
              Output : 4
            
              Input : N : 6
                      NO: 12
                      Elements : 85 11 3 15 11 111
              Output : -1 
"""

#############################################################################################################################################################

#Class Declration
class Find :
    #Characteristics of Class
    NO = 0;
    arr = [];
    isize = 0;
    i = 0;

    #Constructor of Class
    def __init__(self) :
        self.NO = 0;
        self.arr = [];
        self.isize = 0;
        self.i = 0;
    
    #Behaviour of CLass To Take Input From User
    def Accept(self) :
        No = 0;

        #Taking Input From user
        print("Enter Number of Elements You Want in array : ");
        self.isize = int(input());

        #Inserting Elements in array 
        print("Enter ELements in array : ");
        for self.i in range(self.isize) :
            print("Enter Element Number : %d"%(self.i + 1));
            No = int(input());

            self.arr.append(No);

        #Taking Another Number from user To Check Last Occurance of 
        print("Enter Element Number You Want To Find Last Occurance of : ");
        self.NO = int(input());

    #Behaviour of Class To Find Last Occurance of Enter Number
    def lastocc(self) :
        for self.i in range(self.isize - 1,0,-1) :
            if(self.arr[self.i] == self.NO) :
                break;

        if(self.arr[self.i] == self.NO) :
            return self.i;
        else :
            return -1;

###########################################################################################################################################################

#Main Function
def main() :
    iret = 0;

    print("Jay Ganesh....");

    #Creating object of Find Class
    fobj = Find();

    #Call To Behaviour of Class
    fobj.Accept();
    iret = fobj.lastocc();

    print("Last occurance of %d number is at index Number %d"%(fobj.NO,iret));

##########################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main function
    main();