"""
    Author : Pakshal Shashikant Jain 
    Date : 25/05/2024
    Program : Write a program which accepts file name from user and count number of
              small characters from that file.

              Input : Demo.txt
              Output : Number of small characters are 21
"""

#########################################################################################################################################################

#Function To Count Small Characters From File 
def CountSmall(fname) :
    sret = " ";
    icnt = 0;
    i = 0;
    fd = 0;
    arr = [];

    #Opening File in Read Mode Only
    fd = open(fname,'r');

    if(fd.fileno() == -1) :
        print("Unable to Open File");
        return -1;
    else :
        print("File Successfully Opened With File Descriptor : %d"%fd.fileno());

    #Reading Data From File and Storing it in Local Array 
    print("Data From File is : ");
    iret = fd.read();
    print(iret);
    arr = list(iret);

    #Count Number of Small Characters From File 
    for i in range(len(arr)) :
        if((arr[i] >= 'a')and(arr[i] <= 'z')) :
            icnt = icnt + 1;
    
    #Closing File 
    fd.close();

    #Returning Frequency of Small Characters 
    return icnt;

###########################################################################################################################################

#Main Function
def main() :
    fname = " ";
    iret = 0;

    print("Jay Ganesh.....");

    #Taking File Name as Input From User
    print("Enter File Name : ");
    fname = input();

    #Call To Count Small Function
    iret = CountSmall(fname);

    #Printing Count of Small Characters
    print("Count of Small Characters From File is : %d"%iret);

############################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__": 
    #Call To Main Function
    main();