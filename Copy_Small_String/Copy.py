"""
    Author : Pakshal Shashikant Jain
    Date : 25/08/2023
    Program : Write a program which accept string from user and copy small
              characters of that string into another string.

              Input : "Marvellous multi OS"
              Output : "arvellous multi"
"""

########################################################################################################################################

#Class Declaration
class CopyString :
    #Characteristics of Class
    arr = [];
    brr = [];
    Str = " ";
    
    #Constructor of Class
    def __init__(self) :
        self.arr = [];
        self.brr = [];
        self.Str = " ";

    #Behaviour of CLass To Take Input from user
    def Accept(self) :
        #Taking Input from user
        print("Enter one String");
        self.Str = input();

        self.arr = list(self.Str);

    #Behaviour of Class To Copy Small String from Entered String into Another String
    def StrCpySmall(self) :
        i = 0;
        
        #Logic To Copy String
        while(i != len(self.arr)) :
            if(self.arr[i] == ' ') :
                self.brr.append(self.arr[i]);

            if((self.arr[i] >= 'a')and(self.arr[i] <= 'z')) :
                self.brr.append(self.arr[i]);
            
            i = i + 1;

#Main Function
def main() :
    print("Jay Ganesh....");

    #Creating object of CopyString Class 
    cobj = CopyString();

    #Call To Behaviours of Class
    cobj.Accept();
    cobj.StrCpySmall();

    #Printing Small Letters Copied
    print("Small Letters Copied From String is : %s"%"".join(cobj.brr));

#########################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();