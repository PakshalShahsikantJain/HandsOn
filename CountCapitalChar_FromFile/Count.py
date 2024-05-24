"""
    Author : Pakshal Shashikant Jain 
    Date : 24/05/2024
    Program : Write a program which accepts file name from user and count number of
              capital characters from that file.

              Input : Demo.txt
              Output : Number of capital characters are 23
"""

###############################################################################################################################################################

#Function To Count Capital Characters From File
def CountCapital(fname) :
    arr = [];
    icnt = 0;
    iret = " ";

    #Opening File
    fd = open(fname,'r');

    if(fd.fileno() == -1) :
        print("Unable To Open File");

        return;
    else :
        print("File Successfully Opened With File Descriptor : %d"%fd.fileno());

    #Reading Data From File and Storing it in Local array
    iret = fd.read();
    arr = list(iret);

    #Counting Number of Capital Characters From File
    for i in range(0,len(arr)) :
        if((arr[i] >= 'A')and(arr[i] <= 'Z')) :
            icnt = icnt + 1;

    #Closing File
    fd.close();

    #Returning Frequecy of Capital Characters
    return icnt;

#######################################################################################################################

#Main Function
def main() :
    name = " ";
    iret = 0;

    print("Jay Ganesh.....");

    #Taking File Name as Input From User
    print("Enter File Name : ");
    name = input();

    #Call To CountCapital Function
    iret = CountCapital(name);

    #Printing Count of Capital Characters
    print("Count of Capital Characters From File is : %d"%iret);

###############################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();