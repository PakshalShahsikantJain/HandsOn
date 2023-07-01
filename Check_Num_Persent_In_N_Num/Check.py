"""
    Author : Pakshal Shashikant Jain 
    Date : 30/06/2023
    Program : Accept N numbers from user check whether that numbers contains 11 in it or not.
              Input : N : 6
                      Elements : 85 66 11 80 93 88
              Output : 11 is present

              Input : N : 6
                      Elements : 85 66 3 80 93 88
              Output : 11 is absent
"""

#############################################################################################################################################

#Class Declaration
class Check :
    #Characteristics of Class
    isize = 0;
    arr = [];
    i = 0;

    #Constructor of Class
    def __init__(self) :
        self.isize = 0;
        self.arr = [];
        self.i = 0;

    #Behaviour of Class To Take Input From User
    def Accept(self) :
        No = 0;

        #Taking input From user
        print("Enter Number of Elements You Want in array : ");
        self.isize = int(input());

        #Inserting Elements in array 
        print("Enter Elements in array : ");
        for self.i in range(self.isize) :
            No = 0;

            print("Enter Element Number : ",self.i + 1);
            No = int(input());

            self.arr.append(No);

    #Behaviour of Class To Check 11 is present or Not in Entered N Numbers
    def check(self) :
        for self.i in range(self.isize) :
            if(self.arr[self.i] == 11) : 
                break;

        if(self.arr[self.i] == 11) :
            return True;
        else :
            return False;

#Main Function
def main() :
    bret = True;

    print("Ganapati Bappa Morya...");   

    #Creating object of Check Class
    cobj = Check();
    #Calls To Behaviour of Class
    cobj.Accept();
    bret = cobj.check();

    #Handeling Conditions 
    if(bret == True) :
        print("11 Number is Present In Entered N Numbers");
    else :
        print("11 Number is Not Present In Entered N Numbers");
    
###############################################################################################################################################3

#Call Back Method to Call main Function 
if __name__ == "__main__" :
    #Call To Main Function
    main();