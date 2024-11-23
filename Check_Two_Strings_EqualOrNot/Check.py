"""
    Author : Pakshal Shashikant Jain 
    Date : 14/09/2023
    Program : Write a program which 2 strings from user and check whether
              contents of two strings are equal or not. (Implement strcmp()
              function).

              Input : "Marvellous Infosystems"
                      "Marvellous Infosystems"
              Output : TRUE 
"""

#Class Declaration
class StringCmp :
    #Characteristics of Class
    str1 = " ";
    str2 = " ";
    arr = [];
    brr = [];

    #Constructor of Class
    def __init__(self) :
        self.str1 = " ";
        self.str2 = " ";
        self.arr = [];
        self.brr = [];
    
    #Behaviour of Class To Take Input from user
    def Accept(self) :
        #Taking Input from  user
        print("Enter First String");
        self.str1 = input();

        print("Enter Second String");
        self.str2 = input();

        #Creating Character array of Entered Strings
        self.arr = list(self.str1);
        self.brr = list(self.str2);
    
    #Behaviour of Class To Compare Two Strings
    def StrCmpX(self) :
        i = 0;
        j = 0;

        if((self.arr == None)and(self.brr == None)) :
            return False;        
        elif(len(self.arr) != len(self.brr)) :
            return False;

        #Logic To Compare
        while((i != len(self.arr) - 1)and(j != len(self.brr) - 1)) :
            if(self.arr[i] != self.brr[j]) :
                break;
            i = i + 1;
            j = j + 1;

        if(self.arr[i] != self.brr[j]) :
            return False;
        else :
            return True;

############################################################################################
        
#Main Function
def main() :
    bret = False;

    print("Jay Ganesh....");

    #Creating object of StringCmp Class
    sobj = StringCmp();

    #Call To Behaviours of Class
    sobj.Accept();
    bret = sobj.StrCmpX();

    #Handeling Conditions if bret is True
    if(bret == True) :
        print("Both Strings are Equal");
    #Handeling Condition if bret is False
    else :
        print("Both Strings are Not Equal");

######################################################################################################

#Call Back Method To Call Main function
if __name__ == "__main__" :
    #Call To Main Function
    main();