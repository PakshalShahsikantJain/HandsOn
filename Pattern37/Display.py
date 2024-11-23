"""
    Author : Pakshal Shashikant Jain
    Date : 02/10/2023
    Program : Write a program which accept string from user and print below
              pattern.

              Input : "Marvellous"
              Output : M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
              
              Input : "PPA"
              Output : P P A
                       P P A
                       P P A 
"""

##################################################################################################################################################33

#Class Declaration
class Pattern :
    #Characteristics of Class
    str = " ";
    arr = [];

    #Constructor of Class
    def __init__(self) :
        self.str = " ";
        self.arr = [];

    #Behaviour of Class To Take Input from user
    def Accept(self) :
        print("Enter one String..");
        self.str = input();

        self.arr = list(self.str);
    
    #Behaviour of Class
    def Display(self) :
        i = 0;
        j = 0;

        if(self.arr == None) :
            return;
        
        #Logic To Print Given Pattern
        for i in range(len(self.arr)) :
            for j in range(len(self.arr)) :
                print(self.arr[j],end = "\t");
            print(" ");

#######################################################################################################################################3333

#Main Function
def main():
    print("Jay Ganesh....");

    #Creating object of Pattern Class
    pobj = Pattern();

    #Call To Behaviours of Class
    pobj.Accept();
    pobj.Display();

#######################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();