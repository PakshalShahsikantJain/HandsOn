"""
    Author : Pakshal Shashikant Jain 
    Date : 18/09/2023
    Program : Accept sing from user and reverse the contents of that string by
              toggling the case.

              Input : "aCBdef"
              Output : "FEDcbA" 
"""

########################################################################################################################################################

#Class Declaration
class StringRevTog :
    #Characteristics of Class
    arr = [];
    str = " ";

    #Constructor of Class
    def __init__(self) :
        self.arr = [];
        self.str = " ";
    
    #Behaviour of Class to Take Input from user
    def Accept(self) :
        #Taking Input from user
        print("Enter One String");
        self.str = input();

        self.arr = list(self.str);
    
    #Behaviour of Class
    def StrRevTogX(self):
        first = 0;
        last = 0;
        temp = ' ';
        ascii = 0;

        #Logic To Reverse String After Toggling Case
        while(last != len(self.arr)) :
            last = last + 1;

        last = last - 1;
    
        while(first <= last) :
            if((self.arr[first] >= 'A')and(self.arr[first] <= 'Z')) :
                ascii = ord(self.arr[first]) + 32;
                self.arr[first] = chr(ascii);
            elif((self.arr[first] >= 'a')and(self.arr[first] <= 'z')) :
                ascii = ord(self.arr[first]) - 32;
                self.arr[first] = chr(ascii);

            if(last != first) :
                if((self.arr[last] >= 'A')and(self.arr[last] <= 'Z')) :
                    ascii = ord(self.arr[last]) + 32;
                    self.arr[last] = chr(ascii);
                elif((self.arr[last] >= 'a')and(self.arr[last] <= 'z')) :
                    ascii = ord(self.arr[last]) - 32;
                    self.arr[last] = chr(ascii);
            
            temp = self.arr[first];
            self.arr[first] = self.arr[last];
            self.arr[last] = temp;

            first = first + 1;
            last = last - 1;

###################################################################################################################################

#Main Function
def main() :
    print("Jay Ganesh.....");

    #Creating object of StringRevTog Class
    sobj = StringRevTog();
    #Call To Behaviours of Class
    sobj.Accept();
    sobj.StrRevTogX();

    #Printing Reversed String
    print("Reversed string after Toggling Case is : ","".join(sobj.arr));

#############################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();