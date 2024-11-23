"""
    Author : Pakshal Shashikant Jain 
    Date : 16/05/2024
    Program : Write application which accept file name from user and open that file in read mode.

              Input : Demo.txt
              Output : File opened successfully. 
"""

###########################################################################################################################################################################

#Function To Open File in Read Mode 
def FileIO(name) :
    fd = open(name,mode = 'r',encoding = 'utf-8');

    if(fd != None) :
        print("File Opened Successfully");
    else :
        print("Unable to Open File");

#################################################################################################################################################################

#Main Function
def main() :
    fname = " ";

    print("Jay Ganesh.....");
    
    #Taking Input From User
    print("Enter File Name : ");
    fname = input();

    #Call To FileIO Function
    FileIO(fname);

###################################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();