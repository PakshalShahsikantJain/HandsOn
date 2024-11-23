"""
    Author : Pakshal Shashikant Jain 
    Date : 09/08/2023
    Program : Write a program which accept string from user and check whether
              it contains vowels in it or not.

             Input : "marvellous"
             Output : TRUE

             Input : "Demo"
             Output : TRUE

             Input : "xyz"
             Output : FALSE 
 
"""

##########################################################################################################################################

#Function To Check Entered String Contains Vowels or not
def Check(arr) :
    ascii = 0;

    #Logic To Check
    for i in range(len(arr)) :
        if((arr[i] >= 'A')and(arr[i] <= 'Z')) :
            ascii = ord(arr[i]) + 32;

            arr[i] = chr(ascii);

        if((arr[i] == 'a')or(arr[i] == 'e')or(arr[i] == 'i')or(arr[i] == 'o')or(arr[i] == 'u')) :
            break;

    if((arr[i] == 'a')or(arr[i] == 'e')or(arr[i] == 'i')or(arr[i] == 'o')or(arr[i] == 'u')) :
        return True;
    else :
        return False;

#################################################################################################################################################

#Main Function
def main() :
    str = " ";
    arr = [];
    bret = False;

    print("Jay Ganesh.....");

    #Taking Input from user
    print("Enter One String");
    str = input();

    #Converting String To Character array 
    arr = list(str);    

    #Call To Check Function
    bret = Check(arr);

    #Handeling Conditions According To Output 
    if(bret == True) :
        print("Entered String Contains Vowels");
    else :
        print("Entered String Does Not Contains Vowels");

############################################################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call To Main Function
    main();