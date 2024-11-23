"""
    Author : Pakshal Shashikant Jain 
    Date : 06/08/2023
    Program : Write a program which accept string from user and count number of
              capital characters.

              Input : “Marvellous Multi OS”
              Output : 4 
"""

#################################################################################################################################################

#Class Declaration
class Capital :
    #Characteristics of Class
    str = " ";
    arr = [];

    #Constructor of Class 
    def __init__(self) :
        self.str = " ";
        self.arr= [];

    #Behaviour of Class To Take input from user
    def Accept(self) :
        #Taking input from user
        print("Enter One String");
        self.str = input();

        self.arr = list(self.str);

    #Behaviour of Class To Count Capital Letter
    def Count(self) :
        icnt = 0;

        #Logic To Count
        for i in range(len(self.arr)) :
            if((self.arr[i] >= 'A')and(self.arr[i] <= 'Z')) :
                icnt = icnt + 1;
        
        return icnt;

#########################################################################################################################################################3

#Main Function
def main() :
    iret = 0;

    print("Jay ganesh....");

    #Creating Object of Capital Class 
    cobj = Capital();

    #Call To Behaviour of Class
    cobj.Accept();
    iret = cobj.Count();

    #Printing Count of Capital Letters
    print("Count of Capital Letter is :",iret);

########################################################################################################################################

#Call Back Method To Call main Function
if __name__ == "__main__" :
    #Call To Main function
    main();