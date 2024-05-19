"""
    Author : Pakshal Shashikant Jain 
    Date : 19/05/2024
    Program : Write application which accept file name from user and read all data from that file
              and display contents on screen.
            
              Input : Demo.txt
              Output : Display all data of file. 
"""

#############################################################################################################################################################

#Function To Read Whole Data of File
def ReadFile(fname) :
    fd = 0;
    sret = " ";
    isize = 0;

    #Opening File in Read Mode
    fd = open(fname,mode = 'r',encoding = 'UTF-8');

    #Logic To Read File
    if(fd == None) :
        print("Unable To Open File");
    else :
        print("File Successfully Opened with File Descriptor :",fd.fileno());

    #Reading Data of File 
    sret = fd.read();
    print("Data From File is : ");
    print(sret);

    #Calculating Size of File 
    isize = fd.seek(0,2);

    #Closing Opened File
    fd.close();

    return isize;

############################################################################################################################

#Main Function
def main() :
    name = " ";
    iret = 0;

    print("Jay Ganesh....");

    #Taking File Name as Input From User
    print("Enter File Name : ");
    name = input();

    #Call To ReadFile Function
    iret = ReadFile(name);
    print("Size of File is : %d bytes"%iret);

################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();