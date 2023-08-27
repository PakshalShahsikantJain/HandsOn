"""
    Author : Pakshal Shashikant Jain 
    Date : 27/08/2023
    Program : Write a program which 2 strings from user and concat second string
              after first string. (Implement strcat() function).

              Input : "Marvellous Infosystems"
                      "Logic Building"

              Output : "Marvellous Infosystems Logic Building" 
"""

###########################################################################################################################################################3

#Class Declaration
class ConcatString :
    #Characteristics of Class
    arr = [];
    brr = [];
    Str = " ";
    Str2 = " ";

    #Constructor of Class
    def __init__(self) :
        self.arr = [];
        self.brr = [];
        self.Str = " ";
        self.Str2 = " ";

    #Behaviour of Class To Accept input from user
    def Accept(self) :
        #Taking Input from user
        print("Enter One String");
        self.Str = input();

        print("Enter Second String");
        self.Str2 = input();

        self.arr = list(self.Str);
        self.brr = list(self.Str2);

    #Behaviour of Class To Concatenate Two String
    def StrCatX(self) :
        i = 0;

        self.arr.append(' ');

        #Logic To Concatenate
        while i != len(self.brr) :
            self.arr.append(self.brr[i]);
            i = i + 1;

###################################################################################################################################################

#Main Function
def main() :
    print("Jay Ganesh....");

    #Creating object of ConcatString();
    cobj = ConcatString();

    #Call To Behaviours of Class
    cobj.Accept();
    cobj.StrCatX();

    #Printing Concatenated String
    print("Concatenated String is :","".join(cobj.arr));

################################################################################################################################################3

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();