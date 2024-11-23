"""
    Author : Pakshal Shashikant Jain 
    Date : 20/05/2024
    Program : Write application which accept file name from user and one string from user. Write
              that string at the end of file.

              Input : Demo.txt
                      Hello World

              Output : Write Hello World at the end of Demo.txt file 
"""

#####################################################################################################################################

#Function To Append Data into File
def Append(fname,data) :
    iret = 0;

    #Opening File in Append Mode
    fd = open(fname,mode = 'a',encoding = 'cp1252');
    
    if(fd == None) :
        print("Unable To Open File : ");
    else :
        print("File Successfully Opened With File Descriptor : %d"%fd.fileno());   #fileno() function is used to Display FileDescriptor of Opened File

    #Write Data Into File
    iret = fd.write(data);

    if(iret == 0) :
        print("Unable To Write Data into File : ");
    else :
        print("%d bytes of Data Have Been Successfully Written into File"%iret);

    fd.close();

####################################################################################################################################

#Main Function
def main() :
    fname = " ";
    data = " ";

    print("Jay Ganesh.....");

    #Taking File Name as Input From User
    print("Enter File Name : ");
    fname = input();

    #Taking Data as Input From User To Be Written into File 
    print("Enter Data You Want To Append At The End of File : ");
    data = input();

    #Call To Append Function
    Append(fname,data);

########################################################################################################################################

#Call To Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();