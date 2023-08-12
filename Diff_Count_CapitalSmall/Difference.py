"""
    Author : Pakshal Shashikant Jain 
    Date : 08/08/2023
    Program : Write a program which accept string from user and return
              difference between frequency of small characters and frequency of
              capital characters.

              Input : "MarvellouS"
              Output : 6 (8-2) 
"""

##########################################################################################################################################################

#Class Declaration
class Difference :

    #Characteristics of Class
    str = " ";
    arr = [];

    #Constructor of Class
    def __init__(self) :
        self.str = " ";
        self.arr = [];

    #Characteristics of Class To Take input from user
    def Accept(self) :
        print("Enter One String");
        self.str = input();

        self.arr = list(self.str);

    #Characteristics of Class To Calculate 
    def Calculate(self) :
        icnt = 0;
        icnt2 = 0;
        idiff = 0;

        #Logic To Calculate Difference
        for i in range(len(self.arr)) :
            if((self.arr[i] >= 'A')and(self.arr[i] <= 'Z')) :
                icnt = icnt + 1;
            elif((self.arr[i] >= 'a')and(self.arr[i] <= 'z')) :
                icnt2 = icnt2 + 1;        

        idiff = icnt2 - icnt;
        
        return idiff;

#########################################################################################################################################################

#Main Function
def main() :
    iret = 0;

    print("Jay Ganesh....");

    #Creating object of Difference Class
    dobj = Difference();

    #Call To Behaviour of Class
    dobj.Accept();
    iret = dobj.Calculate();

    #Printing Difference Calculated
    print("Difference Between Small and Capital Letter is : %d"%iret);

###################################################################################################################################################

#Call Back Method To call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();