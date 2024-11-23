"""
    Author : Pakshal Shashikant Jain 
    Date : 13/09/2023
    Program : Write a program which accepts 2 strings from user and concat N
              characters of second string after first string.Value of N should be
              accepted from user. (Implement strncat() function).

              Note : If third parameter is greater than the size of second string then
              concat whole string after first string.

              Input : "Marvellous Infosystems"
                      "Logic Building"
                       5
              Output : "Marvellous Infosystems Logic"
"""

########################################################################################################################################################

#Class Declaration
class String :
    #Characteristics of Class
    arr = [];
    brr = [];
    str1 = " ";
    str2 = " ";
    icnt = 0;

    #Constructor of Class
    def __init__(self) :
        self.arr = [];
        self.brr = [];
        self.str1 = " ";
        self.str2 = " ";
        self.icnt = 0;

    #Behaviour of Class To Take Input from user
    def Accept(self) :
        #Taking input from user
        print("Enter One String");
        self.str1 = input();

        print("Enter Second String");
        self.str2 = input();

        print("Enter One Size");
        self.icnt = int(input());

        #Creating Character array of Entered Strings
        self.arr = list(self.str1);
        self.brr = list(self.str2);

    #Behaviour of Class To Concatenate String till Entered Size
    def StrNCatX(self) :
        i = 0;

        #Logic
        self.arr.append(' ');
        while((i != len(self.brr))and(self.icnt != 0)) :
            self.arr.append(self.brr[i]);
            i = i + 1
            self.icnt = self.icnt - 1;

#########################################################################################################################################################

def main() :
    print("Jay Ganesh....");

    #Creating object of String Class
    sobj = String();

    #Call To Behaviours of Class
    sobj.Accept();
    sobj.StrNCatX();

    #Printing Concated String 
    print("Concatenated String is : ","".join(sobj.arr));

#################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();