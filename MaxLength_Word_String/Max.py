"""
    Author : Pakshal Shashikant Jain
    Date : 23/09/2023
    Program : Write a program which accept string from user and return length of
              largest word.

              Input : "Marvellous Multi OS Infosystems"
              Output : 11
"""

###############################################################################################################################################################################

#Function To Find Out Length of Largest Word
def MaxWordLength(arr) :
    i = 0;
    icnt = 0;
    iMax = 0;

    if(arr == None) :
        return;

    #Logic To Find
    while(i != len(arr)) :
        if(arr[i] == ' ') :
            while((arr[i] == ' ')and(i != len(arr))) :
                i = i + 1;
            icnt = 0;
        else :
            icnt = icnt + 1;
            if(icnt > iMax) :
                iMax = icnt;
            i = i + 1;
    
    return iMax;

#######################################################################################################################################################################

#Main Function
def main() :
    iret = 0;
    str = " ";
    arr = [];

    print("Jay Ganesh....");

    #Taking Input from user
    print("Enter One String");
    str = input();

    #Creating Character array of Entered String
    arr = list(str);

    #Call To TO MaxWordLength Function 
    iret = MaxWordLength(arr);

    #Printing Length of Largest Word
    print("Length of Largest Word is : ",iret);

########################################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();