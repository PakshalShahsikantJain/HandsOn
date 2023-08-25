"""
    Author : Pakshal Shashikant Jain
    Date : 24/08/2023
    Program : Write a program which accept string from user and copy the
              contents of that string into another string. (Implement strncpy() function)
              
              Input : "Marvellous Multi OS"
                       10
              Output : Marvellous
              
              Note : If third parameter is greater than the size of source string then
              copy whole string into destination. 
"""

###################################################################################################################################

#Class Declaration
class CopyString :
    #Characteristics of Class
    arr = [];
    brr = [];
    Str = " ";
    isize = 0;

    #Constructor of Class
    def __init__(self) :
        self.arr = [];
        self.brr = [];
        self.Str = " ";
        self.isize = 0;

    #Behaviour of Class To Take Input from user
    def Accept(self) :
        #Taking Input from user
        print("Enter One String");
        self.Str = input();

        print("Enter One Number Till You Want To Copy String");
        self.isize = int(input());

        self.arr = list(self.Str);
    
    def StrNCpyX(self) :
        i = 0;

        while((i != len(self.arr))and(self.isize != 0)) :
            self.brr.append(self.arr[i]);
            i = i + 1;
            self.isize = self.isize - 1;
            
#####################################################################################################################################################

#Main Function
def main() :
    print("Jay Ganesh....");

    #Creating object of CopyString Class
    cobj = CopyString();

    #Call To Behaviour os Class
    cobj.Accept();
    cobj.StrNCpyX();

    #Printing Copied String
    print("Copied String is : %s"%"".join(cobj.brr));

############################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();