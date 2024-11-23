"""
    Author: Pakshal Shashikant Jain
    Date: 04/05/2024
    Program: Write a recursive program which display below pattern.
             Output : A B C D E F 
"""

############################################################################################################

#Function To Display Given Pattern
def Pattern(ino,ch) :
    ascii = 0;

    if(ino < 1) :
        return;
    else :
        print(ch,end = " ");
        ascii = ord(ch) + 1;
        ch = chr(ascii);
        ino = ino - 1;

        #Recursive Function
        Pattern(ino,ch);

#############################################################################################################

#Main Function
def main() :
    ino = 0;
    ch = ' ';

    print("Jay Ganesh......");

    #Taking Input From User
    print("Enter Any One Number : ");
    ino = int(input());

    print("Enter One Character : ");
    ch = input();

    print("Output : ");

    #Calll To Pattern Function
    Pattern(ino,ch);

##############################################################################################################

#Call Back Method To call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();