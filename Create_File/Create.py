"""
    Author : Pakshal Shashikant Jain 
    Date : 17/05/2024
    Program : Write application which accept file name from user and create that file.
              
              Input : Demo.txt
              Output : File created successfully. 
"""

##################################################################################################

#Function To Create File
def CreateFile(fname) :
    #Creating File
    fd = open(fname,'w',encoding = 'utf-8');

    if(fd == None) :
        print("Unable To Create File");
    else :
        print("File Successfully Created");

##################################################################################################

#Main Function
def main() :
    fname = " ";

    print("Jay Ganesh....");

    #Taking Input From User
    print("Enter File Name To Create");
    fname = input();

    #Call To CreatFile Function
    CreateFile(fname);

###################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();