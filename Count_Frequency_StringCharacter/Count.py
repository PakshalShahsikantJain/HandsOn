"""
    Author : Pakshal Shashikant Jain 
    Date : 19/08/2023
    Program : Write a program which accept string from user and accept one
              character. Return frequency of that character.
             
              Input : "Marvellous Multi OS"
                       M
              Output : 2

              Input : "Marvellous Multi OS"
                       W
              Output : 0 
"""

#########################################################################################################################################3

#Class Declaration
class CountChar :

    #Characteristics of Class
    ch = ' ';
    arr = [];
    Str = " ";

    #Constructor of Class
    def __init__(self) :
        self.ch = ' ';
        self.arr = [];
        self.Str = " ";
    
    #Behaviour of Class To Take Input from user
    def Accept(self) :
        #Taking input from user
        print("Enter One String");
        self.Str = input();
        
        print("Enter One Character");
        self.ch = input();

        self.arr = list(self.Str);

    #Behaviour of Class To Count
    def Count(self) :
        i = 0;
        icnt = 0;

        while(i != len(self.arr) - 1) :
            if(self.arr[i] == self.ch) :
                icnt = icnt + 1;
            i = i + 1;

        return icnt;

#############################################################################################################################################################

#Main Function
def main() :
    iret = 0;

    print("Jay Ganesh.....");

    #Creating object of CoutChar Class
    cobj = CountChar();
    #Call To Behaviour of Class
    cobj.Accept();
    iret = cobj.Count();

    print("Count of Entered Character in Entered String is : %d"%iret);

#######################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To main function
    main();