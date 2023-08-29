"""
    Author : Pakshal Jain
    Date : 28/08/2023
    Program : Write a program which accept string from user and copy that
              characters of that string into another string in reverse order.

              Input : "Marvellous Python"
              Output : "nohtyP suollevraM" 
"""

###########################################################################################################################################################

#Class Declaration
class CopyStringRev :
    #Characteristics of Class
    src = [];
    dest = [];
    Str = " ";

    #constructor of Class
    def __init__(self) :
        self.arr = [];
        self.brr = [];
        self.Str = " ";

    #Behaviour of Class To Take Input from user
    def Accept(self) :
        #Taking Input from user
        print("Enter One String");
        self.Str = input();

        self.src = list(self.Str);
    
    #Behaviour of Class To Copy String in Reverse Order
    def StrCpyRev(self) :
        i = 0;
        
        #Logic To Copy String in Reverse Order
        for i in range(len(self.src) - 1,-1,-1) :
            self.dest.append(self.src[i]);
        
#######################################################################################################################################################

#Main Function
def main() :
    print("Jay Ganesh....");

    #Creating object of CopyStringRev Class
    cobj = CopyStringRev();

    #Call To behaviours of Class
    cobj.Accept();
    cobj.StrCpyRev();

    #Printing Copied String in Reverse Order
    print("String Copied in Reverse Direction is : %s"%"".join(cobj.dest));

########################################################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();