"""
    Author : Pakshal Shashikant Jain 
    Date : 21/09/2023
    Program : Accept string from user and check whether the string is palindrome    
              or not without considering its case.

              Input : “1abccBA1”
              Output : TRUE
"""

######################################################################################################333

#Class Declaration
def StrPallindrome(arr) :
    first = 0;
    last = 0;
    ascii = 0;

    if(arr == None) :
        return False;

    #Logic To Check
    while(last != len(arr)) :
        last = last + 1;
    last = last - 1;

    while(first <= last) :
        if((arr[first] >= 'A')and(arr[first] <= 'Z')) :
            ascii = ord(arr[first]) + 32;
            arr[first] = chr(ascii);

        if(first != last) :
            if((arr[last] >= 'A')and(arr[last] <= 'Z')) :
                ascii = ord(arr[last]) + 32;
                arr[last] = chr(ascii);
        
        if(arr[first] != arr[last]) :
            break;

        first = first + 1;
        last = last - 1;

    if(arr[first] != arr[last]) :
        return False;
    else :
        return True;

######################################################################################################33

#Main Function
def main() :
    str = " ";
    arr = [];
    bret = False;

    print("Jay ganesh.....");
    
    #Taking Input from user
    print("Enter One String");
    str = input();

    #Creating character array of String
    arr = list(str);

    #Call To StrPallindrime Function
    bret = StrPallindrome(arr);
    
    #Handeling Condition if bret is True
    if(bret == True) :
        print("String is Pallindrome");
    else :
        print("String is Not Pallindrome");

#######################################################################################################

#Call Back Method To Call Main Function
if __name__ == "__main__" :
    #Call TO Main Function
    main();