"""
    Author : Pakshal Shashikant Jain 
    Date : 27/05/2024
    Program : Write a program which accepts file name and one character from user and
              count number of occurrences of that characters from that file.

              Input : Demo.txt ‘M’
              Output : Frequency of M is 7 
"""

################################################################################################################

#Function To Count Frequency of Entered Character
def CountChar(fname,ch) :
    fd = 0;
    sret = 0
    arr = [];
    icnt = 0;

    #Opening File in Read Mode Only
    fd = open(fname,'r');

    if(fd.fileno() == -1) :
        print("Unable to Open File");
    else :
        print("File Successfully Opened With File Descriptor : %d"%fd.fileno());

    #Reading Data From File and Storing it in Local array    
    print("Data From File is : ");
    sret = fd.read();
    print(sret);

    #Storing Data in Local Array
    arr = list(sret);

    #Counting Frequency of Entered Character
    for i in range(len(arr)) :
        if(arr[i] == ch) :
            icnt = icnt + 1;

    #Returning Count of Entered Character
    return icnt;    

#############################################################################

#Main Function
def main() :
    str = " ";
    ch = ' ';
    iret = 0;

    print("Jay Ganesh....");

    #Taking File Name as Input From User
    print("Enter File Name : ");
    str = input();

    print("Enter Character You Want To Count Frequency of : ");
    ch = input();

    #Call To CountChar Function
    iret = CountChar(str,ch);
    print("Count of Entered Character From File is %d"%iret);

##########################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();