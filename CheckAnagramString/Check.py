"""
    Author: Pakshal Shashikant Jain
    Date: Pakshal Shashikanty Jain
    Program: Program to check given strings are Anagram or not
"""

#Start of class
class String :
    #Constructor of class
    def __init__(self,str1,str2) :
        self.arr = list(str1);
        self.brr = list(str2);

    #Function to check entered strings are anagram or not 
    def ChkAnagram(self) :
        icnt = 0;
        i = 0;
        j = 0;

        for i in range(len(self.arr)) :
            icnt = 0;
            for j in range(len(self.brr)) :
                if(self.arr[i] == self.brr[j]) :
                    # print(self.brr[j],end="\t");
                    icnt = icnt + 1;
                    # print(icnt);
            # print(icnt);
            if(icnt < 1) :
                break;

        if(icnt < 1) :
            return False;
        else :
            return True;

#Main function
def main() :
    str1 = "";
    str2 = "";
    bret = False;

    print("Jay Ganesh....");

    #Taking input from user 
    print("Enter one string");
    str1 = input();

    print("Enter Second String");
    str2 = input();

    #Creatin object of String class
    sobj = String(str1,str2);

    #Call to behaviour of class
    bret = sobj.ChkAnagram();

    if(bret == True) :
        print("Strings are anagram");
    else :
        print("Strings are not anagram");

#Call back method to call main function
if __name__ == "__main__" :
    #Call to main function
    main();