"""
    Author : Pakshal Shashikant Jain
    Date : 05/10/2023
    Program : Input : "Marvellous"
              Output : 
              M
              M a
              M a r
              M a r v
              M a r v e
              M a r v e l
              M a r v e l l
              M a r v e l l o
              M a r v e l l o u
              M a r v e l l o u s

              Input : “PPA”
              Output : 
              P
              P P
              P P A 
"""

############################################################################################################################################

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
        self.str = input()
        self.arr = list(self.str);

    #Behaviour of Class To Display Given Pattern
    def Display(self) :
        i = 0;
        j = 0;

        if(self.arr == None) :
            return;

        #Printing Given Pattern
        print("Printing Below Given Pattern");
        for i in range(len(self.arr)) :
            for j in range(len(self.arr)) :
                if(i >= j) :
                    print(self.arr[j],end = "\t");
            print();

##########################################################################################################################################

#Main Function
def main() :
    print("Jay Ganesh....");

    #Creating object of StringPattern Class
    sobj = StringPattern();

    #Call To Behaviours of Class
    sobj.Accept();
    sobj.Display();

####################################################################################################################################

#Call Back Method to Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();