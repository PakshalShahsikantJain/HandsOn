"""
    Author : Pakshal Shashikant Jain 
    Date : 16/08/2023
    Program : Write a program which accept string from user and count number of
              white spaces
    
              Input : "MarvellouS"
              Output : 0
    
              Input : "MarvellouS Infosystems"
              Output : 1
            
              Input : "MarvellouS Infosystems by Piyush Manohar Khairnnar"
              Output : 5
"""

###########################################################################################################################

#Class Declaration
class StrCountWhite :
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

        self.arr = list(self.str);
    
    #Behaviour of Class To Count Number of White Spaces Present in String 
    def Count(self) :
        i = 0;
        icnt = 0;

        #logic To Find
        while(i != len(self.arr)) :
            if(self.arr[i] == " ") :
                icnt = icnt + 1;
            i = i + 1;

        return icnt;

#############################################################################################################################################

#Main Function
def main() :
    iret = 0;

    print("Jay Ganesh.....");

    #Creating object of StrCountWhite
    sobj = StrCountWhite();

    #Call To Behaviour of Class
    sobj.Accept();
    
    iret = sobj.Count();

    #Print Count Calculated of White Spaces
    print("Count of white spaces in entered string is :",iret);

################################################################################################################################################333

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();