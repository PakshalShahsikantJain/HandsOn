"""
    Author : Pakshal Shashikant Jain 
    Date : 31/07/2023
    Program : Write a program which displays ASCII table. Table contains symbol,
              Decimal, Hexadecimal and Octal representation of every member from
              0 to 255
"""

#########################################################################################################################

#Class Declaration
def AsciiTable() :
    i = 0;

    #Logic To Display Ascii Table
    print("-----------Ascii Table-------------------");
    print("Decimal \t Hexadecimal \tOctal \tSymbol");
    for i in range(256) :
        print("%d \t\t %x \t\t%o \t %c"%(i,i,i,i));
        print(" ");

##########################################################################################################

#Main function
def main() :
    print("Jay Ganesh......");

    #Call To Ascii Table 
    AsciiTable();

########################################################################################################################

#Call Back Method To Call Main function
if __name__ == "__main__" :
    #Call To Main function
    main();