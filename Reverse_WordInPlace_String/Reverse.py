"""
    Author : Pakshal Shashikant Jain
    Date : 26/09/2023
    Program : Write a program which accept string from user and reverse each
              word in place.
              
              Input : "Marvellous Multi OS
              Output : "suollevraM itluM SO" 
"""

#######################################################################################################

#Class Declaration
class StringRev :
    #Characteristics of Class
    str = " ";
    arr = [];

    #Constructor of Class
    def __init__(self) :
        self.first = 0;
        self.last = 0;
    
    #Behaviour of Class To Take Input from user
    def Accept(self) :
        #Taking input from user
        print("Enter One Sting")
        self.str = input();
        self.arr = list(self.str);
    
    #Behaviour of Class To Reverse Each String Words
    def StrWrdRev(self) :
        first = 0;
        last = 0;
        i = 0;
        j = 0;

        #logic To Rerverse 
        while(last != len(self.arr)) :
            if(self.arr[last] == ' ') :
                while((self.arr[last] == ' ')and(last != len(self.arr))) :
                    last = last + 1;
                last = last - 1;
            else : 
                first = last;

                while((self.arr[last] != ' ')and(last != len(self.arr) - 1)) :
                    last = last + 1;
                if(self.arr[last] == ' ') :
                    last = last - 1;

                i = first;
                j = last;

                while(i <= j) :
                    temp = self.arr[i];
                    self.arr[i] = self.arr[j];
                    self.arr[j] = temp;

                    i = i + 1;
                    j = j - 1;

            last = last + 1;

########################################################################################################3

#Main Function
def main() :
    print("Jay Ganesh....");

    #Creating object of StringRev Class
    sobj = StringRev();

    #Call to Behaviours of Class
    sobj.Accept();
    sobj.StrWrdRev();

    #Printing Reversed String
    print("Reversed String is :","".join(sobj.arr));

####################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();