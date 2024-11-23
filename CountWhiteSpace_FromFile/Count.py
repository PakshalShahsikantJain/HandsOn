"""
    Author : Pakshal Shashikant Jain 
    Date : 26/05/2024
    Program : Write a program which accepts file name from user and count number of
              white spaces from that file.

              Input : Demo.txt
              Output : Number of white spaces are 13 
"""

######################################################################################################################################################

#Function To CountWhiteSpace From File 
def CountWhiteSpace(fname) :
    fd = 0;
    sret = " ";
    arr = [];
    icnt = 0;
    i = 0;

    #Opening File in Read Mode 
    fd = open(fname,'r');

    if(fd.fileno() == -1) :
        print("Unable To Open File");
    else :
        print("File Successfully Opened with File Descriptor : %d"%fd.fileno());

    #Reading Data From File 
    print("Data From File is : ");
    sret = fd.read();
    print(sret);

    #Storing Data From File in Local Array 
    arr = list(sret);
    for i in range(len(arr)) :
        if(arr[i] == ' ') :
            icnt = icnt + 1;
    
    return icnt;

########################################################################################################################################################

#Main Function
def main() :
    fname = " ";
    iret = 0;

    print("Jay Ganesh.....");

    #Taking File Name as Input From User 
    print("Enter File Name : ");
    fname = input();

    #Call To CountWhiteSpace Function
    iret = CountWhiteSpace(fname);
    print("Count of White Space From File is : ",iret);

#############################################################################################################################################################

#Call Back Method To Call main Function
if __name__ == "__main__" :
    #Call To Main Functionj
    main();