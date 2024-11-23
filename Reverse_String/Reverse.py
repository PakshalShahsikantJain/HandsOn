"""
    Author : Pakshal Shashikant Jain 
    Date : 21/08/2023
    Program : Write a program which accept string from user reverse that string
              in place.

              Input : “abcd”
              Output : “dcba”

              Input : “abba”
              Output : “abba” 
"""

#Class Declaration
class Reverse :
    #Characteristics of Class
    str = " ";
    arr = [];

    #Constructor of Class
    def __init__(self) :
        self.str = " ";
        self.arr = [];

    #Behaviour of Class To Take Input from user
    def Accept(self) :
        #Taking Input from user
        print("Enter One String");
        self.str = input();

        #Converting string to array 
        self.arr = list(self.str);
    
    #Behaviour of Class To Reverse String 
    def StrRev(self) :
        istart = 0;
        iend = 0;
        temp = ' ';

        if(self.arr == None) :
            return;

        #Logic To Reverse String 
        while(iend != len(self.arr)) :
            iend = iend + 1;
        
        iend = iend - 1;
        
        while(istart < iend) :
            temp = self.arr[istart];
            self.arr[istart] = self.arr[iend];
            self.arr[iend] = temp;

            istart = istart + 1;
            iend = iend - 1;

################################################################################################################################################

#Main Function
def main() :
    print("Jay Ganesh....");

    #Creating object Reverse 
    robj = Reverse();

    #Call To Behaviour of Class
    robj.Accept();
    robj.StrRev();

    #Printing Reversed String 
    print("Reversed String is :",''.join(robj.arr));

###########################################################################################################################################

#Call Back Method To Call To Main Function
if __name__ == "__main__" :
    #Call To Main Function 
    main();