"""
    Author : Pakshal Shashikant Jain
    Date : 25/08/2023
    Program : Write a program which accept string from user and copy capital
              characters of that string into another string.
            
              Input : "Marvellous Multi OS"
              Output : "MMOS"
"""

#####################################################################################################################################################

#Class Declaration
class CopyString :
    #Characteristics of Class
    src = [];
    dest = [];
    Str = " ";

    #Constructor of Class
    def __init__(self) :
        self.src = [];
        self.dest = [];
        self.Str = " ";
    
    #Behaviour of Class To Take Input from user
    def Accept(self) :
        #Taking Input from user
        print("Enter One String");
        self.Str = input();

        self.src = list(self.Str);
    
    #Behaviour of Class to Copy Capital Letters From Entered String into another String
    def StrCapCpy(self) :
        i = 0;

        if((self.src == None)and(self.dest == None)) :
            return;

        #Logic To Copy
        while(i != len(self.src)) :
            if((self.src[i] >= 'A')and(self.src[i] <= 'Z')) :
                self.dest.append(self.src[i]);
            i = i + 1;

#####################################################################################################################################################
        
#Main Function
def main() :
    print("Jay Ganesh....");

    #Creating object of CopyString 
    cobj = CopyString();
    #Call To Behaviour of Class
    cobj.Accept();
    cobj.StrCapCpy();

    #Printing Copied String
    print("Capital Lettter Copied from Entered String into Another String is : %s"%"".join(cobj.dest));

######################################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();