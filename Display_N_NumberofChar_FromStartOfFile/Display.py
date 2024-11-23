"""
    Author : Pakshal Shashikant Jain 
    Date : 28/05/2024
    Program : Write a program which accepts file name and one count from user and read
              that number of characters from starting position.

              Input : Demo.txt 12
              Output : Display first 12 characters from Demo.txt 
"""

############################################################################################

#Function To Display N Number of Characters From File
def DisplayN(fname,isize) :

    #Opening File in Read Mode Only
    fd = open(fname,'r');

    if(fd.fileno() == -1) :
        print("Unable To Open File");
    else :
        print("File Successfully Opened With File Descriptor : %d"%fd.fileno());
    
    #Reading N Number of Characters From File
    iret = fd.read(isize);

    #Printing Data From File
    print("Data From File is : ");
    print(iret);

###################################################################################

#Main Function
def main() :
    str = " ";
    no = 0;

    print("Jay Ganesh......");

    #Taking Input From User
    print("Enter File Name : ");
    str = input();

    print("Enter No of Character You Want To Read From File");
    no = int(input());

    #Call To DisplayN Function
    DisplayN(str,no);

#########################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();