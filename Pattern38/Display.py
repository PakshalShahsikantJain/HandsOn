"""
    Author : Pakshal Shashikant Jain
    Date : 02/10/2023
    Program : Write a program which accept string from user and print below
              pattern.

              Input : "Marvellous"
              Output : M a r v e l l o u s
                       M a r v e l l o u
                       M a r v e l l o
                       M a r v e l l
                       M a r v e l
                       M a r v e
                       M a r v
                       M a r
                       M a
                       M

              Input : "PPA"
              Output : P P A
                       P P
                       P 
"""

###################################################################################################################################################3

#Class Declaration
class StringPattern :
    #Characteristics of Class
    str = " ";
    arr = [];

    #Constructor of Class
    def __init__(self) :
        self.str = " ";
        self.arr = [];

    #Behaviour of Class To Take Input from user
    def Accept(self) :
        print("Enter One String");
        self.str = input();
        self.arr = list(self.str);
    
    #Behaviour of Class to Print Given Pattern
    def Pattern(self) :
        i = 0;
        j = 0;

        if(self.arr == None) :
            return;

        #Logic To Print Given Pattern    
        for i in range(len(self.arr) - 1,-1,-1) :
            for j in range(len(self.arr)) :
                if(i >= j) :
                    print(self.arr[j],end = "\t");
            print();

####################################################################################################################################################

#Main Function
def main() :
    print("Jay Ganesh....");

    #Creating object of StringPattern Class
    sobj = StringPattern();

    #Call To Behaviours of Class
    sobj.Accept();
    sobj.Pattern();

###########################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    main();