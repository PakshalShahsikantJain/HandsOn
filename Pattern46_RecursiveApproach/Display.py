"""
    Author : Pakshal Shashikant Jain 
    Date : 5/5/2024
    Program : Write a recursive program which accept number from user and display below
              pattern.

              Input : 5
              Output : 5 * 4 * 3 * 2 * 1 * 
"""

######################################################################################################################################

#Function To Display Given Pattern 
def Display(ino) :
    if(ino < 1) :
        return;
    else :
        print("%d\t*\t"%ino,end = "");
        ino = ino - 1;

        #Recursive Function Call
        Display(ino);

######################################################################################################################################

#Main Function
def main() :
    ino = 0;

    print("Jay Ganesh.....");

    #Taking Input From User
    print("Enter One Number : ");
    ino = int(input());

    print("Output : ");

    #Call To Display Function
    Display(ino);

######################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();